import numpy as np
import math
import random 
import sys
import os
#import traci
import optparse
import pandas as pd
from Parameter import On_Board_Unit
from Parameter import Charging_Station_Information
import subprocess
import time
 
#------------------------------- data loaded by ns-3
#fo = open("trajectory.txt", "w")
#global trajectoryList   
#global max_num_veh 
#max_num_veh = 0
#trajectoryList = list(range(0,1000))
#------------------------------- data loaded by ns-3

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


def get_options():
    optParser = optparse.OptionParser()
    optParser.add_option("--nogui", action="store_true",
                         default=False, help="run the commandline version of sumo")
    options, args = optParser.parse_args()
    return options
        

class Vehicle_Mobility(object):
    def __init__(self):
        self.VehIDList = set()
        self.VehinNet = set()
        self.addID = 0
    

    def Vehicle_Create(self, i=0, routeid='routedist1', typeID='DEFAULT_VEHTYPE', depart=None, departLane='first', departPos='base', departSpeed='0', arrivalLane='current', arrivalPos='max', arrivalSpeed='current', fromTaz='', toTaz='', line='', personCapacity=0, personNumber=0):
        traci.vehicle.addFull(str(i),routeid, typeID, depart, departLane, departPos, departSpeed, arrivalLane, arrivalPos, arrivalSpeed, fromTaz, toTaz, line, personCapacity, personNumber)
        #print(type(self.VehIDList) )
        self.VehIDList.add( str(i) )
        #print("IDList = ", self.VehIDList)

    
    def Vehicle_Position_List(self, ac_space):
        PositionList = np.zeros( ac_space.shape[0], dtype=int)
        IDList = traci.vehicle.getIDList()

        self.VehinNet = self.VehIDList & set(IDList)

        print("getIDList = ",IDList)
        print("IDList = ", self.VehIDList)
        

        for i in self.VehinNet:  
            PositionList[int(i)*3] = i
            PositionList[int(i)*3+1] = traci.vehicle.getPosition(i)[0]
            PositionList[int(i)*3+2] = traci.vehicle.getPosition(i)[1]

        return PositionList
    
    def Sync_Mobility(self, ac_space):

        traci.simulationStep()
        print("#############################################################")
        getCurrentTime = traci.simulation.getCurrentTime()
        print("getCurrentTime = ",getCurrentTime)
        

        #if (msTimer % 1000) == 0 : # create device to network  (每1秒增加車輛 Poisson λ=1 k=1)
        self.Vehicle_Create(self.addID)
        self.addID += 1

        action = self.Vehicle_Position_List(ac_space)
        
        return action




    
    
    
    
