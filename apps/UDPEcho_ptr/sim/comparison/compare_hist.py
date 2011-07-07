#!/usr/bin/env python

from __future__ import division
import copy
import math

import matplotlib
import matplotlib.pyplot as plt
import matplotlib.colors as col
from matplotlib.figure import SubplotParams
from matplotlib.ticker import MultipleLocator

import numpy as np
import scipy.stats as stats
import pickle

from sim.utils.helper import floatRange

#########################
# use current config
#from sim.config import *

# use config from previous simulations

# small, more detailed distances
#SUITE = "2011_03_22__17_05_38" # linedirect 2..4 done
SUITE = "2011_03_24__08_52_49" # linecpm 2..4 done
#SUITE = "2011_03_22__09_26_10" # grid 4 done
#SUITE = "2011_03_25__08_55_20" # random 2..4 done

# big:
# SUITE = "2011_01_28__11_08_33" # linedirect 4..225, done
# SUITE = "2011_01_26__08_36_27" # line 4..225, done
# SUITE = "2011_01_11__11_14_27" # grid, 4..225, done

# small:
# SUITE = "2011_03_xx__xx_xx_xx" # grid 4             #todo
# SUITE = "2011_02_18__15_46_59" # linedirect 2..4 done
# SUITE = "2011_02_17__09_22_22" # linecpm 2..4 done
exec "from sim.output.suite_"+SUITE+".config import *"
#########################

#from sim.scenarios.ScenarioInformation import *
#from sim.scenarios.ExecutableInformation import *

RESOLUTION = 0.04
t = floatRange(0, 3*EVAL_HIGH_TIME, RESOLUTION)

class CompareHist:
    def __init__(self):
        pass

    def execute(self,
                ei,
                si,
                nodes_list,
                distance_list,
                iterations):

        print "="*40
        print "Executing CompareHist:"
        print "filenamebase\t\t", si.createfilenamebase()
        print "="*40

        my_norm = col.Normalize(min(distance_list)*math.sqrt(min(nodes_list))-1,
                                max(distance_list)*math.sqrt(max(nodes_list))+1)

        #for nodes in nodes_list:
        for nodes in [4]:
            print "nodes", nodes
            topo_si = copy.deepcopy(si)
            topo_si.nodes = nodes

            fig = plt.figure(figsize=(12, 8),
                             subplotpars = SubplotParams(left = 0.07,
                                                         bottom = 0.05,
                                                         top = 0.93,
                                                         right = 0.77))
            ax = fig.add_subplot(111)
            for distance in distance_list:
            #for distance in [10, 30, 60]:
                print " distance", distance

                suite_si = copy.deepcopy(si)
                suite_si.nodes = nodes
                suite_si.distance = distance#*sqr_nodes

                #############################
                # simulated hist:
                #############################

                print "Opening: "+ suite_si.create_montecarlo_filenamebase()+"_hist_consist_avail.npy"
                consist_avail_sum = np.load(suite_si.create_montecarlo_filenamebase()+"_hist_consist_avail.npy",
                                            "r")
                #consist_purge_sum = np.load(suite_si.create_montecarlo_filenamebase()+"_hist_consist_purge.npy",
                #                            "r")

                #RESOLUTION = 0.04
                #t = floatRange(0, 3*EVAL_HIGH_TIME, RESOLUTION)

                cdf_avail_sum = stats.cumfreq(consist_avail_sum,
                                              1/RESOLUTION*3*EVAL_HIGH_TIME,
                                              (0, 3*EVAL_HIGH_TIME))
                # cdf_avail_sum = stats.cumfreq(consist_avail_sum,
                #                               EVAL_BINS,
                #                               (EVAL_LOW_TIME, EVAL_HIGH_TIME))
                #cdf_purge_sum = stats.cumfreq(consist_purge_sum,
                #                              EVAL_BINS,
                #                              (EVAL_LOW_TIME, EVAL_HIGH_TIME))

                #print EVAL_LOW_TIME, EVAL_HIGH_TIME, cdf_avail_sum[2]
                #print floatRange(EVAL_LOW_TIME, EVAL_HIGH_TIME, cdf_avail_sum[2])[0]
                #print floatRange(EVAL_LOW_TIME, EVAL_HIGH_TIME, cdf_avail_sum[2])[-1]
                #print cdf_avail_sum[0][0]/(nodes*iterations)
                #print cdf_avail_sum[0][-1]/(nodes*iterations)
                #print len(floatRange(EVAL_LOW_TIME, EVAL_HIGH_TIME, cdf_avail_sum[2]))

                #print len(t)
                #print len(cdf_avail_sum[0]/(nodes*iterations))

                #plt.plot(floatRange(EVAL_LOW_TIME, EVAL_HIGH_TIME, cdf_avail_sum[2])[:-1],
                plt.plot(t,
                         cdf_avail_sum[0]/(nodes*iterations),
                         color=plt.cm.jet(my_norm(distance*math.sqrt(nodes))),
                         ls='steps',
                         label=str(distance) + " SIM")
                #plt.plot(floatRange(EVAL_LOW_TIME, EVAL_HIGH_TIME, cdf_purge_sum[2]),
                ##         cdf_purge_sum[0]/(sqr_nodes*sqr_nodes),
                #          cdf_purge_sum[0]/(sqr_nodes*sqr_nodes*iterations),
                #         color=plt.cm.jet(my_norm(distance*sqr_nodes)),
                #         ls='steps',
                #         label=str(distance*sqr_nodes))

                #############################
                # analytically modelled hist:
                #############################

                print "Opening: "+"sim/analytical/npy/suite_"+SUITE+"_dist"+str(distance)+"_hist_consist_avail_model.npy"
                consist_avail_sum_model = np.load("sim/analytical/npy/suite_"+SUITE+"_dist"+str(distance)+"_hist_consist_avail_model.npy",
                                                  "r")
                #RESOLUTION = 0.04
                #t = floatRange(0, 3*EVAL_HIGH_TIME, RESOLUTION)
                #print 0, 3*EVAL_HIGH_TIME, RESOLUTION
                #print t[0]
                #print t[-1]
                #print consist_avail_sum_model[0]
                #print consist_avail_sum_model[-1]
                #print len(t)
                plt.plot(t,
                         #cdf_avail_sum[0]/(sqr_nodes*sqr_nodes),
                         consist_avail_sum_model,
                         color=plt.cm.jet(my_norm(distance*math.sqrt(nodes))),
                         ls='steps:',
                         label=str(distance)+" ANA")

            plt.grid()
            text = "#Nodes: " + str(nodes) + ", " + \
                "K: " + str(ei.defines["DISTRIBUTION_TRICKLE_K"])
            title = 'Model Time to Consistency (cdf) \n(' + text + ')'
            plt.title(title)

            plt.ylim(0,
                     1)
            plt.xlim(EVAL_LOW_TIME,
                     EVAL_HIGH_TIME)

            plt.xlabel("Model Time t [s]")
            plt.ylabel("Nodes consistent P(T$\leq$t)")

            ax.set_xticks(range(0,
                                EVAL_HIGH_TIME,
                                2))
            #plt.minorticks_on()
            #minorLocator   = MultipleLocator(10)
            #ax.xaxis.set_minor_locator(minorLocator)

            ax.set_yticks(floatRange(0,
                                     1.1,
                                     0.1))

            #plt.legend(loc='lower right')
            plt.legend(bbox_to_anchor=(1.02, 1),
                       loc = 2,
                       borderaxespad=0. ,
                       title = "Distance [m]",
                       ncol = 2,
                       columnspacing = .2,
                       borderpad = .2,
                       handletextpad = .1,
                       #loc = (.9, .5),
                       fancybox = 'True')

            plt.savefig(topo_si.create_topo_filenamebase() + "_hist_comparison.pdf")

ei_file = "sim/output/suite_"+SUITE+"/executable_info.pickle"
si_file = "sim/output/suite_"+SUITE+"/scenario_info.pickle"

ei = pickle.load(open(ei_file, 'rb'))
si = pickle.load(open(si_file, 'rb'))
ch = CompareHist()

print NODES_LIST
print DISTANCE_LIST
print MONTE_CARLO_ITERATIONS


ch.execute(ei,
           si,
           NODES_LIST,
           DISTANCE_LIST,
           MONTE_CARLO_ITERATIONS)
