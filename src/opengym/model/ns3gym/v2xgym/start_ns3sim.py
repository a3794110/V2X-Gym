#!/usr/bin/python
import sys
import os
import time
import subprocess

from v2xgym.RLSpaceParser import RLSpaceParser


def find_waf_path(cwd):
	wafPath = cwd

	found = False
	myDir = cwd
	while (not found):
		for fname in os.listdir(myDir):
			if fname == "waf":
				found = True
				wafPath = os.path.join(myDir, fname)
				break

		myDir = os.path.dirname(myDir)

	return wafPath


def build_ns3_project(debug=True): #debug: show ns3 compile info during ns3gym running 
	cwd = os.getcwd()
	simScriptName = os.path.basename(cwd)
	wafPath = find_waf_path(cwd)
	baseNs3Dir = os.path.dirname(wafPath)

	os.chdir(baseNs3Dir)

	wafString = wafPath + ' build'

	output = subprocess.DEVNULL
	if debug:
		output = None

	buildRequired = False
	ns3Proc = subprocess.Popen(wafString, shell=True, stdout=subprocess.PIPE, stderr=None, universal_newlines=True)

	lineHistory = []
	for line in ns3Proc.stdout:
		if (True or "Compiling" in line or "Linking" in line) and not buildRequired:
			buildRequired = True
			print("Build ns-3 project if required")
			for l in lineHistory:
				sys.stdout.write(l)
				lineHistory = []

		if buildRequired:
			sys.stdout.write(line)
		else:
			lineHistory.append(line)

	p_status = ns3Proc.wait()
	if buildRequired:
		print("(Re-)Build of ns-3 finished with status: ", p_status)
	os.chdir(cwd)


def start_sim_script(port=5555, simSeed=0, simArgs={}, debug=False, ScriptDir=" ", NetworkConfig= " ", CV_Num=0, AntennaHeight=0, RLConfig=" ", gdb=False):
	
	if NetworkConfig != " ":#allow Network Setting Config Selection
		simArgs["--NetworkConfig"] = NetworkConfig
	if RLConfig != " ":
		SpaceParser = RLSpaceParser(RLConfig) 
		obs_low, obs_high, obs_dtype, obs_shape = SpaceParser.GetObsSpaceAttribute()
		simArgs["--obs_low"] = obs_low
		simArgs["--obs_high"] = obs_high
		simArgs["--obs_dtype"] = obs_dtype
		simArgs["--obs_shape"] = obs_shape
		action_low, action_high, action_dtype, action_shape = SpaceParser.GetActionSpaceAttribute()
		simArgs["--action_low"] = action_low
		simArgs["--action_high"] = action_high
		simArgs["--action_dtype"] = action_dtype
		simArgs["--action_shape"] = action_shape

	simArgs["--CV_Num"] = CV_Num
	simArgs["--AntennaHeight"] = AntennaHeight
	cwd = os.getcwd()
	if ScriptDir == " ": #allow Script selection 
		simScriptName = os.path.basename(cwd)
	else:
		simScriptName = ScriptDir #ns3 script location
	wafPath = find_waf_path(cwd)
	baseNs3Dir = os.path.dirname(wafPath)

	os.chdir(baseNs3Dir)

	wafString = wafPath + ' --run "' + simScriptName

	

	if port:
		wafString += ' --openGymPort=' + str(port)

	if simSeed:
		wafString += ' --simSeed=' + str(simSeed)

	for k,v in simArgs.items():
		wafString += " "
		wafString += str(k)
		wafString += "="
		wafString += str(v)

	wafString += '"'


	
	ns3Proc = None
	if debug:
		ns3Proc = subprocess.Popen(wafString, shell=True, stdout=None, stderr=None)
	else:
		'''
		users were complaining that when they start example they have to wait 10 min for initialization.
		simply ns3 is being built during this time, so now the output of the build will be put to stdout
		but sometimes build is not required and I would like to avoid unnecessary output on the screen
		it is not easy to get tell before start ./waf whether the build is required or not
		here, I use simple trick, i.e. if output of build contains {"Compiling","Linking"}
		then the build is required and, hence, i put the output to the stdout
		'''
		errorOutput = subprocess.DEVNULL
		ns3Proc = subprocess.Popen(wafString, shell=True, stdout=subprocess.PIPE, stderr=errorOutput, universal_newlines=True)

		buildRequired = False
		lineHistory = []
		for line in ns3Proc.stdout:
			if ("Compiling" in line or "Linking" in line) and not buildRequired:
				buildRequired = True
				print("Build ns-3 project if required")
				for l in lineHistory:
					sys.stdout.write(l)
					lineHistory = []

			if buildRequired:
				sys.stdout.write(line)
			else:
				lineHistory.append(line)

			if ("Waf: Leaving directory" in line):
				break

	if debug:
		print("Start command: ",wafString)
		print("Started ns3 simulation script, Process Id: ", ns3Proc.pid)

	# go back to my dir
	os.chdir(cwd)
	return ns3Proc