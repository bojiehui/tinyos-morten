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

generic module TossimBareAdaptorP() {

  provides {
    // Normal -> Bare
    interface Send;
    interface Receive;
    interface Packet;

    // Bare -> Normal
    interface BareSend;
    interface BareReceive;
    interface RadioPacket;
  }

  uses {
    // Normal -> Bare
    interface BareSend as SubBareSend;
    interface BareReceive as SubBareReceive;
    interface RadioPacket as SubRadioPacket;

    // Bare -> Normal
    interface Send as SubSend;
    interface Receive as SubReceive;
    interface Packet as SubPacket;
  }

} implementation {

  /***************** Normal -> Bare ****************/	

  command error_t Send.send(message_t* msg, uint8_t len) {
    call Packet.setPayloadLength(msg, len);
    return call SubBareSend.send(msg);
  }

  command error_t Send.cancel(message_t* msg) {
    return call SubBareSend.cancel(msg);
  }

  event void SubBareSend.sendDone(message_t* msg, error_t error) {
    signal Send.sendDone(msg, error);
  }
  
  command uint8_t Send.maxPayloadLength() {
    return call Packet.maxPayloadLength();
  }

  command void* Send.getPayload(message_t* msg, uint8_t len) {
    return call Packet.getPayload(msg, len);
  }

  event message_t* SubBareReceive.receive(message_t* msg) {
    dbg("RF230", "NORMAL\n");
    return signal Receive.receive(msg, call Packet.getPayload(msg, call Packet.payloadLength(msg)), call Packet.payloadLength(msg));
  }

  command void Packet.clear(message_t* msg) {
    call SubRadioPacket.clear(msg);
  }

  command uint8_t Packet.payloadLength(message_t* msg) {
    return call SubRadioPacket.payloadLength(msg);
  }

  command void Packet.setPayloadLength(message_t* msg, uint8_t len) {
    call SubRadioPacket.setPayloadLength(msg, len);
  }

  command uint8_t Packet.maxPayloadLength() {
    return call SubRadioPacket.maxPayloadLength();
  }

  command void* Packet.getPayload(message_t* msg, uint8_t len) {
    return ((void*)msg) + call SubRadioPacket.headerLength(msg);
  }


  /***************** Bare -> Normal ****************/	

  command error_t BareSend.send(message_t* msg) {
    return call SubSend.send(msg, call Packet.payloadLength(msg));
  }
  
  event void SubSend.sendDone(message_t* msg, error_t error) {
    signal BareSend.sendDone(msg, error);
  }
  
  command error_t BareSend.cancel(message_t* msg) {
    return call SubSend.cancel(msg);
  }

  event message_t* SubReceive.receive(message_t* msg, void* payload, uint8_t len) {
    dbg("RF230", "FROM TOSSIM\n");
    return signal BareReceive.receive(msg);
  }

  async command uint8_t RadioPacket.headerLength(message_t* msg) {
    return sizeof(tossim_header_t);
  }

  async command uint8_t RadioPacket.payloadLength(message_t* msg) {
    return call SubPacket.payloadLength(msg);
  }

  async command void RadioPacket.setPayloadLength(message_t* msg, uint8_t length) {
    call SubPacket.setPayloadLength(msg, length);
  }
  
  async command uint8_t RadioPacket.maxPayloadLength() {
    return call SubPacket.maxPayloadLength();
  }

  async command uint8_t RadioPacket.metadataLength(message_t* msg) {
    return 0;
  }

  async command void RadioPacket.clear(message_t* msg) {
    call SubPacket.clear(msg);
  }

}
