#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import time
import os
import shlex
import traceback
from datetime import datetime
from tinyos.tossim.TossimHelp import *
from TOSSIM import *

sys.path.append("..")

if sys.version < '2.6':
     print "Python version 2.6 required (for some reason).  You have", sys.version
     sys.exit(1)

tosroot = os.environ.get("TOSROOT")

if tosroot == "":
     print "TOSROOT not set. export TOSROOT=..."
     sys.exit(1)



print "-"*10, "[[[[ Setting up TOSSIM ]]]]", "-"*10

t = Tossim([])

channels = ["Boot","UDPEchoP"
            #,"CpmModelC"
          #  ,"Bo-RoutingEngineP"
          #  ,"Driver.debug"
          #  ,"Bo-Csma"
          #  ,"Bo-SoftwareAck"
          #  ,"Bo-Collision"
          #  ,"Bo-MessageBuffer"
          #  ,"Bo-Unique"
          #  ,"Bo-LPL"
          #  ,"Bo-PLink"
          #  ,"Bo-Network"
          #  ,"Bo-AM"
          #  ,"Bo-154Message"
          #  ,"Bo-AutoResource"
          #  ,"printf"
            ,"IPDispatch"
            ,"IPND"
            ,"IPForwardingEngineP"
            ,"IPProtocolsP"
            ,"ICMPCoreP"
            ]

for chan in channels:
      print "Channel", chan, "enabled"
      t.addChannel(chan, sys.stdout)

print "Setting up TOSSIM topology..."

nodes = loadLinkModel(t, "topo.txt")
loadNoiseModel(t, "meyer.txt", nodes)



initializeNodes(t, nodes)

print "Simulation Running..."

eventCtr = 0
eventPresent = True

sleepDelta = 0.00001

clockStartTime = datetime.now()
simStartTime   = t.time()

try:
     while True:

          clockCurrentTime = datetime.now()
          clockTimeDifference = clockCurrentTime - clockStartTime
          clockTimeDifferenceSec = (clockTimeDifference.seconds + clockTimeDifference.microseconds / float(1000000))
          simCurrentTimeSec   = t.time() / float(t.ticksPerSecond())
          
          sleepTime = simCurrentTimeSec - clockTimeDifferenceSec

          while sleepTime > 0:
               time.sleep(sleepDelta)
               sleepTime -= sleepDelta
          eventPresent = t.runNextEvent()
          eventCtr = eventCtr + 1



except KeyboardInterrupt:
     print ">>> Ctrl-C"

except:
     traceback.print_exc()
     print ">>> Exception while simulating."

finally:
     #throttle.finalize()
     #throttle.printStatistics()
     pass
