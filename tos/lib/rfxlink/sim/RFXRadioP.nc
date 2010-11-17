/*
 * Copyright (c) 2010 Aarhus University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of Aarhus University nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL AARHUS
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @author Morten Tranberg Hansen
 * @date   November 9 2010
 */

#include <Tasklet.h>
#include "TossimRadioMsg.h"

generic module RFXRadioP() {

  provides {
    interface SplitControl as Control;
    interface LowPowerListeningConfig;
    interface UniqueConfig;
    interface PacketField<uint8_t> as PacketRSSI;

    interface BareSend as Send;
    interface RadioPacket as Packet;
    interface PacketAcknowledgements;
  }

  uses {
    interface SplitControl as SubControl;
    interface BareSend as SubSend;
    interface RadioPacket as SubPacket;
    interface PacketAcknowledgements as SubPacketAcknowledgements;
#ifdef SOFTWAREENERGY
    interface SoftwareEnergyComponent as ReceiveEnergy;
#endif
  }

} implementation {

  typedef struct rfx_metadata {
    bool ack_request; 
  } rfx_metadata_t;

  
  rfx_metadata_t* getMeta(message_t* msg) {
    return ((void*)msg) + sizeof(message_t) - call Packet.metadataLength(msg);
  }

  tossim_header_t* getTossimHeader(message_t* msg) {
    return (tossim_header_t*)(msg->data - sizeof(tossim_header_t));
  }

  tossim_metadata_t* getTossimMeta(message_t* msg) {
    return (tossim_metadata_t*)(&msg->metadata);
  }

  /***************** Control ****************/

  command error_t Control.start() {
    return call SubControl.start();
  }

  event void SubControl.startDone(error_t error) {
#ifdef SOFTWAREENERGY
    if(error==SUCCESS) {
      call ReceiveEnergy.on();
    }
#endif
    signal Control.startDone(error);
  }

  command error_t Control.stop() {
    return call SubControl.stop();
  }

  event void SubControl.stopDone(error_t error) {
#ifdef SOFTWAREENERGY
    if(error==SUCCESS) {
      call ReceiveEnergy.off();
    }
#endif
    signal Control.stopDone(error);
  }
  

  /***************** LowPowerListeningConfig ****************/

  command bool LowPowerListeningConfig.needsAutoAckRequest(message_t* msg) {
    tossim_header_t* header = getTossimHeader(msg);
    return header->dest != TOS_BCAST_ADDR;
  }

  command bool LowPowerListeningConfig.ackRequested(message_t* msg) {
    tossim_metadata_t* meta = getTossimMeta(msg);
    return meta->ack;
  }

  command uint16_t LowPowerListeningConfig.getListenLength() {
    return 9;
  }  

  /***************** UniqueConfig ****************/

  async command uint8_t UniqueConfig.getSequenceNumber(message_t* msg) {
    tossim_header_t* header = getTossimHeader(msg);
    return header->dsn;
  }

  async command void UniqueConfig.setSequenceNumber(message_t* msg, uint8_t dsn) {
    tossim_header_t* header = getTossimHeader(msg);
    header->dsn = dsn;
  }
  
  async command am_addr_t UniqueConfig.getSender(message_t* msg) {
    tossim_header_t* header = getTossimHeader(msg);
    return header->src;
  }
  
  tasklet_async command void UniqueConfig.reportChannelError() {
  }

  /***************** PacketRSSI ****************/

  async command bool PacketRSSI.isSet(message_t* msg) {
    return TRUE;
  }
  
  async command uint8_t PacketRSSI.get(message_t* msg) {
    return getTossimMeta(msg)->strength;
  }
  
  async command void PacketRSSI.clear(message_t* msg) {
  }

  async command void PacketRSSI.set(message_t* msg, uint8_t value) {
    getTossimMeta(msg)->strength = value;
  }

  /***************** Send ****************/

  command error_t Send.send(message_t* msg) {
    if(getMeta(msg)->ack_request) {
      call SubPacketAcknowledgements.requestAck(msg);
    }
    return call SubSend.send(msg);
  }
  
  event void SubSend.sendDone(message_t* msg, error_t error) {
    return signal Send.sendDone(msg, error);
  }
  
  command error_t Send.cancel(message_t* msg) {
    return call SubSend.cancel(msg);
  }
  
  /***************** Packet ****************/

  async command uint8_t Packet.headerLength(message_t* msg) {
    return call SubPacket.headerLength(msg);
  }

  async command uint8_t Packet.payloadLength(message_t* msg) {
    return call SubPacket.payloadLength(msg);
  }

  async command void Packet.setPayloadLength(message_t* msg, uint8_t length) {
    call SubPacket.setPayloadLength(msg, length);
  }
  
  async command uint8_t Packet.maxPayloadLength() {
    return call SubPacket.maxPayloadLength();
  }

  async command uint8_t Packet.metadataLength(message_t* msg) {
    return call SubPacket.metadataLength(msg) + sizeof(rfx_metadata_t);
  }

  async command void Packet.clear(message_t* msg) {
    getMeta(msg)->ack_request = FALSE;
    call SubPacket.clear(msg);
  }

  /***************** PacketAcknowledgements ****************/

  async command error_t PacketAcknowledgements.requestAck(message_t* msg) {
    getMeta(msg)->ack_request = TRUE;
    return SUCCESS;
  }

  async command error_t PacketAcknowledgements.noAck(message_t* msg) {
    getMeta(msg)->ack_request = FALSE;
  }
  
  async command bool PacketAcknowledgements.wasAcked(message_t* msg) {
    return call SubPacketAcknowledgements.wasAcked(msg);
  }

  /***************** Defaults ****************/

  default event void Control.startDone(error_t err) {}
  default event void Control.stopDone(error_t err) {}

}
