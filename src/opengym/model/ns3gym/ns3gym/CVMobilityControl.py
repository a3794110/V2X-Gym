import sys
import os
import numpy as np


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

class CV_Mobility_Control(object):
    def __init__(self, CV_Num = 0):
        self.CV_Num = CV_Num
        self.VehIDList = set()
        self.VehinNet = set()
        self.addID = 0
        self.traci =traci
    

    def CreateCV(self, i=0, routeid='', typeID='DEFAULT_VEHTYPE', depart=None, departLane='first', departPos='base', departSpeed='0', arrivalLane='current', arrivalPos='max', arrivalSpeed='current', fromTaz='', toTaz='', line='', personCapacity=0, personNumber=0):
        IDList = traci.vehicle.getIDList()
        if str(i) in IDList:
            print ("The created ID already in network!!")
        traci.vehicle.addFull(str(i),routeid, typeID, depart, departLane, departPos, departSpeed, arrivalLane, arrivalPos, arrivalSpeed, fromTaz, toTaz, line, personCapacity, personNumber)
        #print(type(self.VehIDList) )
        self.VehIDList.add( str(i) )
        self.addID += 1
        #print("IDList = ", self.VehIDList)

    
    def Vehicle_Position_List(self):
        PositionList = np.zeros( (self.CV_Num)*3, dtype=int)
        IDList = traci.vehicle.getIDList()

        self.VehinNet = self.VehIDList & set(IDList)

        #print("getIDList = ",IDList)
        #print("IDList = ", self.VehIDList)
        

        for i in self.VehinNet:  
            PositionList[int(i)*3] = i
            PositionList[int(i)*3+1] = traci.vehicle.getPosition(i)[0]
            PositionList[int(i)*3+2] = traci.vehicle.getPosition(i)[1]

        return PositionList
    
    def MobilitySyncSpace(self):

        traci.simulationStep()
        print("#############################################################")
        getCurrentTime = traci.simulation.getCurrentTime()
        print("getCurrentTime = ",getCurrentTime)
        

        #if (traci.simulation.getCurrentTime() % 1000) == 0 : # create device to network  (每1秒增加車輛 Poisson λ=1 k=1)
        #    self.CreateCV(self.addID, "routedist1")

        Mobility_Sync_Space = self.Vehicle_Position_List()
        
        return Mobility_Sync_Space