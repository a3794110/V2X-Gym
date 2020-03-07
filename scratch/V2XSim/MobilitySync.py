
import os
import sys
import zmq
import time

import numpy as np
from enum import IntEnum
from google.protobuf.any_pb2 import Any
from start_sim import start_sim_script, build_ns3_project

class MobilitySync(object):
    def __init__(self, port=0, startSim=True, simSeed=0, simArgs={}, debug=False):
        super(MobilitySync, self).__init__()
        port = int(port)
        self.port = port
        self.startSim = startSim
        self.simSeed = simSeed
        self.simArgs = simArgs
        self.envStopped = False
        self.simPid = None
        self.wafPid = None
        self.ns3Process = None

        context = zmq.Context()
        self.socket = context.socket(zmq.REP)
        try:
            if port == 0 and self.startSim:
                port = self.socket.bind_to_random_port('tcp://*', min_port=5001, max_port=10000, max_tries=100)
                print("Got new port for MobilitySync interface: ", port)

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
    def sync(self):
        