#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import argparse
import time
import numpy as np
import sys
import os
import random 
from v2xgym import v2xenv

import optparse


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

nodeNum = 250
port = 5555
simTime = 10 # seconds
stepTime = 0.001  # seconds
seed = 0
simArgs = {"--simTime": simTime, #not optional
            }
debug = True

CV_Args = {"CV_Num": nodeNum, #not optional
            "Antenna_Height": 15, #not optional
            }

env = v2xenv.V2XEnv(port=port, stepTime=stepTime, startSim=startSim, simSeed=seed, simArgs=simArgs, debug=debug, V2XGymConfig="V2XGymConfig/V2XGymConfig.xml", CV_Args=CV_Args) #V2XGymConfig is optional




# Q and rewards
Q = np.zeros(shape=(nodeNum, 101, 10), dtype=np.float)
action = np.zeros(shape=(nodeNum), dtype=np.uint)


rewards = []
iterations = []

# Parameters
alpha = 0.75
discount = 0.95
episodes = 50



#================================================================================#

# Episodes
for episode in range(episodes):
    # Refresh state
    state = env.reset()

    mobilitycontrol = env.ns3ZmqBridge.MobilityControl
    for i in range(nodeNum):
        mobilitycontrol.CreateNode_Dynamic(vehID=str(i), departSpeed ="0", arrivalSpeed="0", routeID="route0")
        mobilitycontrol.traci.vehicle.moveToXY(vehID=str(i), x= 1+ random.randint(0, 100), y=random.randint(0, 100), edgeID="gneE0", lane=0, keepRoute=2)

    ob_space = env.observation_space
    ac_space = env.action_space
    print("Observation space: ", ob_space,  ob_space.dtype)
    print("Action space: ", ac_space, ac_space.dtype)
    #state = calculate_q_diff(state)
    done = False
    t_reward = 0

    i = 0
    t = 0
    # Run episode
    while True:
        if done:
            break
        for i in range(nodeNum):
            mobilitycontrol.traci.vehicle.setSpeed(vehID=str(i), speed=0)
        i += 1
        current = state

        for n in range(nodeNum):
            action[n] = np.argmax(Q[n, current[n], :] + np.random.randn(1, 10) * (1 / float(episode + 1)))
        
        #print("action:", action)
        state, reward, done, info = env.step(action)
        #print(episode,": ",t,": ",reward)
        #state = calculate_q_diff(state)
        #print('state:', state, reward, done)
        #print("action:", action)
        t += stepTime
        t_reward += reward
        for n in range(nodeNum):
            Q[n, current[n], action[n]] += alpha * (reward + discount * np.max(Q[n, state[n], :]) - Q[n, current[n], action[n]])
    t_reward = t_reward/i
    print("Total reward:", t_reward)
    rewards.append(t_reward)
    iterations.append(i)


env.close()
    
