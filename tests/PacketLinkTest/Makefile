COMPONENT=src/PacketLinkTestC

CFLAGS += -Isrc

##### Config #####

CFLAGS += -DDELAY=0
CFLAGS += -DRETRIES=10

CFLAGS += -DPERIOD=1024
CFLAGS += -DRECEIVER=0

##### End #####

CFLAGS += -DPACKET_LINK
CFLAGS += -I$(TOSDIR)/chips/cc2420
CFLAGS += -I$(TOSDIR)/chips/cc2420/interfaces
CFLAGS += -I$(TOSDIR)/chips/cc2420/link
CFLAGS += -I$(TOSDIR)/chips/cc2420/unique
CFLAGS += -I$(TOSDIR)/chips/cc2420/lpl

BUILD_EXTRA_DEPS += 
CLEAN_EXTRA = simbuild build doc app.xml 

include $(MAKERULES)