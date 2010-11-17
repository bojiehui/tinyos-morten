#include "PacketLinkTest.h"

configuration PacketLinkTestC {

} implementation {

	components 
		PacketLinkTestP as App,
		MainC,
		ActiveMessageC,
		CC2420ActiveMessageC,
		new TimerMilliC() as Timer,
		new AMSenderC(AM_TEST_MSG) as Sender,
		new AMReceiverC(AM_TEST_MSG) as Receiver;

	App.Boot -> MainC;
	App.Timer -> Timer;

	App.RadioControl -> ActiveMessageC;
	App.Send -> Sender;
	App.Receive -> Receiver;
	App.PacketLink -> CC2420ActiveMessageC;
	App.AMPacket -> ActiveMessageC;

}
