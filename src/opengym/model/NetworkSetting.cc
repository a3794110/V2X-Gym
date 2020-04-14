/*#include <map>
#include <vector>
#include "ns3/object.h"
#include "ns3/TinyXML-module.h"
#include "ns3/core-module.h"*/
#include "NetworkSetting.h"


using namespace std;

namespace ns3{
    /*template <typename T>
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
    };*/

ReturnNS3_CType RegisterMethodResult1, RegisterMethodResult2;
int MethodArgSelection;
uint32_t AntennaHeight = 0;    
uint32_t CV_Num = 100;

// RL related parameter defination
uint32_t obs_low;  
uint32_t obs_high;
std::string obs_shape; 
std::string obs_dtype;
vector<uint32_t> obs_shape_vector;

uint32_t action_low;  
uint32_t action_high;
std::string action_shape; 
std::string action_dtype;
vector<uint32_t> action_shape_vector;


void NetworkSetting::IncludeConfig(std::string Dir){
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

bool NetworkSetting::Search(std::string helper, std::string submethod){ //whether arguments in the config file
    
    std::string keywords = helper+"::"+submethod;
    if( Config[keywords].empty() ){
        NS_LOG_UNCOND("Search Result, no such helper::submethod in config file: "<<keywords<<std::endl);
        exit(1);
    }
    else{
        return true;
    }
}
bool NetworkSetting::Search(std::string parameter){
    if( Config[parameter].empty() ){
        NS_LOG_UNCOND("Search Result, no such parameter in config file: "<<parameter<<std::endl);
        exit(1);
    }
    else{
        return true;
    }

}
int NetworkSetting::ArgNum(std::string helper, std::string submethod){ //return the number of parameters of argument
    
    std::string keywords = helper+"::"+submethod;
    return Config[keywords].size();
}



std::string NetworkSetting::GenerateSubmethodStr(std::string Helper, std::string SubMethod ){
    
    std::string keywords = Helper+"::"+SubMethod;
    return keywords;
}

void NetworkSetting::Increment(string Method){
    MethodCounter[Method] ++;
}

int NetworkSetting::GetMethodCounter( string Method){
    return MethodCounter[Method];
}

std::vector<uint32_t> V2XGym_GetRLShape(string shape){
    //string obs_extract;
    std::vector<uint32_t> vectorshape;
    uint obs_dim_num[5];
    int obs_dim = 0;
    if (shape.empty()){
        NS_LOG_UNCOND("In NetworkSetting.cc::V2XGym_GetRLShape: Nothing in it!");
        exit(1);
    }
    char* shapechar = const_cast<char*>(shape.c_str());
    char* pch = strtok( shapechar, ",");
    while (pch != NULL)
    {   
        obs_dim_num[obs_dim] = atoi(pch);
        obs_dim ++;
        pch = strtok (NULL, ",");
    }
    if (obs_dim == 1){
        vectorshape = { obs_dim_num[0], };
    }
    else if (obs_dim == 2){
        vectorshape = { obs_dim_num[0], obs_dim_num[0],};
    }
    else if (obs_dim == 3){
        vectorshape = { obs_dim_num[0], obs_dim_num[1], obs_dim_num[2],};
    }
    else if (obs_dim == 4){
        vectorshape = { obs_dim_num[0], obs_dim_num[1], obs_dim_num[2], obs_dim_num[3],};
    }
    else if (obs_dim == 5){
         vectorshape = { obs_dim_num[0], obs_dim_num[1], obs_dim_num[2], obs_dim_num[3], obs_dim_num[4],};
    }
    else{
        NS_LOG_UNCOND("Over the RL Obs Space Size Limit (5 dimention)!!");
        exit(1);
    }


    return vectorshape;
}


}