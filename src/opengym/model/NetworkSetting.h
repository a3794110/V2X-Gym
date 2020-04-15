#ifndef NETWORKSETTING
#define NETWORKSETTING

#include <map>
#include <vector>
#include "ns3/object.h"
#include "ns3/TinyXML-module.h"
#include "ns3/core-module.h"


using namespace std;
//#include "ns3/gtk-config-store.h"

namespace ns3{

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

    #define CallPtrSubMethod_twoArg(Helper, SubMethod, Arg1, Arg2) Helper->SubMethod( (Arg1), (Arg2) )
    #define CallPtrSubMethod_oneArg(Helper, SubMethod, Arg1) Helper->SubMethod(Arg1 )
    #define CallPtrSubMethod_noArg(Helper, SubMethod) Helper->SubMethod()
    #define CallSubMethod_twoArg(Helper, SubMethod, Arg1, Arg2) Helper.SubMethod( (Arg1), (Arg2) )
    #define CallSubMethod_oneArg(Helper, SubMethod, Arg1) Helper.SubMethod(Arg1 )
    #define CallSubMethod_noArg(Helper, SubMethod) Helper.SubMethod()
    #define Stringize(name) #name

    extern ReturnNS3_CType RegisterMethodResult1, RegisterMethodResult2;
    extern int MethodArgSelection;
    #define V2XGym_RegisterPtrMethod_twoarg(Helper, SubMethod, Type1, Type2, NetworkSettingInstance)\
        do{ \
            if( NetworkSettingInstance->Search( Stringize(Helper), Stringize(SubMethod) ) ){ \
                \
                MethodArgSelection = NetworkSettingInstance->GetMethodCounter( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)) );\
                RegisterMethodResult1 = NetworkSettingInstance->GetArg<Type1>( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)), 2*MethodArgSelection);\
                RegisterMethodResult2 = NetworkSettingInstance->GetArg<Type2>( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)), 2*MethodArgSelection+1);\
                CallPtrSubMethod_twoArg(Helper, SubMethod, RegisterMethodResult1.P##Type1,  RegisterMethodResult2.P##Type2 );\
                NetworkSettingInstance->Increment( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)) );\
            }\
            else{\
                NS_LOG_UNCOND("No Such SubMethod Setting in Config files"<<std::endl);\
                exit(1);\
            }\
        } while (0)

    #define V2XGym_RegisterPtrMethod_onearg(Helper, SubMethod, Type, NetworkSettingInstance)\
        do{ \
            if( NetworkSettingInstance->Search( Stringize(Helper), Stringize(SubMethod) ) ){ \
                RegisterMethodResult1 = NetworkSettingInstance->GetArg<Type>( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)), 0);\
                CallPtrSubMethod_oneArg(Helper, SubMethod, RegisterMethodResult1.P##Type );\
            }\
            else{\
                NS_LOG_UNCOND("No Such SubMethod Setting in Config files"<<std::endl);\
                exit(1);\
            }\
        } while (0)

    #define V2XGym_RegisterPtrMethod_noarg(Helper, SubMethod, NetworkSettingInstance)\
        do{ \
            if( NetworkSettingInstance->Search( Stringize(Helper), Stringize(SubMethod) ) ){ \
                CallPtrSubMethod_noArg(Helper, SubMethod);\
            }\
            else{\
                NS_LOG_UNCOND("No Such SubMethod Setting in Config files"<<std::endl);\
                exit(1);\
            }\
        } while (0)
    #define V2XGym_RegisterMethod_twoarg(Helper, SubMethod, Type1, Type2, NetworkSettingInstance)\
        do{ \
            if( NetworkSettingInstance->Search( Stringize(Helper), Stringize(SubMethod) ) ){ \
                \
                MethodArgSelection = NetworkSettingInstance->GetMethodCounter( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)) );\
                RegisterMethodResult1 = NetworkSettingInstance->GetArg<Type1>( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)), 2*MethodArgSelection);\
                RegisterMethodResult2 = NetworkSettingInstance->GetArg<Type2>( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)), 2*MethodArgSelection+1);\
                CallSubMethod_twoArg(Helper, SubMethod, RegisterMethodResult1.P##Type1,  RegisterMethodResult2.P##Type2 );\
                NetworkSettingInstance->Increment( NetworkSettingInstance->GenerateSubmethodStr(Stringize(Helper), Stringize(SubMethod)) );\
            }\
            else{\
                NS_LOG_UNCOND("No Such SubMethod Setting in Config files"<<std::endl);\
                exit(1);\
            }\
        } while (0)

    #define V2XGym_RegisterMethod_onearg(Helper, SubMethod, Type, NetworkSettingInstance)\
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

    #define V2XGym_RegisterMethod_noarg(Helper, SubMethod, NetworkSettingInstance)\
        do{ \
            if( NetworkSettingInstance->Search( Stringize(Helper), Stringize(SubMethod) ) ){ \
                CallSubMethod_noArg(Helper, SubMethod);\
            }\
            else{\
                NS_LOG_UNCOND("No Such SubMethod Setting in Config files"<<std::endl);\
                exit(1);\
            }\
        } while (0)


    #define V2XGym_RegisterParameters(Parameter, Type, NetworkSettingInstance)\
        do{\
            /*ReturnCType Parameter##Result;*/\
            RegisterMethodResult1 = NetworkSettingInstance->GetArg<Type>( Stringize(Parameter), 0);\
            Parameter = RegisterMethodResult1.P##Type;\
        } while(0)  
    
    #define InitialCmd() \
            CommandLine Cmd\

    #define ConfigCmd() \
            Cmd.Parse(argc, argv)\

    #define V2XGym_RegisterCmdParameters(Parameter, Type, NetworkSettingInstance, Comment)\
        do{\
            /*ReturnCType Parameter##Result;*/\
            Cmd.AddValue(Comment, Parameter);\
            RegisterMethodResult1 = NetworkSettingInstance->GetArg<Type>( Stringize(Parameter), 0);\
            Parameter = RegisterMethodResult1.P##Type;\
        } while(0)

    //ReturnNS3Type result;
    #define V2XGym_SetDeaultConfig(Arg1, Type, NetworkSettingInstance) \
        do{\
            RegisterMethodResult1 = NetworkSettingInstance->GetArg<Type>( Arg1, 0);\
            Config::SetDefault(Arg1, RegisterMethodResult1.P##Type );\
        } while(0)

    
    extern uint32_t AntennaHeight;    
    extern uint32_t CV_Num;
    extern uint32_t obs_low;  
    extern uint32_t obs_high;
    extern std::string obs_shape; 
    extern std::string obs_dtype; 
    extern vector<uint32_t> obs_shape_vector;

    extern uint32_t action_low;  
    extern uint32_t action_high;
    extern std::string action_shape; 
    extern std::string action_dtype; 
    extern vector<uint32_t> action_shape_vector;

    std::vector<uint32_t> V2XGym_GetRLShape(string shape);

    #define V2XGym_InitialParameters()\
        uint32_t simSeed = 1;\
        double simulationTime = 100;\
        double envStepTime = 0.1; \
        uint32_t openGymPort = 5555;\
        uint32_t testArg = 0;\
        string NetworkConfig;\
        CommandLine cmd;\
        cmd.AddValue ("openGymPort", "Port number for OpenGym env. Default: 5555", openGymPort);\
        cmd.AddValue ("simSeed", "Seed for random generator. Default: 1", simSeed);\
        cmd.AddValue ("simTime", "Simulation time in seconds. Default: 10s", simulationTime);\
        cmd.AddValue ("testArg", "Extra simulation argument. Default: 0", testArg);\
        cmd.AddValue ("envStepTime", "stpe time", envStepTime);\
        cmd.AddValue ("CV_Num","Number of Connected Car. Default: 100",CV_Num  );\
        cmd.AddValue ("NetworkConfig", "the location of network config file", NetworkConfig);\
        cmd.AddValue ("AntennaHeight", "the antenna height of connected car", AntennaHeight);\
        cmd.AddValue ("obs_low", "low bound of observation space", obs_low);\
        cmd.AddValue ("obs_high", "high bound of observation space", obs_high);\
        cmd.AddValue ("obs_shape", "shape of observation space", obs_shape);\
        cmd.AddValue ("obs_dtype", "dtype of obs space", obs_dtype);\
        cmd.AddValue ("action_low", "low bound of action space", action_low);\
        cmd.AddValue ("action_high", "high bound of action space", action_high);\
        cmd.AddValue ("action_shape", "shape of action space", action_shape);\
        cmd.AddValue ("action_dtype", "dtype of action space", action_dtype);\
       
    #define V2XGym_SettingConfigParameters()\
        do{\
            cmd.Parse (argc, argv);\
            obs_shape_vector = V2XGym_GetRLShape(obs_shape);\
            action_shape_vector = V2XGym_GetRLShape(action_shape);\
            NS_LOG_UNCOND("Ns3Env parameters:");\
            NS_LOG_UNCOND("--simulationTime: " << simulationTime);\
            NS_LOG_UNCOND("--openGymPort: " << openGymPort);\
            NS_LOG_UNCOND("--envStepTime: " << envStepTime);\
            NS_LOG_UNCOND("--seed: " << simSeed);\
            NS_LOG_UNCOND("--testArg: " << testArg);\
            NS_LOG_UNCOND("--CV_Num: "<<CV_Num);\
            NS_LOG_UNCOND("--NetworkConfig: "<<NetworkConfig);\
            NS_LOG_UNCOND("--AntennaHeight: "<<AntennaHeight);\
            NS_LOG_UNCOND("--obs_low: "<<obs_low);\
            NS_LOG_UNCOND("--obs_high: "<<obs_high);\
            NS_LOG_UNCOND("--obs_shape: "<<obs_shape);\
            NS_LOG_UNCOND("--obs_dtype: "<<obs_dtype);\
            NS_LOG_UNCOND("--action_low: "<<action_low);\
            NS_LOG_UNCOND("--action_high: "<<action_high);\
            NS_LOG_UNCOND("--action_shape: "<<action_shape);\
            NS_LOG_UNCOND("--action_dtype: "<<action_dtype);\
        }while(0)\

        

    #define V2XGym_InitCVs()\
            NodeContainer nodes;\
            nodes.Create (CV_Num);\
            MobilityHelper ueMobility;\
            ueMobility.SetMobilityModel ("ns3::WaypointMobilityModel");\
            ueMobility.Install (nodes);\
            for (uint32_t i=0; i<CV_Num; i++)\
            {\
                Ptr<WaypointMobilityModel> ueWaypointMobility = DynamicCast<WaypointMobilityModel>( nodes.Get(i)->GetObject<MobilityModel>());   \
                ueWaypointMobility->AddWaypoint(Waypoint(Seconds(0),Vector(0, 0 ,0)));\
            }\
        
        

    class NetworkSetting: public Object{
        public:
            NetworkSetting(){
            }
            void IncludeConfig(std::string Dir);
            bool Search(std::string helper, std::string submethod);
            bool Search(std::string parameter);
            int ArgNum(std::string helper, std::string submethod);
            
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

            std::string GenerateSubmethodStr(std::string Helper, std::string SubMethod );

            void Increment(string Method);
            
            int GetMethodCounter( string Method);

        private:
            std::map<std::string, std::vector<std::string> > Config;
            std::map<std::string, int> MethodCounter ;
            
    };
}

#endif