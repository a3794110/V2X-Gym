from setuptools import setup, find_packages
import sys
import os.path

cwd = os.getcwd()
protobufFile = cwd + '/v2xgym/messages_pb2.py'

if not os.path.isfile(protobufFile):
    print("File: ", "ns3-gym/src/opengym/model/ns3gym/v2xgym/messages_pb2.py", " was not found.")
    sys.exit('Protocol Buffer messages are missing. Please run ./waf configure to generate the file')


def readme():
    with open('README.md') as f:
        return f.read()


setup(
    name='v2xgym',
    version='0.9',
    packages=find_packages(),
    scripts=[],
    url='',
    license='MIT',
    author='Piotr Gawlowicz and Ping-Han Hsieh',
    author_email='gawlowicz.p@gmail.com and a3794110@gmail.com',
    description='OpenAI Gym meets ns-3 and SUMO',
    long_description='OpenAI Gym meets ns-3 and SUMO',
    keywords='openAI gym, ML, RL, ns-3, SUMO, V2X',
    install_requires=['pyzmq', 'numpy', 'protobuf', 'gym'],
    extras_require={},
)
