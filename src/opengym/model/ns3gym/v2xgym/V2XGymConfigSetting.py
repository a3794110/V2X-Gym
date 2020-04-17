import distutils
try:
    import xml.etree.cElementTree as ET
except ImportError:
    import xml.etree.ElementTree as ET

class V2XGymConfigSetting(object):
    def __init__(self, V2XGymConfig):
        self.V2XGymConfig = V2XGymConfig
        self.i = 0
        tree = ET.ElementTree(file=self.V2XGymConfig)
        root = tree.getroot()
        for child in root:
            if child.tag == "TrafficConfig":
                self.sumocfgdir = root[self.i][0].text
                self.gui = distutils.util.strtobool( root[self.i][1].text )
            if child.tag == "NetworkConfig":
                self.netcfgdir = root[self.i][0].text
                self.scenario = root[self.i][1].text
            if child.tag == "RLSpace":
                self.RLConfig = root[self.i][0].text

            self.i = self.i + 1

    def GetSUMOCfgAttribute(self):
        return self.sumocfgdir, self.gui
    
    def GetNs3CfgAttribute(self):
        return self.netcfgdir, self.scenario

    def GetRLSpaceAttribute(self):
        return self.RLConfig