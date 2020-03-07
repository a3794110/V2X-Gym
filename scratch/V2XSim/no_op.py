#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import argparse
import time
import numpy as np
import sys
import os
from ns3gym import ns3env



from function import Vehicle_Enter_Network
from function import Create_Vehicle
from function import Vehicle_Information
from function import Threshold_Of_Vehicle_Charging
from function import Vehicle_Charging
from function import Charging_Station_Parameter
from function import get_options
from function import Vehicle_Position_List

try:
    sys.path.append(os.path.join(os.path.dirname(
        __file__), '..', '..', '..', '..', "tools"))  # tutorial in tests
    sys.path.append(os.path.join(os.environ.get("SUMO_HOME", os.path.join(
        os.path.dirname(__file__), "..", "..", "..")), "tools"))  # tutorial in docs
    from sumolib import checkBinary  # noqa
    import traci

except ImportError:
    sys.exit(
        "please declare environment variable 'SUMO_HOME' as the root directory of your sumo installation (it should contain folders 'bin', 'tools' and 'docs')")





parser = argparse.ArgumentParser(description='Start simulation script on/off')
parser.add_argument('--start',
                    type=int,
                    default=0,
                    help='Start simulation script 0/1, Default: 0')
parser.add_argument('--iterations',
                    type=int,
                    default=1,
                    help='Number of iterations, Default: 1')
args = parser.parse_args()
startSim = bool(args.start)
iterationNum = int(args.iterations)

nodeNum = 20
port = 5551
simTime = 10 # seconds
stepTime = 0.1  # seconds
seed = 0
simArgs = {"--simTime": simTime,
           "--testArg": 123,
           "--nodeNum": 10,
           "--distance": 500}
debug = False

env = ns3env.Ns3Env(port=port, stepTime=stepTime, startSim=startSim, simSeed=seed, simArgs=simArgs, debug=debug)
env.reset()

ob_space = env.observation_space
ac_space = env.action_space
print("Observation space: ", ob_space,  ob_space.dtype)
print("Action space: ", ac_space, ac_space.dtype)

stepIdx = 0
currIt = 0
allRxPkts = 0
    


def get_action(obs, stepIdx):
    # cwValue 0 is not applied, so no_op
    traci.simulationStep()
    print("#############################################################")
    getCurrentTime = traci.simulation.getCurrentTime()
    print("getCurrentTime = ",getCurrentTime)
    
    if (msTimer % 1000) == 0: # create device to network  (每1秒增加車輛 Poisson λ=1 k=1)
        Create_Vehicle(Vehicle, VehilceDensity)
    DepartVeh = traci.simulation.getDepartedIDList()

    # enter vehicle to network
    if len(DepartVeh) > 0: 
           Vehicle_Enter_Network(DepartVeh, Vehicle)

    
    action = Vehicle_Position_List(Vehicle, PositionList)
    
    #action = np.arange(stepIdx, stepIdx+30)
    return action

#-------------------------------------------------------------------------------#
#                Include SUMO Map
#===============================================================================#    
options = get_options()                                                             
if options.nogui:
    sumoBinary = checkBinary('sumo')
else:
    sumoBinary = checkBinary('sumo-gui')                            
traci.start([sumoBinary, '-c', os.path.join('data/Simulation', 'map.sumocfg'), '--step-length', str(stepTime)])  
ChargingStation = {}
Vehicle = {}
VehilceDensity = 1
PositionList = np.zeros(shape= 60, dtype=int)
global Vehicle
global CS
global PositionList
Charging_Station_Parameter(ChargingStation)
msTimer = traci.simulation.getCurrentTime()
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
            action = get_action(obs, stepIdx)
            print("---action: ", action)

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