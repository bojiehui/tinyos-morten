import re
import pickle
import numpy
from sim.utils.helper import *

class Rtt:
    def __init__(self):
        pass

    def execute(self, si):
        t_dict = []
        n_dict = []
        rtt_dict = []
        mean = 0

        filenamebase = si.createfilenamebase()
       
        print ">>>>>> Calculating Rtt <<<<<<<" 
        f = open (filenamebase + ".log","r")
        lines = f.readlines()
        for line in lines:
            s = line.split()
            if s[3]=='at':
                n_dict.append(s[2])
                d = s[4].split(':')
                print d[0],d[1],d[2]
                t = Time(d[0],d[1],d[2])
                t_dict.append(t.in_milisecond())
        print n_dict

        a = 0
    
        ln = len(n_dict)
        s = ln - 100   
        for i in range (0,ln-2,2):
            if n_dict[i+a+1] == n_dict[i+a+2]:
                print "index of duplication is", i+a+2
                a = a + 1
                del t_dict[i+2]
                print 
                if a == s:
                    break

        l = len(t_dict)
        for i in range (1, l, 2):
            rtt = t_dict[i] - t_dict[i-1]
            rtt_dict.append(rtt)
            print rtt

        rf = open(filenamebase+"_rtt.pickle","w")
        pickle.dump(rtt_dict,rf)
        rf.close()
       
        #print ">>>>>> Calculation mean RTT <<<<<<<"
        mean = numpy.average(rtt_dict)
    
