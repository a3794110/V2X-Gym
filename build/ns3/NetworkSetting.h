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
    #define RegisterPtrMethod_twoarg(Helper, SubMethod, Type1, Type2, NetworkSettingInstance)\
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

    #define RegisterPtrMethod_onearg(Helper, SubMethod, Type, NetworkSettingInstance)\
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

    #define RegisterPtrMethod_noarg(Helper, SubMethod, NetworkSettingInstance)\
        do{ \
            if( NetworkSettingInstance->Search( Stringize(Helper), Stringize(SubMethod) ) ){ \
                CallPtrSubMethod_noArg(Helper, SubMethod);\
            }\
            else{\
                NS_LOG_UNCOND("No Such SubMethod Setting in Config files"<<std::endl);\
                exit(1);\
            }\
        } while (0)
    #define RegisterMethod_twoarg(Helper, SubMethod, Type1, Type2, NetworkSettingInstance)\
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
    
    #define InitialCmd() \
            CommandLine Cmd\

    #define ConfigCmd() \
            Cmd.Parse(argc, argv)\

    #define RegisterCmdParameters(Parameter, Type, NetworkSettingInstance, Comment)\
        do{\
            /*ReturnCType Parameter##Result;*/\
            Cmd.AddValue(Comment, Parameter);\
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