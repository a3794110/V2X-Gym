#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import argparse
import time
import numpy as np
import sys
import os

from ns3gym import ns3env

import optparse


'''try:
    sys.path.append(os.path.join(os.path.dirname(
        __file__), '..', '..', '..', '..', "tools"))  # tutorial in tests
    sys.path.append(os.path.join(os.environ.get("SUMO_HOME", os.path.join(
        os.path.dirname(__file__), "..", "..", "..")), "tools"))  # tutorial in docs
    from sumolib import checkBinary  # noqa
    import traci

except ImportError:
    sys.exit(
        "please declare environment variable 'SUMO_HOME' as the root directory of your sumo installation (it should contain folders 'bin', 'tools' and 'docs')")'''





parser = argparse.ArgumentParser(description='Start simulation script on/off')
parser.add_argument('--start',
                    type=int,
                    default=1,
                    help='Start simulation script 0/1, Default: 0')
parser.add_argument('--iterations',
                    type=int,
                    default=1,
                    help='Number of iterations, Default: 1')
args = parser.parse_args()
startSim = bool(args.start)
iterationNum = int(args.iterations)

nodeNum = 100
port = 5551
simTime = 100 # seconds
stepTime = 0.1  # seconds
seed = 0
simArgs = {"--simTime": simTime,
           "--testArg": 123,
            }
debug = True

CV_Args = {"CV_Num": nodeNum,
            "Antenna_Height": 15,
            }

env = ns3env.Ns3Env(port=port, stepTime=stepTime, startSim=startSim, simSeed=seed, simArgs=simArgs, debug=debug, V2XGymConfig="V2XGymConfig.xml", CV_Args=CV_Args)
env.reset()

ob_space = env.observation_space
ac_space = env.action_space
print("Observation space: ", ob_space,  ob_space.dtype)
print("Action space: ", ac_space, ac_space.dtype)

stepIdx = 0
currIt = 0
allRxPkts = 0

#env.StartTrafficModule() #hank
    
'''
def get_options():
    optParser = optparse.OptionParser()
    optParser.add_option("--nogui", action="store_true",
                         default=False, help="run the commandline version of sumo")
    options, args = optParser.parse_args()
    return options


#-------------------------------------------------------------------------------#
#                Include SUMO Map
#===============================================================================#    
options = get_options()                                                             
if options.nogui:
    sumoBinary = checkBinary('sumo')
else:
    sumoBinary = checkBinary('sumo-gui')                            
traci.start([sumoBinary, '-c', os.path.join('data/Simulation', 'map.sumocfg'), '--step-length', str(stepTime)])  '''
#ChargingStation = {}
#Vehicle = {}
#VehilceDensity = 1

msTimer = env.ns3ZmqBridge.MobilityControl.traci.simulation.getCurrentTime()
mobilitycontrol = env.ns3ZmqBridge.MobilityControl

def get_no_op_action(obs, stepIdx):
        
        if (mobilitycontrol.traci.simulation.getCurrentTime() % 1000) == 0 : # create device to network  (每1秒增加車輛 Poisson λ=1 k=1)
            mobilitycontrol.CreateCV(mobilitycontrol.addID, "routedist1", "typedist1")
        
        action = np.arange(stepIdx)
        return action
#================================================================================#

try:
    while True:
        print("Start iteration: ", currIt)
        obs = env.reset()
        reward = 0
        print("Step: ", stepIdx)
        print("---obs: ", obs)

        while True:
            stepIdx += 1

            allRxPkts += reward
            action = get_no_op_action( obs, stepIdx)
            #print("---action: ", action)

            obs, reward, done, info = env.step(action)
            print("Step: ", stepIdx)
            print("---obs, reward, done, info: ", obs, reward, done, info)

            if done:
                stepIdx = 0
                print("All rx pkts num: ", allRxPkts)
                allRxPkts = 0

                if currIt + 1 < iterationNum:
                    env.reset()
                break

        currIt += 1
        if currIt == iterationNum:
            break

except KeyboardInterrupt:
    print("Ctrl-C -> Exit")
finally:
    env.close()
    print("Done")