/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2011 Centre Tecnologic de Telecomunicacions de Catalunya (CTTC)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Jaume Nin <jaume.nin@cttc.cat>
 */

#include "ns3/lte-helper.h"
#include "ns3/epc-helper.h"
#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/ipv4-global-routing-helper.h"
#include "ns3/internet-module.h"
#include "ns3/mobility-module.h"
#include "ns3/lte-module.h"
#include "ns3/applications-module.h"
#include "ns3/point-to-point-helper.h"
#include "ns3/config-store.h"
#include <ns3/buildings-propagation-loss-model.h>


#include <map>
#include <vector>
#include "ns3/TinyXML-module.h"
using namespace std;
//#include "ns3/gtk-config-store.h"

using namespace ns3;
NS_LOG_COMPONENT_DEFINE ("EpcFirstExample");

template <typename T>
struct TypeName
{
    static const char* Get()
    {
        return typeid(T).name();
    }
};
template <>
struct TypeName<DoubleValue>
{
    static const char* Get()
    {
        return "DoubleValue";
    }
};

template <>
struct TypeName<IntegerValue>
{
    static const char* Get()
    {
        return "IntegerValue";
    }
};

template <>
struct TypeName<BooleanValue>
{
    static const char* Get()
    {
        return "BooleanValue";
    }
};

template <>
struct TypeName<StringValue>
{
    static const char* Get()
    {
        return "StringValue";
    }
};

template <>
struct TypeName<UintegerValue>
{
    static const char* Get()
    {
        return "UintegerValue";
    }
};

template <>
struct TypeName<int>
{
    static const char* Get()
    {
        return "int";
    }
};

template <>
struct TypeName<uint>
{
    static const char* Get()
    {
        return "uint";
    }
};

template <>
struct TypeName<double>
{
    static const char* Get()
    {
        return "double";
    }
};

template <>
struct TypeName<bool>
{
    static const char* Get()
    {
        return "bool";
    }
};

template <>
struct TypeName<string>
{
    static const char* Get()
    {
        return "string";
    }
};

struct ReturnNS3_CType{
    int Pint;
    uint Puint;
    double Pdouble;
    bool Pbool;
    string Pstring;
    IntegerValue PIntegerValue;
    UintegerValue PUintegerValue;
    DoubleValue PDoubleValue;
    BooleanValue PBooleanValue;
    StringValue PStringValue;
};

#define CallSubMethod_twoArg(Helper, SubMethod, Arg1, Arg2) Helper->SubMethod( (Arg1), (Arg2) )
#define CallSubMethod_oneArg(Helper, SubMethod, Arg1) Helper->SubMethod(Arg1 )
#define CallSubMethod_noArg(Helper, SubMethod) Helper->SubMethod()
#define Stringize(name) #name

ReturnNS3_CType RegisterMethodResult1, RegisterMethodResult2;

#define RegisterMethod_twoarg(Helper, SubMethod, Type1, Type2, NetworkSettingInstance)\
    do{ \
        if( NetworkSettingInstance->Search( Stringize(Helper), Stringize(SubMethod) ) ){ \
            \
            RegisterMethodResult1 = NetworkSettingInstance->GetArg<Type1>( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)), 0);\
            RegisterMethodResult2 = NetworkSettingInstance->GetArg<Type2>( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)), 1);\
            CallSubMethod_twoArg(Helper, SubMethod, RegisterMethodResult1.P##Type1,  RegisterMethodResult2.P##Type2 );\
        }\
        else{\
            NS_LOG_UNCOND("No Such SubMethod Setting in Config files"<<std::endl);\
            exit(1);\
        }\
    } while (0)

#define RegisterMethod_onearg(Helper, SubMethod, Type, NetworkSettingInstance)\
    do{ \
        if( NetworkSettingInstance->Search( Stringize(Helper), Stringize(SubMethod) ) ){ \
            RegisterMethodResult1 = NetworkSettingInstance->GetArg<Type>( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)), 0);\
            CallSubMethod_oneArg(Helper, SubMethod, RegisterMethodResult1.P##Type );\
        }\
        else{\
            NS_LOG_UNCOND("No Such SubMethod Setting in Config files"<<std::endl);\
            exit(1);\
        }\
    } while (0)

#define RegisterMethod_noarg(Helper, SubMethod, NetworkSettingInstance)\
    do{ \
        if( NetworkSettingInstance->Search( Stringize(Helper), Stringize(SubMethod) ) ){ \
            CallSubMethod_noArg(Helper, SubMethod);\
        }\
        else{\
            NS_LOG_UNCOND("No Such SubMethod Setting in Config files"<<std::endl);\
            exit(1);\
        }\
    } while (0)


#define RegisterParameters(Parameter, Type, NetworkSettingInstance)\
    do{\
        /*ReturnCType Parameter##Result;*/\
        RegisterMethodResult1 = NetworkSettingInstance->GetArg<Type>( Stringize(Parameter), 0);\
        Parameter = RegisterMethodResult1.P##Type;\
    } while(0)  

//ReturnNS3Type result;
#define SetDeaultConfig(Arg1, Type, NetworkSettingInstance) \
    do{\
        RegisterMethodResult1 = NetworkSettingInstance->GetArg<Type>( Arg1, 0);\
        Config::SetDefault(Arg1, RegisterMethodResult1.P##Type );\
    } while(0)
    


class NetworkSetting: public Object{
    public:
        NetworkSetting(){
        }
        void IncludeConfig(std::string Dir){
            /*Config["lteHelper::SetAttribute"].push_back("Scheduler");
            Config["lteHelper::SetAttribute"].push_back("ns3::PfFfMacScheduler");
            Config["lteHelper::EnableUlRxPhyTraces"].push_back("void");
            Config["lteHelper::SetFadingModel"].push_back("ns3::TraceFadingLossModel");
            Config["simTime"].push_back("10");
            Config["abc"].push_back("haha");
            Config["ns3::LteHelper::EnbComponentCarrierManager"].push_back("ns3::RrComponentCarrierManager");*/
            
            TiXmlDocument mydoc(Dir.c_str());
            //xml文档对象
            mydoc.LoadFile() ;
                
          
            TiXmlElement *RootElement=mydoc.RootElement();	//根元素, Info
            //cout<< "[root name]" << RootElement->Value() <<"\n";
            
            TiXmlElement *pEle=RootElement;
          
            //遍历该结点
            for(TiXmlElement *StuElement = pEle->FirstChildElement();//第一个子元素
              StuElement != NULL;
              StuElement = StuElement->NextSiblingElement())//下一个兄弟元素
            {
                // StuElement->Value() 节点名称
                string parameter = string( StuElement->Value() );
                //NS_LOG_UNCOND(parameter<<endl);
                //输出子元素的值
                for(TiXmlElement *sonElement=StuElement->FirstChildElement();
                sonElement !=NULL;
                sonElement=sonElement->NextSiblingElement())
                {
                  //cout<<sonElement->FirstChild()->Value()<<endl;
                  Config[parameter].push_back( string( sonElement->FirstChild()->Value()) );
                  //NS_LOG_UNCOND(parameter<<" "<<string( sonElement->FirstChild()->Value())<<endl);
              }
            }
        }
        bool Search(std::string helper, std::string submethod){ //whether arguments in the config file
            
            std::string keywords = helper+"::"+submethod;
            if( Config[keywords].empty() ){
                NS_LOG_UNCOND("Search Result, no such helper::submethod in config file: "<<keywords<<std::endl);
                exit(1);
            }
            else{
                return true;
            }
        }
        bool Search(std::string parameter){
            if( Config[parameter].empty() ){
                NS_LOG_UNCOND("Search Result, no such parameter in config file: "<<parameter<<std::endl);
                exit(1);
            }
            else{
                return true;
            }

        }
        int ArgNum(std::string helper, std::string submethod){ //return the number of parameters of argument
            
            std::string keywords = helper+"::"+submethod;
            return Config[keywords].size();
        }
        
        template <class T> 
        ReturnNS3_CType GetArg(std::string Parameter, int index){ //return fisrt arg of Helper::SubMethod in config file
            
            ReturnNS3_CType result;
            if(  !strcmp( TypeName<T>::Get(), "double") ){
                result.Pdouble = stod( Config[Parameter][index] );
            }
            else if( !strcmp( TypeName<T>::Get() ,"bool" )){
                result.Pbool = Config[Parameter][index] == "true"? true:false ;
            }
            else if( !strcmp( TypeName<T>::Get() ,"int") ){
                result.Pint =  stoi( Config[Parameter][index] );
            }
            else if( !strcmp( TypeName<T>::Get() ,"uint" )){
                result.Puint = stoul( Config[Parameter][index]);
            }
            else if(  !strcmp( TypeName<T>::Get() ,"string" ) ){
                result.Pstring = Config[Parameter][index] ;
            }
            else if(  !strcmp( TypeName<T>::Get(), "DoubleValue") ){
                result.PDoubleValue = DoubleValue( stod( Config[Parameter][index] )) ;
            }
            else if( !strcmp( TypeName<T>::Get() ,"BooleanValue" )){
                result.PBooleanValue =  BooleanValue( strcmp( (Config[Parameter][index]).c_str(), "true") ? false:true );
            }
            else if( !strcmp( TypeName<T>::Get() ,"StringValue" )){
                result.PStringValue = StringValue( Config[Parameter][index] );
            }
            else if( !strcmp( TypeName<T>::Get() ,"IntegerValue") ){
                result.PIntegerValue = IntegerValue( stoi( Config[Parameter][index] ));
            }
            else if( !strcmp( TypeName<T>::Get() ,"UintegerValue" )){
                result.PUintegerValue = UintegerValue( stoul( Config[Parameter][index] ) );
            }
            else{
                NS_LOG_UNCOND("Wrong input type for RegisterParameters"<<std::endl);
                exit(1);
            }
            return result;
        }

        std::string GenerateSubmethodStr(std::string Helper, std::string SubMethod ){
            
            std::string keywords = Helper+"::"+SubMethod;
            return keywords;
        }
    private:
        std::map<std::string, std::vector<std::string> > Config;
        
};

/**
 * Sample simulation script for LTE+EPC. It instantiates several eNodeB,
 * attaches one UE per eNodeB starts a flow for each UE to  and from a remote host.
 * It also  starts yet another flow between each UE pair.
 */


int
main (int argc, char *argv[])
{
  

  uint16_t numberOfNodes = 2;
  double simTime = 1.1;
  double distance = 60.0;
  double interPacketInterval = 100;
  bool useCa = false;
  string abc;

  //NetworkSetting* NetSet = new NetworkSetting;
  Ptr<NetworkSetting> NetSet = CreateObject<NetworkSetting>();
  NetSet->IncludeConfig("NetworkEnvSetting.xml");
  RegisterParameters(simTime, double, NetSet);
  //RegisterParameters(abc, string, NetSet);
  NS_LOG_UNCOND( simTime<<std::endl);

  // Command line arguments
  CommandLine cmd;
  cmd.AddValue("numberOfNodes", "Number of eNodeBs + UE pairs", numberOfNodes);
  cmd.AddValue("simTime", "Total duration of the simulation [s])", simTime);
  cmd.AddValue("distance", "Distance between eNBs [m]", distance);
  cmd.AddValue("interPacketInterval", "Inter packet interval [ms])", interPacketInterval);
  cmd.AddValue("useCa", "Whether to use carrier aggregation.", useCa);
  cmd.Parse(argc, argv);

  if (useCa)
   {
     Config::SetDefault ("ns3::LteHelper::UseCa", BooleanValue (useCa));
     //Config::SetDefault ("ns3::LteHelper::NumberOfComponentCarriers", UintegerValue (2));
     //SetDeaultConfig("ns3::LteHelper::NumberOfComponentCarriers",UintegerValue,  NetSet);
     Config::SetDefault ("ns3::LteHelper::EnbComponentCarrierManager", StringValue ("ns3::RrComponentCarrierManager"));
   }
  //SetDeaultConfig("ns3::LteHelper::EnbComponentCarrierManager", StringValue,  NetSet);
  Ptr<LteHelper> lteHelper = CreateObject<LteHelper> ();
  RegisterMethod_twoarg(lteHelper, SetAttribute, string, StringValue , NetSet);
  RegisterMethod_noarg(lteHelper, EnableUlRxPhyTraces, NetSet);
  //RegisterMethod_onearg(lteHelper, SetFadingModel, string, NetSet);

  Ptr<PointToPointEpcHelper>  epcHelper = CreateObject<PointToPointEpcHelper> ();
  lteHelper->SetEpcHelper (epcHelper);

  ConfigStore inputConfig;
  inputConfig.ConfigureDefaults();

  // parse again so you can override default values from the command line
  cmd.Parse(argc, argv);

  Ptr<Node> pgw = epcHelper->GetPgwNode ();

   // Create a single RemoteHost
  NodeContainer remoteHostContainer;
  remoteHostContainer.Create (1);
  Ptr<Node> remoteHost = remoteHostContainer.Get (0);
  InternetStackHelper internet;
  internet.Install (remoteHostContainer);

  // Create the Internet
  PointToPointHelper p2ph;
  p2ph.SetDeviceAttribute ("DataRate", DataRateValue (DataRate ("100Gb/s")));
  p2ph.SetDeviceAttribute ("Mtu", UintegerValue (1500));
  p2ph.SetChannelAttribute ("Delay", TimeValue (Seconds (0.010)));
  NetDeviceContainer internetDevices = p2ph.Install (pgw, remoteHost);
  Ipv4AddressHelper ipv4h;
  ipv4h.SetBase ("1.0.0.0", "255.0.0.0");
  Ipv4InterfaceContainer internetIpIfaces = ipv4h.Assign (internetDevices);
  // interface 0 is localhost, 1 is the p2p device
  Ipv4Address remoteHostAddr = internetIpIfaces.GetAddress (1);

  Ipv4StaticRoutingHelper ipv4RoutingHelper;
  Ptr<Ipv4StaticRouting> remoteHostStaticRouting = ipv4RoutingHelper.GetStaticRouting (remoteHost->GetObject<Ipv4> ());
  remoteHostStaticRouting->AddNetworkRouteTo (Ipv4Address ("7.0.0.0"), Ipv4Mask ("255.0.0.0"), 1);

  NodeContainer ueNodes;
  NodeContainer enbNodes;
  enbNodes.Create(numberOfNodes);
  ueNodes.Create(numberOfNodes);

  // Install Mobility Model
  Ptr<ListPositionAllocator> positionAlloc = CreateObject<ListPositionAllocator> ();
  for (uint16_t i = 0; i < numberOfNodes; i++)
    {
      positionAlloc->Add (Vector(distance * i, 0, 0));
    }
  MobilityHelper mobility;
  mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
  mobility.SetPositionAllocator(positionAlloc);
  mobility.Install(enbNodes);
  mobility.Install(ueNodes);

  // Install LTE Devices to the nodes
  NetDeviceContainer enbLteDevs = lteHelper->InstallEnbDevice (enbNodes);
  NetDeviceContainer ueLteDevs = lteHelper->InstallUeDevice (ueNodes);

  // Install the IP stack on the UEs
  internet.Install (ueNodes);
  Ipv4InterfaceContainer ueIpIface;
  ueIpIface = epcHelper->AssignUeIpv4Address (NetDeviceContainer (ueLteDevs));
  // Assign IP address to UEs, and install applications
  for (uint32_t u = 0; u < ueNodes.GetN (); ++u)
    {
      Ptr<Node> ueNode = ueNodes.Get (u);
      // Set the default gateway for the UE
      Ptr<Ipv4StaticRouting> ueStaticRouting = ipv4RoutingHelper.GetStaticRouting (ueNode->GetObject<Ipv4> ());
      ueStaticRouting->SetDefaultRoute (epcHelper->GetUeDefaultGatewayAddress (), 1);
    }

  // Attach one UE per eNodeB
  for (uint16_t i = 0; i < numberOfNodes; i++)
      {
        lteHelper->Attach (ueLteDevs.Get(i), enbLteDevs.Get(i));
        // side effect: the default EPS bearer will be activated
      }


  // Install and start applications on UEs and remote host
  uint16_t dlPort = 1234;
  uint16_t ulPort = 2000;
  uint16_t otherPort = 3000;
  ApplicationContainer clientApps;
  ApplicationContainer serverApps;
  for (uint32_t u = 0; u < ueNodes.GetN (); ++u)
    {
      ++ulPort;
      ++otherPort;
      PacketSinkHelper dlPacketSinkHelper ("ns3::UdpSocketFactory", InetSocketAddress (Ipv4Address::GetAny (), dlPort));
      PacketSinkHelper ulPacketSinkHelper ("ns3::UdpSocketFactory", InetSocketAddress (Ipv4Address::GetAny (), ulPort));
      PacketSinkHelper packetSinkHelper ("ns3::UdpSocketFactory", InetSocketAddress (Ipv4Address::GetAny (), otherPort));
      serverApps.Add (dlPacketSinkHelper.Install (ueNodes.Get(u)));
      serverApps.Add (ulPacketSinkHelper.Install (remoteHost));
      serverApps.Add (packetSinkHelper.Install (ueNodes.Get(u)));

      UdpClientHelper dlClient (ueIpIface.GetAddress (u), dlPort);
      dlClient.SetAttribute ("Interval", TimeValue (MilliSeconds(interPacketInterval)));
      dlClient.SetAttribute ("MaxPackets", UintegerValue(1000000));

      UdpClientHelper ulClient (remoteHostAddr, ulPort);
      ulClient.SetAttribute ("Interval", TimeValue (MilliSeconds(interPacketInterval)));
      ulClient.SetAttribute ("MaxPackets", UintegerValue(1000000));

      UdpClientHelper client (ueIpIface.GetAddress (u), otherPort);
      client.SetAttribute ("Interval", TimeValue (MilliSeconds(interPacketInterval)));
      client.SetAttribute ("MaxPackets", UintegerValue(1000000));

      clientApps.Add (dlClient.Install (remoteHost));
      clientApps.Add (ulClient.Install (ueNodes.Get(u)));
      if (u+1 < ueNodes.GetN ())
        {
          clientApps.Add (client.Install (ueNodes.Get(u+1)));
        }
      else
        {
          clientApps.Add (client.Install (ueNodes.Get(0)));
        }
    }
  serverApps.Start (Seconds (0.01));
  clientApps.Start (Seconds (0.01));
  lteHelper->EnableTraces ();
  // Uncomment to enable PCAP tracing
  //p2ph.EnablePcapAll("lena-epc-first");

  Simulator::Stop(Seconds(simTime));
  Simulator::Run();

  /*GtkConfigStore config;
  config.ConfigureAttributes();*/

  Simulator::Destroy();
  return 0;

}

