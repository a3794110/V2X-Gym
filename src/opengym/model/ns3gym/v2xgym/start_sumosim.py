import os    
import sys
import optparse

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
    
class SUMOSim(object):
    def __init__(self, SUMOConfigDir="data/Simulation/map.sumocfg", GUI=True, stepTime=0.1):
            self.SUMOConfigDir = SUMOConfigDir
            self.stepTime = stepTime
            self.traci = traci
            self.GUI = GUI
            options = self.get_options()                                                             
            #if options.nogui:
            if self.GUI != True:
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
        return options