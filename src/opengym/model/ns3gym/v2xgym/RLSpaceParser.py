import distutils
try:
    import xml.etree.cElementTree as ET
except ImportError:
    import xml.etree.ElementTree as ET

class RLSpaceParser(object):
    def __init__(self, RLConfig):
        self.RLConfig = RLConfig
        self.i = 0
        tree = ET.ElementTree(file=self.RLConfig)
        root = tree.getroot()
        for child in root:
            if child.tag == "ObservationSpace":
                self.obs_low = float(root[self.i][0].text)
                self.obs_high = float(root[self.i][1].text)
                self.obs_dtype = root[self.i][2].text
                self.obs_shape = root[self.i][3].text
            if child.tag == "ActionSpace":
                self.action_low = float(root[self.i][0].text)
                self.action_high = float(root[self.i][1].text)
                self.action_dtype = root[self.i][2].text
                self.action_shape = root[self.i][3].text
            self.i = self.i + 1

    def GetObsSpaceAttribute(self):
        return self.obs_low, self.obs_high, self.obs_dtype, self.obs_shape 
    
    def GetActionSpaceAttribute(self):
        return self.action_low, self.action_high, self.action_dtype, self.action_shape
    
    