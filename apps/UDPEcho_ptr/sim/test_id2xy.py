#!/usr/bin/python
from sim.utils.helper import *
import math

nodes = 25

for i in range(1, nodes+2):
    print i, id2xy(i, math.sqrt(nodes))

#for x in range(0, sqr_nodes+1):
#    for y in range(0, sqr_nodes+1):
