import sys

from TOSSIM import *
from tinyos.tossim.TossimHelp import *

t = Tossim([])

nodes = loadLinkModel(t, "topo.txt")
loadNoiseModel(t, "meyer.txt", nodes)

# Set debug channels
print "Setting debug channels..."
t.addChannel("PacketLinkTest", sys.stdout);

#t.addChannel("CC2420ActiveMessage", sys.stdout);
#t.addChannel("CC2420Csma", sys.stdout);
#t.addChannel("CC2420Transmit", sys.stdout);
#t.addChannel("CpmModelC", sys.stdout);

initializeNodes(t, nodes)

print "Running simulation (press Ctrl-c to stop)..."
try:
    for i in range(0,200):
        t.runNextEvent()

except KeyboardInterrupt:
  print "Closing down simulation!"
  #throttle.printStatistics() 

