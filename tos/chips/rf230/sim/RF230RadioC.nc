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

#include <RadioConfig.h>

configuration RF230RadioC {
  
  provides  {

      interface SplitControl;

      interface AMSend[am_id_t id];
      interface Receive[am_id_t id];
      interface Receive as Snoop[am_id_t id];
      
      interface AMPacket;
      interface Packet as PacketForActiveMessage;
      
      interface PacketAcknowledgements;
      interface LowPowerListening;

#ifdef PACKET_LINK
      interface PacketLink;
#endif
      
      interface PacketField<uint8_t> as PacketRSSI;

	}

} implementation {

  components 
    TossimRadioC, 
    new TossimBareAdaptorP() as BareAdaptor,
    new TossimRadioAdaptorP() as RadioAdaptor;

  /***************** RF230Radio ****************/	

  components
    new RFXRadioP() as RF230RadioP;
  RF230RadioP.SubPacketAcknowledgements -> TossimRadioC;
#ifdef SOFTWAREENERGY
  components new SoftwareEnergyComponentC(15500) as ReceiveEnergy;
  RF230RadioP.ReceiveEnergy -> ReceiveEnergy;
#endif

  /***************** ActiveMessage ****************/	

  components 
    ActiveMessageAddressC,
    new TossimActiveMessageC() as AM;
  AM.amAddress -> ActiveMessageAddressC;
  AMPacket = AM;

  components UniqueLayerC as UniqueLayerC;
  UniqueLayerC.Config -> RF230RadioP;

  /***************** LowPowerListening ****************/	

#ifdef LOW_POWER_LISTENING
#warning "*** USING LOW POWER LISTENING LAYER"
  components LowPowerListeningLayerC as LowPowerListeningLayerC;
  LowPowerListeningLayerC.Config -> RF230RadioP;
  LowPowerListeningLayerC.PacketAcknowledgements -> TossimRadioC;
#else	
  components LowPowerListeningDummyC as LowPowerListeningLayerC;
#endif
  LowPowerListening = LowPowerListeningLayerC;

  /***************** PacketLink ****************/	

#ifdef PACKET_LINK
  components PacketLinkLayerC as PacketLinkLayerC;
  PacketLink = PacketLinkLayerC;
  PacketLinkLayerC.PacketAcknowledgements -> TossimRadioC;
#else
  components new DummyLayerC() as PacketLinkLayerC;
#endif


  /***************** Control Path ****************/	

  SplitControl = LowPowerListeningLayerC;
  LowPowerListeningLayerC.SubControl -> RF230RadioP;
  RF230RadioP.SubControl -> TossimRadioC;

  /***************** Send Path ****************/	
  
  AMSend = AM;
  AM.SubSend -> BareAdaptor;
  BareAdaptor.SubBareSend -> UniqueLayerC;
  UniqueLayerC.SubSend -> LowPowerListeningLayerC;  
  LowPowerListeningLayerC.SubSend -> PacketLinkLayerC;
  PacketLinkLayerC.SubSend -> RF230RadioP;
  RF230RadioP.SubSend -> BareAdaptor;
  BareAdaptor.SubSend -> TossimRadioC.Send;

  /***************** Receive Path ****************/	

  Receive = AM.Receive;
  Snoop = AM.Snoop;
  AM.SubReceive -> BareAdaptor;
  BareAdaptor.SubBareReceive -> LowPowerListeningLayerC;
  LowPowerListeningLayerC.SubReceive -> RadioAdaptor;
  RadioAdaptor.SubRadioReceive -> UniqueLayerC;
  UniqueLayerC.SubReceive -> RadioAdaptor;
  RadioAdaptor.SubBareReceive -> BareAdaptor;
  BareAdaptor.SubReceive -> TossimRadioC.Receive;
  
  /***************** Packet Path ****************/	

  PacketForActiveMessage = BareAdaptor;
  BareAdaptor.SubRadioPacket -> LowPowerListeningLayerC;
  LowPowerListeningLayerC.SubPacket -> PacketLinkLayerC;  
  PacketLinkLayerC.SubPacket -> RF230RadioP;
  RF230RadioP.SubPacket -> BareAdaptor;
  BareAdaptor.SubPacket -> TossimRadioC;

  PacketAcknowledgements = RF230RadioP;
  PacketRSSI = RF230RadioP.PacketRSSI;

}
