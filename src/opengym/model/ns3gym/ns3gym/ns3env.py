import os
import sys
import zmq
import time

import numpy as np

import gym
from gym import spaces
from gym.utils import seeding
from enum import IntEnum
from ns3gym.CVMobilityControl import CV_Mobility_Control
from ns3gym.start_sumosim import SUMOSim

from ns3gym.start_ns3sim import start_sim_script, build_ns3_project
import optparse


import ns3gym.messages_pb2 as pb
from google.protobuf.any_pb2 import Any


__author__ = "Piotr Gawlowicz"
__copyright__ = "Copyright (c) 2018, Technische Universität Berlin"
__version__ = "0.1.0"
__email__ = "gawlowicz@tkn.tu-berlin.de"

################################################################################################################################################################
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




'''class CV_Mobility_Control(object):
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
        
        return Mobility_Sync_Space'''

########################################################################################################################################################################



class Ns3SumoZmqBridge(object):
    """docstring for Ns3SumoZmqBridge"""
    def __init__(self, port=0, startSim=True, simSeed=0, simArgs={}, debug=False, CV_Num=0):
        super(Ns3SumoZmqBridge, self).__init__()
        port = int(port)
        self.port = port
        self.startSim = startSim
        self.simSeed = simSeed
        self.simArgs = simArgs
        self.envStopped = False
        self.simPid = None
        self.wafPid = None
        self.ns3Process = None

        #############################hank
        self.CV_Num = CV_Num 
        self.MobilityControl = CV_Mobility_Control(CV_Num)
        ############################

        context = zmq.Context()
        self.socket = context.socket(zmq.REP)
        try:
            if port == 0 and self.startSim:
                port = self.socket.bind_to_random_port('tcp://*', min_port=5001, max_port=10000, max_tries=100)
                print("Got new port for ns3gm interface: ", port)

            elif port == 0 and not self.startSim:
                print("Cannot use port %s to bind" % str(port) )
                print("Please specify correct port" )
                sys.exit()

            else:
                self.socket.bind ("tcp://*:%s" % str(port))

        except Exception as e:
            print("Cannot bind to tcp://*:%s as port is already in use" % str(port) )
            print("Please specify different port or use 0 to get free port" )
            sys.exit()

        if (startSim == True and simSeed == 0):
            maxSeed = np.iinfo(np.uint32).max
            simSeed = np.random.randint(0, maxSeed)
            self.simSeed = simSeed

        if self.startSim:
            # run simulation script
            self.ns3Process = start_sim_script(port, simSeed, simArgs, debug)
        else:
            print("Waiting for simulation script to connect on port: tcp://localhost:{}".format(port))
            print('Please start proper ns-3 simulation script using ./waf --run "..."')

        self._action_space = None
        self._observation_space = None

        self.forceEnvStop = False
        self.obsData = None
        self.reward = 0
        self.gameOver = False
        self.gameOverReason = None
        self.extraInfo = None
        self.newStateRx = False

    def close(self):
        try:
            if not self.envStopped:
                self.envStopped = True
                self.force_env_stop()
                self.rx_env_state()
                self.send_close_command()
                self.ns3Process.kill()
                if self.simPid:
                    os.kill(self.simPid, signal.SIGTERM)
                    self.simPid = None
                if self.wafPid:
                    os.kill(self.wafPid, signal.SIGTERM)
                    self.wafPid = None
        except Exception as e:
            pass

    def _create_space(self, spaceDesc):
        space = None
        if (spaceDesc.type == pb.Discrete):
            discreteSpacePb = pb.DiscreteSpace()
            spaceDesc.space.Unpack(discreteSpacePb)
            space = spaces.Discrete(discreteSpacePb.n)

        elif (spaceDesc.type == pb.Box):
            boxSpacePb = pb.BoxSpace()
            spaceDesc.space.Unpack(boxSpacePb)
            low = boxSpacePb.low
            high = boxSpacePb.high
            shape = tuple(boxSpacePb.shape)
            mtype = boxSpacePb.dtype

            if mtype == pb.INT:
                mtype = np.int
            elif mtype == pb.UINT:
                mtype = np.uint
            elif mtype == pb.DOUBLE:
                mtype = np.float
            else:
                mtype = np.float
            space = spaces.Box(low=low, high=high, shape=shape, dtype=mtype)

        elif (spaceDesc.type == pb.Tuple):
            mySpaceList = []
            tupleSpacePb = pb.TupleSpace()
            spaceDesc.space.Unpack(tupleSpacePb)

            for pbSubSpaceDesc in tupleSpacePb.element:
                subSpace = self._create_space(pbSubSpaceDesc)
                mySpaceList.append(subSpace)

            mySpaceTuple = tuple(mySpaceList)
            space = spaces.Tuple(mySpaceTuple)

        elif (spaceDesc.type == pb.Dict):
            mySpaceDict = {}
            dictSpacePb = pb.DictSpace()
            spaceDesc.space.Unpack(dictSpacePb)

            for pbSubSpaceDesc in dictSpacePb.element:
                subSpace = self._create_space(pbSubSpaceDesc)
                mySpaceDict[pbSubSpaceDesc.name] = subSpace

            space = spaces.Dict(mySpaceDict)

        return space

    def initialize_env(self, stepInterval):
        request = self.socket.recv()
        simInitMsg = pb.SimInitMsg()
        simInitMsg.ParseFromString(request)

#######################################################hank
        self.box_space = pb.BoxSpace()
        self.box_space.low = 0
        self.box_space.high = 0
        self.box_space.dtype = pb.INT
        self.box_space.shape.extend([(self.CV_Num*3), 0])
        self.mobility_space = pb.SpaceDescription()
        self.mobility_space.type = pb.Box
        self.mobility_space.space.Pack(self.box_space)
        self.trajectory_space = self._create_space( self.mobility_space)
#######################################################

        self.simPid = int(simInitMsg.simProcessId)
        self.wafPid = int(simInitMsg.wafShellProcessId)
        self._action_space = self._create_space(simInitMsg.actSpace)
        self._observation_space = self._create_space(simInitMsg.obsSpace)

        reply = pb.SimInitAck()
        reply.done = True
        reply.stopSimReq = False
        replyMsg = reply.SerializeToString()
        self.socket.send(replyMsg)
        return True

    def get_action_space(self):
        return self._action_space

    def get_observation_space(self):
        return self._observation_space

    def force_env_stop(self):
        self.forceEnvStop = True

    def rx_env_state(self):
        if self.newStateRx:
            return

        request = self.socket.recv()
        envStateMsg = pb.EnvStateMsg()
        envStateMsg.ParseFromString(request)

        self.obsData = self._create_data(envStateMsg.obsData)
        self.reward = envStateMsg.reward
        self.gameOver = envStateMsg.isGameOver
        self.gameOverReason = envStateMsg.reason

        if self.gameOver:
            if self.gameOverReason == pb.EnvStateMsg.SimulationEnd:
                self.envStopped = True
                self.send_close_command()
            else:
                self.forceEnvStop = True
                self.send_close_command()

        self.extraInfo = envStateMsg.info
        if not self.extraInfo:
            self.extraInfo = {}

        self.newStateRx = True

    def send_close_command(self):
        reply = pb.EnvActMsg()
        reply.stopSimReq = True

        replyMsg = reply.SerializeToString()
        self.socket.send(replyMsg)
        self.newStateRx = False
        return True

    def send_actions(self, actions):
        reply = pb.EnvActMsg()

        actionMsg = self._pack_data(actions, self._action_space)
        reply.actData.CopyFrom(actionMsg)

        reply.stopSimReq = False
        if self.forceEnvStop:
            reply.stopSimReq = True

        replyMsg = reply.SerializeToString()
        self.socket.send(replyMsg)
        self.newStateRx = False
        return True
##############################################################################
    def send_trajectory(self): #hank
        reply = pb.EnvActMsg()
        trajectory = self.MobilityControl.MobilitySyncSpace()
        trajectoryMsg = self._pack_data(trajectory, self.trajectory_space)
        
        reply.actData.CopyFrom(trajectoryMsg)
        reply.stopSimReq = False
        if self.forceEnvStop:
            reply.stopSimReq = True

        replyMsg = reply.SerializeToString()
        self.socket.send(replyMsg)
        self.newStateRx = False

        replyMsg = self.socket.recv()
        
        return True
##############################################################################

    def step(self, actions):
        # exec actions for current state
        self.send_trajectory()
        self.send_actions(actions)
        # get result of above actions
        self.rx_env_state()

    def is_game_over(self):
        return self.gameOver

    def _create_data(self, dataContainerPb):
        if (dataContainerPb.type == pb.Discrete):
            discreteContainerPb = pb.DiscreteDataContainer()
            dataContainerPb.data.Unpack(discreteContainerPb)
            data = discreteContainerPb.data
            return data

        if (dataContainerPb.type == pb.Box):
            boxContainerPb = pb.BoxDataContainer()
            dataContainerPb.data.Unpack(boxContainerPb)
            # print(boxContainerPb.shape, boxContainerPb.dtype, boxContainerPb.uintData)

            if boxContainerPb.dtype == pb.INT:
                data = boxContainerPb.intData
            elif boxContainerPb.dtype == pb.UINT:
                data = boxContainerPb.uintData
            elif boxContainerPb.dtype == pb.DOUBLE:
                data = boxContainerPb.doubleData
            else:
                data = boxContainerPb.floatData

            # TODO: reshape using shape info
            return data

        elif (dataContainerPb.type == pb.Tuple):
            tupleDataPb = pb.TupleDataContainer()
            dataContainerPb.data.Unpack(tupleDataPb)

            myDataList = []
            for pbSubData in tupleDataPb.element:
                subData = self._create_data(pbSubData)
                myDataList.append(subData)

            data = tuple(myDataList)
            return data

        elif (dataContainerPb.type == pb.Dict):
            dictDataPb = pb.DictDataContainer()
            dataContainerPb.data.Unpack(dictDataPb)

            myDataDict = {}
            for pbSubData in dictDataPb.element:
                subData = self._create_data(pbSubData)
                myDataDict[pbSubData.name] = subData

            data = myDataDict
            return data

    def get_obs(self):
        return self.obsData

    def get_reward(self):
        return self.reward

    def get_extra_info(self):
        return self.extraInfo

    def _pack_data(self, actions, spaceDesc):
        dataContainer = pb.DataContainer()

        spaceType = spaceDesc.__class__

        if spaceType == spaces.Discrete:
            dataContainer.type = pb.Discrete
            discreteContainerPb = pb.DiscreteDataContainer()
            discreteContainerPb.data = actions
            dataContainer.data.Pack(discreteContainerPb)

        elif spaceType == spaces.Box:
            dataContainer.type = pb.Box
            boxContainerPb = pb.BoxDataContainer()
            shape = [len(actions)]
            boxContainerPb.shape.extend(shape)

            if (spaceDesc.dtype in ['int', 'int8', 'int16', 'int32', 'int64']):
                boxContainerPb.dtype = pb.INT
                boxContainerPb.intData.extend(actions)

            elif (spaceDesc.dtype in ['uint', 'uint8', 'uint16', 'uint32', 'uint64']):
                boxContainerPb.dtype = pb.UINT
                boxContainerPb.uintData.extend(actions)

            elif (spaceDesc.dtype in ['float', 'float32', 'float64']):
                boxContainerPb.dtype = pb.FLOAT
                boxContainerPb.floatData.extend(actions)

            elif (spaceDesc.dtype in ['double']):
                boxContainerPb.dtype = pb.DOUBLE
                boxContainerPb.doubleData.extend(actions)

            else:
                boxContainerPb.dtype = pb.FLOAT
                boxContainerPb.floatData.extend(actions)

            dataContainer.data.Pack(boxContainerPb)

        elif spaceType == spaces.Tuple:
            dataContainer.type = pb.Tuple
            tupleDataPb = pb.TupleDataContainer()

            spaceList = list(self._action_space.spaces)
            subDataList = []
            for subAction, subActSpaceType in zip(actions, spaceList):
                subData = self._pack_data(subAction, subActSpaceType)
                subDataList.append(subData)

            tupleDataPb.element.extend(subDataList)
            dataContainer.data.Pack(tupleDataPb)

        elif spaceType == spaces.Dict:
            dataContainer.type = pb.Dict
            dictDataPb = pb.DictDataContainer()

            subDataList = []
            for sName, subAction in actions.items():
                subActSpaceType = self._action_space.spaces[sName]
                subData = self._pack_data(subAction, subActSpaceType)
                subData.name = sName
                subDataList.append(subData)

            dictDataPb.element.extend(subDataList)
            dataContainer.data.Pack(dictDataPb)

        return dataContainer


class Ns3Env(gym.Env):
    def __init__(self, stepTime=0, port=0, startSim=True, simSeed=0, simArgs={}, debug=False, RLV2XConfig=" ", CV_Num = 0):
        self.stepTime = stepTime
        self.port = port
        self.startSim = startSim
        self.simSeed = simSeed
        self.simArgs = simArgs
        self.debug = debug

        # Filled in reset function
        self.ns3ZmqBridge = None
        self.action_space = None
        self.observation_space = None

        self.viewer = None
        self.state = None
        self.steps_beyond_done = None

        ################################# hank
        self.CV_Num = CV_Num
        self.RLV2XConfig = RLV2XConfig
        self.InitialSUMO = False
        ################################# hank

        self.ns3ZmqBridge = Ns3SumoZmqBridge(self.port, self.startSim, self.simSeed, self.simArgs, self.debug, self.CV_Num)
        self.ns3ZmqBridge.initialize_env(self.stepTime)
        self.action_space = self.ns3ZmqBridge.get_action_space()
        self.observation_space = self.ns3ZmqBridge.get_observation_space()
        # get first observations
        self.ns3ZmqBridge.rx_env_state()
        self.envDirty = False
        self.seed()



    def seed(self, seed=None):
        self.np_random, seed = seeding.np_random(seed)
        return [seed]

    def get_state(self):
        obs = self.ns3ZmqBridge.get_obs()
        reward = self.ns3ZmqBridge.get_reward()
        done = self.ns3ZmqBridge.is_game_over()
        extraInfo = self.ns3ZmqBridge.get_extra_info()
        return (obs, reward, done, extraInfo)

    def step(self, action):
        response = self.ns3ZmqBridge.step(action)
        self.envDirty = True
        return self.get_state()

    def reset(self):
        if not self.envDirty:
            obs = self.ns3ZmqBridge.get_obs()
            if self.InitialSUMO == False :
                SUMOSim()
                self.InitialSUMO = True
            return obs

        if self.ns3ZmqBridge:
            self.ns3ZmqBridge.close()
            self.ns3ZmqBridge = None

        self.envDirty = False
        self.ns3ZmqBridge = Ns3SumoZmqBridge(self.port, self.startSim, self.simSeed, self.simArgs, self.debug)
        self.ns3ZmqBridge.initialize_env(self.stepTime)
        self.action_space = self.ns3ZmqBridge.get_action_space()
        self.observation_space = self.ns3ZmqBridge.get_observation_space()
        # get first observations
        self.ns3ZmqBridge.rx_env_state()
        obs = self.ns3ZmqBridge.get_obs()


        return obs

    def render(self, mode='human'):
        return

    def get_random_action(self):
        act = self.action_space.sample()
        return act

    def close(self):
        if self.ns3ZmqBridge:
            self.ns3ZmqBridge.close()
            self.ns3ZmqBridge = None

        if self.viewer:
            self.viewer.close()
    
    '''def InitSUMO(self, SUMOConfigDir="data/Simulation/map.sumocfg", stepTime=0.1):
        self.SUMOConfigDir = SUMOConfigDir
        self.stepTime = stepTime
        self.traci = traci
        options = self.get_options()                                                             
        if options.nogui:
            self.sumoBinary = checkBinary('sumo')
        else:
            self.sumoBinary = checkBinary('sumo-gui')  
        
        self.RunSUMO()
        
    def RunSUMO(self):
        self.traci.start([self.sumoBinary, '-c', os.path.join(self.SUMOConfigDir) , '--step-length', str(self.stepTime)])

    def get_options(self):
        optParser = optparse.OptionParser()
        optParser.add_option("--nogui", action="store_true",
                            default=False, help="run the commandline version of sumo")
        options, args = optParser.parse_args()
        return options'''