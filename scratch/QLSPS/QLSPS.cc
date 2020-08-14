/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2020 Ping-Han Hsieh
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
 * Author: Ping-Han Hsieh <a3794110@gmail.com>
 *
 */

#include "ns3/lte-helper.h"
#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/ipv4-global-routing-helper.h"
#include "ns3/internet-module.h"
#include "ns3/mobility-module.h"
#include "ns3/lte-module.h"
#include "ns3/applications-module.h"
#include "ns3/point-to-point-helper.h"
#include "ns3/lte-v2x-helper.h"
#include "ns3/config-store.h"
#include "ns3/lte-hex-grid-enb-topology-helper.h"
#include <ns3/buildings-helper.h>
#include <ns3/cni-urbanmicrocell-propagation-loss-model.h>
#include <ns3/constant-position-mobility-model.h>
#include <ns3/spectrum-analyzer-helper.h>
#include <ns3/multi-model-spectrum-channel.h>
#include "ns3/ns2-mobility-helper.h"
#include "ns3/opengym-module.h"  //v2x-gym header
#include <cfloat>
#include <sstream>
#include <map>
#include <ns3/netanim-module.h>

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("v2x_communication_mode_4");

// Output 

std::map<int, int> txcnt_cv, rxcnt_cv;

std::string simtime = "log_simtime_rsi.csv"; 
std::string rx_data = "log_rx_data_v2x.csv";
std::string tx_data = "log_tx_data_v2x.csv";
std::string connections = "log_connections_v2x_smallstep.csv";
std::string positions = "log_positions_v2x.csv"; 
std::string buffer_status = "log_buffer_status.csv";

Ptr<OutputStreamWrapper> log_connections;
Ptr<OutputStreamWrapper> log_simtime;
Ptr<OutputStreamWrapper> log_positions;
Ptr<OutputStreamWrapper> log_rx_data;
Ptr<OutputStreamWrapper> log_tx_data;

Ptr<OutputStreamWrapper> log_buffer_status;

// Global variables
uint32_t ctr_totRx = 0; 	// Counter for total received packets
uint32_t ctr_totTx = 0; 	// Counter for total transmitted packets
uint16_t lenCam;  
double baseline= 150.0;     // Baseline distance in meter (150m for urban, 320m for freeway)

// Responders users 
NodeContainer ueVeh;

std::vector<NetDeviceContainer> txGroups;

/*
Define observation space
*/
Ptr<OpenGymSpace> MyGetObservationSpace(void)
{
  float low = obs_low;
  float high = obs_high;
  std::vector<uint32_t> shape = obs_shape_vector;
  std::string dtype = obs_dtype;
  Ptr<OpenGymBoxSpace> space = CreateObject<OpenGymBoxSpace> (low, high, shape, dtype);
  NS_LOG_UNCOND ("MyGetObservationSpace: " << space);
  return space;
}

/*
Define action space
*/
Ptr<OpenGymSpace> MyGetActionSpace(void)
{

  float low = action_low;
  float high = action_high;
  std::vector<uint32_t> shape = action_shape_vector;
  std::string dtype = action_dtype;

  Ptr<OpenGymBoxSpace> space = CreateObject<OpenGymBoxSpace> (low, high, shape, dtype);
  NS_LOG_UNCOND ("MyGetActionSpace: " << space);
  return space;
}

/*
Define game over condition
*/
bool MyGetGameOver(void)
{
  bool isGameOver = false;
  return isGameOver;
}

/*
Collect observations
*/
Ptr<OpenGymDataContainer> MyGetObservation(void)
{
  uint32_t nodeNum = ueVeh.GetN();
  std::vector<uint32_t> shape = {nodeNum,};
  Ptr<OpenGymBoxContainer<uint32_t> > box = CreateObject<OpenGymBoxContainer<uint32_t> >(shape);

    for (uint8_t i=0; i<ueVeh.GetN();i++)
    {   
        //int id = i;
        uint32_t buffsize = (txcnt_cv[i] - rxcnt_cv[i]);
        if(buffsize > 1000)
            buffsize = 1000;
        buffsize /= 10;
        box->AddValue(buffsize);
        
    }
  return box;
}

/*
Define reward function
*/
float MyGetReward(void)
{
  static float lastValue = 0.0;
  float reward = ctr_totRx - lastValue;
  lastValue = ctr_totRx;
  //NS_LOG_UNCOND("reward: "<<reward<<std::endl);
  return reward;
}



/*
Execute received actions
*/
bool MyExecuteActions(Ptr<OpenGymDataContainer> action)  // set the contention window size
{
  Ptr<OpenGymBoxContainer<uint32_t> > box = DynamicCast<OpenGymBoxContainer<uint32_t> >(action);
  std::vector<uint32_t> actionVector = box->GetData();
  
    std::vector<NetDeviceContainer>::iterator gIt;
    int i = 0;
    for(gIt=txGroups.begin(); gIt != txGroups.end(); gIt++)
    {
        NetDeviceContainer txUe ((*gIt).Get(0));
        Ptr<LteUeMac> ueMac = DynamicCast<LteUeMac>( txUe.Get (0)->GetObject<LteUeNetDevice> ()->GetMac () );
        uint16_t rri = actionVector.at(i);
        
        rri = (rri+1 )*100;
        ueMac->SetRRI(rri);

        i++;
    }
  return true;
}


void ScheduleNextStateRead(double envStepTime, Ptr<OpenGymInterface> openGymInterface)
{
  Simulator::Schedule (Seconds(envStepTime), &ScheduleNextStateRead, envStepTime, openGymInterface);
  openGymInterface->NotifyCurrentState();
}

//-------------------------------------------------------------------------------------------
void 
PrintStatus (uint32_t s_period, Ptr<OutputStreamWrapper> log_simtime)
{
    if (ctr_totRx > ctr_totTx)
    {
        ctr_totRx = ctr_totTx; 
    }
	*log_simtime->GetStream() << Simulator::Now ().GetSeconds () << ";" << ctr_totRx << ";" << ctr_totTx << ";" << (double) ctr_totRx / ctr_totTx << std::endl; 
    std::cout << "t=" <<  Simulator::Now().GetSeconds() << "\t Rx/Tx="<< ctr_totRx << "/" << ctr_totTx << "\t PRR=" << (double) ctr_totRx / ctr_totTx << std::endl;
    Simulator::Schedule(Seconds(s_period), &PrintStatus, s_period,log_simtime);
}


void
SidelinkV2xAnnouncementMacTrace(Ptr<Socket> socket)
{
    Ptr <Node> node = socket->GetNode(); 
    int id = node->GetId();
    uint32_t simTime = Simulator::Now().GetMilliSeconds(); 
    Ptr<MobilityModel> posMobility = node->GetObject<MobilityModel>();
    Vector posTx = posMobility->GetPosition();
    // check for each UE distance to transmitter
    for (uint8_t i=0; i<ueVeh.GetN();i++)
    {
        Ptr<MobilityModel> mob = ueVeh.Get(i)->GetObject<MobilityModel>(); 
        Vector posRx = mob->GetPosition();
        
        double distance = sqrt(pow((posTx.x - posRx.x),2.0)+pow((posTx.y - posRx.y),2.0));
        if  (distance > 0 && distance <= baseline)
        {
            ctr_totTx++;
            txcnt_cv[id] = txcnt_cv[id]+1;
        }
    }
    // Generate CAM 
    std::ostringstream msgCam;
    msgCam << id-1 << ";" << simTime << ";" << (int) posTx.x << ";" << (int) posTx.y << '\0'; 
    Ptr<Packet> packet = Create<Packet>((uint8_t*)msgCam.str().c_str(),lenCam);
    socket->Send(packet);
    *log_tx_data->GetStream() << ctr_totTx << ";" << simTime << ";"  << id-1 << ";" << (int) posTx.x << ";" << (int) posTx.y << std::endl;
}

static void
ReceivePacket(Ptr<Socket> socket)
{   
    Ptr<Node> node = socket->GetNode();
    Ptr<MobilityModel> posMobility = node->GetObject<MobilityModel>();
    Vector posRx = posMobility->GetPosition();
    Ptr<Packet> packet = socket->Recv (); 
    uint8_t *buffer = new uint8_t[packet->GetSize()];
    packet->CopyData(buffer,packet->GetSize());
    std::string s = std::string((char*)buffer);  

    size_t pos = 0; 
    std::string copy = s; 
    std::string token;
    int posTx_x;
    int posTx_y;  

    int recvid;//hank
    for (int i = 0; i < 3; i++)
    {
        if (copy.find(";") != std::string::npos)
        {
            pos = copy.find(";");

            token = copy.substr(0,pos);
            if(i == 0){
                recvid = atoi(token.c_str());
            }
            if(i == 2)
            {
                posTx_x = atoi(token.c_str());
            }
            copy.erase (0,pos+1);
        }  
    }  
    posTx_y = atoi(copy.c_str()); 

    static int latency=0;
    double distance = sqrt(pow((posTx_x - posRx.x),2.0)+pow((posTx_y - posRx.y),2.0));
    if (distance <= baseline)
    {         
        int id = node->GetId();
        int simTime = Simulator::Now().GetMilliSeconds();
        ctr_totRx++; 
        rxcnt_cv[recvid] = rxcnt_cv[recvid] + 1;
        
        size_t pos = s.find(";");
        std::string str2 = s.substr(pos+1);
        pos = str2.find(";");
        latency = latency + simTime - stoi( str2.substr(0, pos) );
        int avelatency = latency/ctr_totRx;
        *log_rx_data->GetStream() << ctr_totRx << ";" << simTime << ";"  << id-1 << ";" << s << ";"<<avelatency<<std::endl; 
    }
}


void printbufferstatus(){
    //NS_LOG_INFO("Print buffer status at time "<<Simulator::Now().GetSeconds()<<std::endl);
    for (uint8_t i=0; i<ueVeh.GetN();i++)
    {   
        int id = i;
        int buffsize = txcnt_cv[i] - rxcnt_cv[i];
        int simTime = Simulator::Now().GetMilliSeconds();
        *log_buffer_status->GetStream() << id<<";"<<buffsize<<";"<<simTime<<std::endl;
        //NS_LOG_INFO("id "<<id<<": "<<buffsize<<" " );
    }
    //NS_LOG_INFO(std::endl);
    Simulator::Schedule(Seconds(0.1), &printbufferstatus);
}

int
main (int argc, char *argv[])
{

  LogComponentEnable ("v2x_communication_mode_4", LOG_INFO);

  V2XGym_InitialParameters();
    //cmd.AddValue... need to add between here
    lenCam = 190;                           // Length of CAM message in bytes [50-300 Bytes]
    double ueTxPower = 23.0;                // Transmission power in dBm
    double probResourceKeep = 0.0;          // Probability to select the previous resource again [0.0-0.8]
    uint32_t mcs = 20;                      // Modulation and Coding Scheme
    bool harqEnabled = false;               // Retransmission enabled 
    bool adjacencyPscchPssch = true;        // Subchannelization scheme
    bool partialSensing = false;            // Partial sensing enabled (actual only partialSensing is false supported)
    uint16_t sizeSubchannel = 10;           // Number of RBs per subchannel
    uint16_t numSubchannel = 3;             // Number of subchannels per subframe
    uint16_t startRbSubchannel = 0;         // Index of first RB corresponding to subchannelization
    uint16_t pRsvp = 100;				    // Resource reservation interval 
    uint16_t t1 = 4;                        // T1 value of selection window
    uint16_t t2 = 100;                      // T2 value of selection window
    uint16_t slBandwidth;                   // Sidelink bandwidth

    Ptr<NetworkSetting> NetSet = CreateObject<NetworkSetting>();
    InitialCmd();
    ConfigCmd();
    //V2XGym_RegisterCmdParameters(adjacencyPscchPssch, bool, NetSet," Scheme for subchannelization");

    cmd.AddValue ("adjacencyPscchPssch", "Scheme for subchannelization", adjacencyPscchPssch); 
    cmd.AddValue ("sizeSubchannel", "Number of RBs per Subchannel", sizeSubchannel);
    cmd.AddValue ("numSubchannel", "Number of Subchannels", numSubchannel);
    cmd.AddValue ("startRbSubchannel", "Index of first subchannel index", startRbSubchannel); 
    cmd.AddValue ("T1", "T1 Value of Selection Window", t1);
    //cmd.AddValue ("T2", "T2 Value of Selection Window", t2);
    //cmd.AddValue ("harqEnabled", "HARQ Retransmission Enabled", harqEnabled);
    //cmd.AddValue ("partialSensingEnabled", "Partial Sensing Enabled", partialSensing);
    cmd.AddValue ("lenCam", "Packetsize in Bytes", lenCam);
    cmd.AddValue ("mcs", "Modulation and Coding Scheme", mcs);
    cmd.AddValue ("pRsvp", "Resource Reservation Interval", pRsvp); 
    cmd.AddValue ("probResourceKeep", "Probability for selecting previous resource again", probResourceKeep); 
    cmd.AddValue ("log_simtime", "name of the simtime logfile", simtime);
    cmd.AddValue ("log_rx_data", "name of the rx data logfile", rx_data);
    cmd.AddValue ("log_tx_data", "name of the tx data logfile", tx_data);
    cmd.AddValue ("baseline", "Distance in which messages are transmitted and must be received", baseline);

    V2XGym_SettingConfigParameters(); // cmd.Parse (argc, argv);
  
    NetSet->IncludeConfig("scratch/NetworkEnvSetting.xml");
    std::string HelloV2XGym;
    V2XGym_RegisterParameters(HelloV2XGym, string, NetSet);

    RngSeedManager::SetSeed (1);
    RngSeedManager::SetRun (simSeed);

    AsciiTraceHelper ascii;
    log_simtime = ascii.CreateFileStream(simtime, std::ios_base::app);

    log_rx_data = ascii.CreateFileStream(rx_data);
    log_tx_data = ascii.CreateFileStream(tx_data);
    log_connections = ascii.CreateFileStream(connections);
    log_positions = ascii.CreateFileStream(positions);
    log_buffer_status = ascii.CreateFileStream(buffer_status); 
    NS_LOG_INFO ("Starting network configuration..."); 

    // Set the UEs power in dBm
    Config::SetDefault ("ns3::LteUePhy::TxPower", DoubleValue (ueTxPower));
    Config::SetDefault ("ns3::LteUePhy::RsrpUeMeasThreshold", DoubleValue (-10.0));
    // Enable V2X communication on PHY layer
    Config::SetDefault ("ns3::LteUePhy::EnableV2x", BooleanValue (true));

    // Set power
    Config::SetDefault ("ns3::LteUePowerControl::Pcmax", DoubleValue (ueTxPower));
    Config::SetDefault ("ns3::LteUePowerControl::PsschTxPower", DoubleValue (ueTxPower));
    Config::SetDefault ("ns3::LteUePowerControl::PscchTxPower", DoubleValue (ueTxPower));

    if (adjacencyPscchPssch) 
    {
        slBandwidth = sizeSubchannel * numSubchannel;
    }
    else 
    {
        slBandwidth = (sizeSubchannel+2) * numSubchannel; 
    }
  
    // Configure for UE selected
    Config::SetDefault ("ns3::LteUeMac::UlBandwidth", UintegerValue(slBandwidth));
    Config::SetDefault ("ns3::LteUeMac::EnableV2xHarq", BooleanValue(harqEnabled));
    Config::SetDefault ("ns3::LteUeMac::EnableAdjacencyPscchPssch", BooleanValue(adjacencyPscchPssch));
    Config::SetDefault ("ns3::LteUeMac::EnablePartialSensing", BooleanValue(partialSensing));
    Config::SetDefault ("ns3::LteUeMac::SlGrantMcs", UintegerValue(mcs));
    Config::SetDefault ("ns3::LteUeMac::SlSubchannelSize", UintegerValue (sizeSubchannel));
    Config::SetDefault ("ns3::LteUeMac::SlSubchannelNum", UintegerValue (numSubchannel));
    Config::SetDefault ("ns3::LteUeMac::SlStartRbSubchannel", UintegerValue (startRbSubchannel));
    Config::SetDefault ("ns3::LteUeMac::SlPrsvp", UintegerValue(pRsvp));
    Config::SetDefault ("ns3::LteUeMac::SlProbResourceKeep", DoubleValue(probResourceKeep));
    Config::SetDefault ("ns3::LteUeMac::SelectionWindowT1", UintegerValue(t1));
    Config::SetDefault ("ns3::LteUeMac::SelectionWindowT2", UintegerValue(t2));
    //Config::SetDefault ("ns3::LteUeMac::EnableExcludeSubframe", BooleanValue(excludeSubframe)); 

    ConfigStore inputConfig; 
    V2XGym_RegisterMethod_noarg(inputConfig, ConfigureDefaults, NetSet);



  // Create Nodes
  NodeContainer ueAllNodes;
  V2XGym_InitCVs(ueVeh); //ueVeh-->NodeContainer
  ueAllNodes.Add(ueVeh);

    NS_LOG_INFO ("Creating helpers...");
    // EPC
    Ptr<PointToPointEpcHelper> epcHelper = CreateObject<PointToPointEpcHelper>();
    Ptr<Node> pgw = epcHelper->GetPgwNode();

    // LTE Helper
    Ptr<LteHelper> lteHelper = CreateObject<LteHelper>();
    lteHelper->SetEpcHelper(epcHelper);

    V2XGym_RegisterPtrMethod_noarg(lteHelper, DisableNewEnbPhy, NetSet);// Disable eNBs for out-of-coverage modelling
    
    // V2X 
    Ptr<LteV2xHelper> lteV2xHelper = CreateObject<LteV2xHelper> ();
    lteV2xHelper->SetLteHelper (lteHelper); 

    // Configure eNBs' antenna parameters before deploying them.
    V2XGym_RegisterPtrMethod_onearg(lteHelper, SetEnbAntennaModelType ,string, NetSet);

    // Set pathloss model
    // FIXME: InstallEnbDevice overrides PathlossModel Frequency with values from Earfcn
    // 
    V2XGym_RegisterPtrMethod_twoarg(lteHelper, SetAttribute, string, BooleanValue, NetSet);
    V2XGym_RegisterPtrMethod_twoarg(lteHelper, SetAttribute, string, StringValue, NetSet);
    Config::SetDefault ("ns3::LteEnbNetDevice::UlEarfcn", StringValue ("54990"));
    //Config::SetDefault ("ns3::CniUrbanmicrocellPropagationLossModel::Frequency", DoubleValue(5800e6));

    
    // Create eNB Container
    NodeContainer eNodeB;
    V2XGym_RegisterMethod_onearg(eNodeB, Create ,int, NetSet);

    // Topology eNodeB
    Ptr<ListPositionAllocator> pos_eNB = CreateObject<ListPositionAllocator>(); 
    pos_eNB->Add(Vector(5,-10,30));

    //  Install mobility eNodeB
    MobilityHelper mob_eNB;
    V2XGym_RegisterMethod_onearg(mob_eNB,SetMobilityModel ,string, NetSet);
    mob_eNB.SetPositionAllocator(pos_eNB);
    mob_eNB.Install(eNodeB);

    // Install Service
    NetDeviceContainer enbDevs = lteHelper->InstallEnbDevice(eNodeB);

    // Required to use NIST 3GPP model
    BuildingsHelper::Install (eNodeB);
    BuildingsHelper::Install (ueAllNodes);
    BuildingsHelper::MakeMobilityModelConsistent (); 

    // Install LTE devices to all UEs 
    NS_LOG_INFO ("Installing UE's network devices...");
    V2XGym_RegisterPtrMethod_twoarg(lteHelper, SetAttribute, string, BooleanValue, NetSet);
    NetDeviceContainer ueRespondersDevs = lteHelper->InstallUeDevice (ueVeh);
    NetDeviceContainer ueDevs;
    ueDevs.Add (ueRespondersDevs); 

    // Install the IP stack on the UEs
    NS_LOG_INFO ("Installing IP stack..."); 
    InternetStackHelper internet;
    internet.Install (ueAllNodes); 

    // Assign IP adress to UEs
    NS_LOG_INFO ("Allocating IP addresses and setting up network route...");
    Ipv4InterfaceContainer ueIpIface; 
    ueIpIface = epcHelper->AssignUeIpv4Address (ueDevs);
    Ipv4StaticRoutingHelper Ipv4RoutingHelper;
    for(uint32_t u = 0; u < ueAllNodes.GetN(); ++u)
        {
            Ptr<Node> ueNode = ueAllNodes.Get(u);
            // Set the default gateway for the UE
            Ptr<Ipv4StaticRouting> ueStaticRouting = Ipv4RoutingHelper.GetStaticRouting(ueNode->GetObject<Ipv4>());
            ueStaticRouting->SetDefaultRoute (epcHelper->GetUeDefaultGatewayAddress(), 1);
        }

    NS_LOG_INFO("Attaching UE's to LTE network...");
    //Attach each UE to the best available eNB
    lteHelper->Attach(ueDevs); 

    NS_LOG_INFO ("Creating sidelink groups...");
   // std::vector<NetDeviceContainer> txGroups; //hank
    txGroups = lteV2xHelper->AssociateForV2xBroadcast(ueRespondersDevs, CV_Num); 
    lteV2xHelper->PrintGroups(txGroups); 
    // compute average number of receivers associated per transmitter and vice versa
    double totalRxs = 0;
    std::map<uint32_t, uint32_t> txPerUeMap;
    std::map<uint32_t, uint32_t> groupsPerUe;


    std::vector<NetDeviceContainer>::iterator gIt;
    for(gIt=txGroups.begin(); gIt != txGroups.end(); gIt++)
        {
            uint32_t numDevs = gIt->GetN();

            totalRxs += numDevs-1;
            uint32_t nId;

            for(uint32_t i=1; i< numDevs; i++)
                {
                    nId = gIt->Get(i)->GetNode()->GetId();
                    txPerUeMap[nId]++;
                }
        }

    double totalTxPerUe = 0; 
    std::map<uint32_t, uint32_t>::iterator mIt;
    for(mIt=txPerUeMap.begin(); mIt != txPerUeMap.end(); mIt++)
        {
            totalTxPerUe += mIt->second;
            groupsPerUe [mIt->second]++;
        }

    // lteV2xHelper->PrintGroups (txGroups, log_connections);

    NS_LOG_INFO ("Installing applications...");
    
    // Application Setup for Responders
    std::vector<uint32_t> groupL2Addresses; 
    uint32_t groupL2Address = 0x00; 
    Ipv4AddressGenerator::Init(Ipv4Address ("225.0.0.0"), Ipv4Mask("255.0.0.0"));
    Ipv4Address clientRespondersAddress = Ipv4AddressGenerator::NextAddress (Ipv4Mask ("255.0.0.0"));

    uint16_t application_port = 8000; // Application port to TX/RX
    NetDeviceContainer activeTxUes;

    // Set Sidelink V2X Traces
    /*AsciiTraceHelper ascii;
    Ptr<OutputStreamWrapper> stream = ascii.CreateFileStream ("sidelinkV2x_out_monitoring.tr");
    *stream->GetStream () << "Time" << std::endl;
    
    AsciiTraceHelper ascii1;
    Ptr<OutputStreamWrapper> stream1 = ascii1.CreateFileStream ("sidelinkV2x_out_announcement_phy.tr");
    *stream1->GetStream () << "Time" << std::endl;
    
    AsciiTraceHelper ascii2;
    Ptr<OutputStreamWrapper> stream2 = ascii1.CreateFileStream ("sidelinkV2x_out_announcement_mac.tr");
    *stream2->GetStream () << "Time" << std::endl;

    std::ostringstream oss;
    oss.str("");*/
    for(gIt=txGroups.begin(); gIt != txGroups.end(); gIt++)
        {
            // Create Sidelink bearers
            // Use Tx for the group transmitter and Rx for all the receivers
            // Split Tx/Rx
            NetDeviceContainer txUe ((*gIt).Get(0));
            activeTxUes.Add(txUe);
            NetDeviceContainer rxUes = lteV2xHelper->RemoveNetDevice ((*gIt), txUe.Get (0));
            Ptr<LteSlTft> tft = Create<LteSlTft> (LteSlTft::TRANSMIT, clientRespondersAddress, groupL2Address);
            lteV2xHelper->ActivateSidelinkBearer (Seconds(0.0), txUe, tft);
            tft = Create<LteSlTft> (LteSlTft::RECEIVE, clientRespondersAddress, groupL2Address);
            lteV2xHelper->ActivateSidelinkBearer (Seconds(0.0), rxUes, tft);

            //std::cout << "Created group L2Address=" << groupL2Address << " IPAddress=";
            //clientRespondersAddress.Print(std::cout);
            //std::cout << std::endl;

            //Individual Socket Traffic Broadcast everyone
            Ptr<Socket> host = Socket::CreateSocket(txUe.Get(0)->GetNode(),TypeId::LookupByName ("ns3::UdpSocketFactory"));
            V2XGym_RegisterPtrMethod_noarg(host, Bind, NetSet);
            host->Connect(InetSocketAddress(clientRespondersAddress,application_port));
            V2XGym_RegisterPtrMethod_onearg(host, SetAllowBroadcast,bool,NetSet);
            V2XGym_RegisterPtrMethod_noarg(host, ShutdownRecv, NetSet);

            //Ptr<LteUeRrc> ueRrc = DynamicCast<LteUeRrc>( txUe.Get (0)->GetObject<LteUeNetDevice> ()->GetRrc () );    
            //ueRrc->TraceConnectWithoutContext ("SidelinkV2xMonitoring", MakeBoundCallback (&SidelinkV2xMonitoringTrace, stream));
            //oss << txUe.Get(0) ->GetObject<LteUeNetDevice>()->GetImsi(); 
            //Ptr<LteUePhy> uePhy = DynamicCast<LteUePhy>( txUe.Get (0)->GetObject<LteUeNetDevice> ()->GetPhy () );
            //uePhy->TraceConnect ("SidelinkV2xAnnouncement", oss.str() ,MakeBoundCallback (&SidelinkV2xAnnouncementPhyTrace, stream1));
            //uePhy->TraceConnectWithoutContext ("SidelinkV2xAnnouncement", MakeBoundCallback (&SidelinkV2xAnnouncementPhyTrace, host));
            Ptr<LteUeMac> ueMac = DynamicCast<LteUeMac>( txUe.Get (0)->GetObject<LteUeNetDevice> ()->GetMac () );
            ueMac->TraceConnectWithoutContext ("SidelinkV2xAnnouncement", MakeBoundCallback (&SidelinkV2xAnnouncementMacTrace, host));
            //ueMac->TraceConnect ("SidelinkV2xAnnouncement", oss.str() ,MakeBoundCallback (&SidelinkV2xAnnouncementMacTrace, stream2));

            Ptr<Socket> sink = Socket::CreateSocket(txUe.Get(0)->GetNode(),TypeId::LookupByName ("ns3::UdpSocketFactory"));
            sink->Bind(InetSocketAddress (Ipv4Address::GetAny (), application_port));
            sink->SetRecvCallback (MakeCallback (&ReceivePacket));

            //store and increment addresses
            groupL2Addresses.push_back (groupL2Address);
            groupL2Address++;
            clientRespondersAddress = Ipv4AddressGenerator::NextAddress (Ipv4Mask ("255.0.0.0"));
        }

        NS_LOG_INFO ("Creating Sidelink Configuration...");
        Ptr<LteUeRrcSl> ueSidelinkConfiguration = CreateObject<LteUeRrcSl>();
        V2XGym_RegisterPtrMethod_onearg(ueSidelinkConfiguration, SetSlEnabled,bool,NetSet);
        V2XGym_RegisterPtrMethod_onearg(ueSidelinkConfiguration, SetV2xEnabled,bool,NetSet);

        LteRrcSap::SlV2xPreconfiguration preconfiguration;
        preconfiguration.v2xPreconfigFreqList.freq[0].v2xCommPreconfigGeneral.carrierFreq = 54890;
        preconfiguration.v2xPreconfigFreqList.freq[0].v2xCommPreconfigGeneral.slBandwidth = slBandwidth;
        
        preconfiguration.v2xPreconfigFreqList.freq[0].v2xCommTxPoolList.nbPools = 1;
        preconfiguration.v2xPreconfigFreqList.freq[0].v2xCommRxPoolList.nbPools = 1;

        SlV2xPreconfigPoolFactory pFactory;
        V2XGym_RegisterMethod_onearg(pFactory, SetHaveUeSelectedResourceConfig,bool,NetSet);
        V2XGym_RegisterMethod_onearg(pFactory, SetStartRbPscchPool,int,NetSet);
        V2XGym_RegisterMethod_onearg(pFactory, SetDataTxP0,int,NetSet);
        V2XGym_RegisterMethod_onearg(pFactory, SetDataTxAlpha,double,NetSet);

        pFactory.SetSlSubframe (std::bitset<20> (0xFFFFF));
        pFactory.SetAdjacencyPscchPssch (adjacencyPscchPssch);
        pFactory.SetSizeSubchannel (sizeSubchannel);
        pFactory.SetNumSubchannel (numSubchannel);
        pFactory.SetStartRbSubchannel (startRbSubchannel);

        preconfiguration.v2xPreconfigFreqList.freq[0].v2xCommTxPoolList.pools[0] = pFactory.CreatePool ();
        preconfiguration.v2xPreconfigFreqList.freq[0].v2xCommRxPoolList.pools[0] = pFactory.CreatePool ();
        ueSidelinkConfiguration->SetSlV2xPreconfiguration (preconfiguration); 
        // Print Configuration
        *log_rx_data->GetStream() << "RxPackets;RxTime;RxId;TxId;TxTime;xPos;yPos;AveLatency" << std::endl;
        *log_tx_data->GetStream() << "TxPackets;TxTime;TxId;xPos;yPos" << std::endl;

        *log_buffer_status->GetStream() <<"UEid;PksNum;simtime"<<std::endl;//hank

        NS_LOG_INFO ("Installing Sidelink Configuration...");
        lteHelper->InstallSidelinkV2xConfiguration (ueRespondersDevs, ueSidelinkConfiguration);

        NS_LOG_INFO ("Enabling LTE traces...");
        V2XGym_RegisterPtrMethod_noarg(lteHelper,EnableTraces,NetSet);

        *log_simtime->GetStream() << "Simtime;TotalRx;TotalTx;PRR" << std::endl; 
        Simulator::Schedule(Seconds(1), &PrintStatus, 1, log_simtime);

        Simulator::Schedule(Seconds(0.1), &printbufferstatus);


  // OpenGym Env
  Ptr<OpenGymInterface> openGym = CreateObject<OpenGymInterface> ("tcp://localhost:", openGymPort);
  openGym->SetGetActionSpaceCb( MakeCallback (&MyGetActionSpace) );
  openGym->SetGetObservationSpaceCb( MakeCallback (&MyGetObservationSpace) );
  openGym->SetGetGameOverCb( MakeCallback (&MyGetGameOver) );
  openGym->SetGetObservationCb( MakeCallback (&MyGetObservation) );
  openGym->SetGetRewardCb( MakeCallback (&MyGetReward) );
  openGym->SetExecuteActionsCb( MakeCallback (&MyExecuteActions) );
  Simulator::Schedule (Seconds(0.0), &ScheduleNextStateRead, envStepTime, openGym);


  NS_LOG_UNCOND ("Simulation start");
  Simulator::Stop (Seconds (simulationTime));

  AnimationInterface anim("ns3gym-mobility.xml"); 

  Simulator::Run ();
  NS_LOG_UNCOND ("Simulation stop");
  V2XGym_RegisterPtrMethod_noarg(openGym,NotifySimulationEnd,NetSet);

  Simulator::Destroy ();

}

