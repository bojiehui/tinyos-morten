/*
 * Copyright (c) 2007, Vanderbilt University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the copyright holder nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Author: Miklos Maroti
 * Author: Morten Tranberg Hansen (TOSSIM version)
 * Author: Markus Becker (TOSSIM version -> Ieee154 TOSSIM version)
 */

#include <RadioConfig.h>

//#ifdef IEEE154FRAMES_ENABLED
//#error "You cannot use ActiveMessageC with IEEE154FRAMES_ENABLED defined"
//#endif

configuration Ieee154MessageC
{
	provides
	{
		interface SplitControl;

		interface Ieee154Send;
		interface Receive as Ieee154Receive;
		//interface Receive as Snoop;
		interface SendNotifier as Ieee154Notifier;

		interface Packet;
		interface Ieee154Packet;

		interface PacketAcknowledgements;
		interface LowPowerListening;
#ifdef PACKET_LINK
		interface PacketLink;
#endif

		interface RadioChannel;

		interface PacketField<uint8_t> as PacketLinkQuality;
		interface PacketField<uint8_t> as PacketTransmitPower;
		interface PacketField<uint8_t> as PacketRSSI;

		interface LocalTime<TRadio> as LocalTimeRadio;
		interface PacketTimeStamp<TRadio, uint32_t> as PacketTimeStampRadio;
		interface PacketTimeStamp<TMilli, uint32_t> as PacketTimeStampMilli;
	}
}

implementation
{
	components TossimRadioC;

	components Ieee154PacketInjectorP as PacketInjectorP;
	PacketInjectorP.SubReceive -> TossimRadioC.Ieee154Receive;
	PacketInjectorP.Ieee154Packet -> TossimRadioC;
	PacketInjectorP.Packet -> TossimRadioC.PacketForActiveMessage;

	SplitControl = TossimRadioC;

	Ieee154Send = TossimRadioC;
	Ieee154Receive = PacketInjectorP.Receive;
	//Snoop = TossimRadioC.Snoop;
	Ieee154Notifier = TossimRadioC;

	Packet = TossimRadioC.PacketForActiveMessage;
	Ieee154Packet = TossimRadioC;

	PacketAcknowledgements = TossimRadioC;
	LowPowerListening = TossimRadioC;
#ifdef PACKET_LINK
	PacketLink = TossimRadioC;
#endif

	RadioChannel = TossimRadioC;

	PacketLinkQuality = TossimRadioC.PacketLinkQuality;
	PacketTransmitPower = TossimRadioC.PacketTransmitPower;
	PacketRSSI = TossimRadioC.PacketRSSI;

	LocalTimeRadio = TossimRadioC;
	PacketTimeStampMilli = TossimRadioC;
	PacketTimeStampRadio = TossimRadioC;
}
