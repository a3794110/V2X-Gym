#include "ns3module.h"
static PyMethodDef internet_apps_FatalImpl_functions[] = {
    {NULL, NULL, 0, NULL}
};
#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef internet_apps_FatalImpl_moduledef = {
    PyModuleDef_HEAD_INIT,
    "internet_apps.FatalImpl",
    NULL,
    -1,
    internet_apps_FatalImpl_functions,
};
#endif

static PyObject *
initinternet_apps_FatalImpl(void)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&internet_apps_FatalImpl_moduledef);
    #else
    m = Py_InitModule3((char *) "internet_apps.FatalImpl", internet_apps_FatalImpl_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    return m;
}
static PyMethodDef internet_apps_Hash_Function_functions[] = {
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3HashFunctionFnv1a_Type;


PyTypeObject *_PyNs3HashFunctionHash32_Type;


PyTypeObject *_PyNs3HashFunctionHash64_Type;


PyTypeObject *_PyNs3HashFunctionMurmur3_Type;

#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef internet_apps_Hash_Function_moduledef = {
    PyModuleDef_HEAD_INIT,
    "internet_apps.Hash.Function",
    NULL,
    -1,
    internet_apps_Hash_Function_functions,
};
#endif

static PyObject *
initinternet_apps_Hash_Function(void)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&internet_apps_Hash_Function_moduledef);
    #else
    m = Py_InitModule3((char *) "internet_apps.Hash.Function", internet_apps_Hash_Function_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    /* Import the 'ns3::Hash::Function::Fnv1a' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionFnv1a_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Fnv1a");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Hash::Function::Hash32' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionHash32_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Hash32");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Hash::Function::Hash64' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionHash64_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Hash64");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Hash::Function::Murmur3' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionMurmur3_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Murmur3");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    return m;
}
static PyMethodDef internet_apps_Hash_functions[] = {
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3HashImplementation_Type;

#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef internet_apps_Hash_moduledef = {
    PyModuleDef_HEAD_INIT,
    "internet_apps.Hash",
    NULL,
    -1,
    internet_apps_Hash_functions,
};
#endif

static PyObject *
initinternet_apps_Hash(void)
{
    PyObject *m;
    PyObject *submodule;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&internet_apps_Hash_moduledef);
    #else
    m = Py_InitModule3((char *) "internet_apps.Hash", internet_apps_Hash_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    /* Import the 'ns3::Hash::Implementation' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashImplementation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Implementation");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    submodule = initinternet_apps_Hash_Function();
    if (submodule == NULL) {
        return NULL;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "Function", submodule);
    return m;
}
static PyMethodDef internet_apps_TracedValueCallback_functions[] = {
    {NULL, NULL, 0, NULL}
};
#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef internet_apps_TracedValueCallback_moduledef = {
    PyModuleDef_HEAD_INIT,
    "internet_apps.TracedValueCallback",
    NULL,
    -1,
    internet_apps_TracedValueCallback_functions,
};
#endif

static PyObject *
initinternet_apps_TracedValueCallback(void)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&internet_apps_TracedValueCallback_moduledef);
    #else
    m = Py_InitModule3((char *) "internet_apps.TracedValueCallback", internet_apps_TracedValueCallback_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    return m;
}
static PyMethodDef internet_apps_internal_functions[] = {
    {NULL, NULL, 0, NULL}
};
#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef internet_apps_internal_moduledef = {
    PyModuleDef_HEAD_INIT,
    "internet_apps.internal",
    NULL,
    -1,
    internet_apps_internal_functions,
};
#endif

static PyObject *
initinternet_apps_internal(void)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&internet_apps_internal_moduledef);
    #else
    m = Py_InitModule3((char *) "internet_apps.internal", internet_apps_internal_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    return m;
}
static PyMethodDef internet_apps_functions[] = {
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3Address_Type;
std::map<void*, PyObject*> *_PyNs3Address_wrapper_registry;


PyTypeObject *_PyNs3ApplicationContainer_Type;
std::map<void*, PyObject*> *_PyNs3ApplicationContainer_wrapper_registry;


PyTypeObject *_PyNs3AttributeConstructionList_Type;
std::map<void*, PyObject*> *_PyNs3AttributeConstructionList_wrapper_registry;


PyTypeObject *_PyNs3AttributeConstructionListItem_Type;
std::map<void*, PyObject*> *_PyNs3AttributeConstructionListItem_wrapper_registry;


PyTypeObject *_PyNs3Average__Double_Type;
std::map<void*, PyObject*> *_PyNs3Average__Double_wrapper_registry;


PyTypeObject *_PyNs3Buffer_Type;
std::map<void*, PyObject*> *_PyNs3Buffer_wrapper_registry;


PyTypeObject *_PyNs3BufferIterator_Type;
std::map<void*, PyObject*> *_PyNs3BufferIterator_wrapper_registry;


PyTypeObject *_PyNs3ByteTagIterator_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagIterator_wrapper_registry;


PyTypeObject *_PyNs3ByteTagIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3ByteTagList_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagList_wrapper_registry;


PyTypeObject *_PyNs3ByteTagListIterator_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagListIterator_wrapper_registry;


PyTypeObject *_PyNs3ByteTagListIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagListIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3CallbackBase_Type;
std::map<void*, PyObject*> *_PyNs3CallbackBase_wrapper_registry;


PyTypeObject *_PyNs3DataOutputCallback_Type;
std::map<void*, PyObject*> *_PyNs3DataOutputCallback_wrapper_registry;


PyTypeObject *_PyNs3DefaultDeleter__Ns3AttributeAccessor_Type;
std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3AttributeAccessor_wrapper_registry;


PyTypeObject *_PyNs3DefaultDeleter__Ns3AttributeChecker_Type;
std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3AttributeChecker_wrapper_registry;


PyTypeObject *_PyNs3DefaultDeleter__Ns3AttributeValue_Type;
std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3AttributeValue_wrapper_registry;


PyTypeObject *_PyNs3DefaultDeleter__Ns3CallbackImplBase_Type;
std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3CallbackImplBase_wrapper_registry;


PyTypeObject *_PyNs3DefaultDeleter__Ns3EventImpl_Type;
std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3EventImpl_wrapper_registry;


PyTypeObject *_PyNs3DefaultDeleter__Ns3HashImplementation_Type;
std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3HashImplementation_wrapper_registry;


PyTypeObject *_PyNs3DefaultDeleter__Ns3NixVector_Type;
std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3NixVector_wrapper_registry;


PyTypeObject *_PyNs3DefaultDeleter__Ns3Packet_Type;
std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3Packet_wrapper_registry;


PyTypeObject *_PyNs3DefaultDeleter__Ns3TraceSourceAccessor_Type;
std::map<void*, PyObject*> *_PyNs3DefaultDeleter__Ns3TraceSourceAccessor_wrapper_registry;


PyTypeObject *_PyNs3EventId_Type;
std::map<void*, PyObject*> *_PyNs3EventId_wrapper_registry;


PyTypeObject *_PyNs3Hasher_Type;
std::map<void*, PyObject*> *_PyNs3Hasher_wrapper_registry;


PyTypeObject *_PyNs3Inet6SocketAddress_Type;
std::map<void*, PyObject*> *_PyNs3Inet6SocketAddress_wrapper_registry;


PyTypeObject *_PyNs3InetSocketAddress_Type;
std::map<void*, PyObject*> *_PyNs3InetSocketAddress_wrapper_registry;


PyTypeObject *_PyNs3Ipv4Address_Type;
std::map<void*, PyObject*> *_PyNs3Ipv4Address_wrapper_registry;


PyTypeObject *_PyNs3Ipv4InterfaceAddress_Type;
std::map<void*, PyObject*> *_PyNs3Ipv4InterfaceAddress_wrapper_registry;


PyTypeObject *_PyNs3Ipv4InterfaceContainer_Type;
std::map<void*, PyObject*> *_PyNs3Ipv4InterfaceContainer_wrapper_registry;


PyTypeObject *_PyNs3Ipv4Mask_Type;
std::map<void*, PyObject*> *_PyNs3Ipv4Mask_wrapper_registry;


PyTypeObject *_PyNs3Ipv6Address_Type;
std::map<void*, PyObject*> *_PyNs3Ipv6Address_wrapper_registry;


PyTypeObject *_PyNs3Ipv6Prefix_Type;
std::map<void*, PyObject*> *_PyNs3Ipv6Prefix_wrapper_registry;


PyTypeObject *_PyNs3Mac48Address_Type;
std::map<void*, PyObject*> *_PyNs3Mac48Address_wrapper_registry;


PyTypeObject *_PyNs3Mac8Address_Type;
std::map<void*, PyObject*> *_PyNs3Mac8Address_wrapper_registry;


PyTypeObject *_PyNs3NetDeviceContainer_Type;
std::map<void*, PyObject*> *_PyNs3NetDeviceContainer_wrapper_registry;


PyTypeObject *_PyNs3NodeContainer_Type;
std::map<void*, PyObject*> *_PyNs3NodeContainer_wrapper_registry;


PyTypeObject *_PyNs3ObjectBase_Type;
std::map<void*, PyObject*> *_PyNs3ObjectBase_wrapper_registry;


PyTypeObject *_PyNs3ObjectDeleter_Type;
std::map<void*, PyObject*> *_PyNs3ObjectDeleter_wrapper_registry;


PyTypeObject *_PyNs3ObjectFactory_Type;
std::map<void*, PyObject*> *_PyNs3ObjectFactory_wrapper_registry;


PyTypeObject *_PyNs3PacketMetadata_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadata_wrapper_registry;


PyTypeObject *_PyNs3PacketMetadataItem_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadataItem_wrapper_registry;


PyTypeObject *_PyNs3PacketMetadataItemIterator_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadataItemIterator_wrapper_registry;


PyTypeObject *_PyNs3PacketTagIterator_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagIterator_wrapper_registry;


PyTypeObject *_PyNs3PacketTagIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3PacketTagList_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagList_wrapper_registry;


PyTypeObject *_PyNs3PacketTagListTagData_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagListTagData_wrapper_registry;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map;


PyTypeObject *_PyNs3Simulator_Type;
std::map<void*, PyObject*> *_PyNs3Simulator_wrapper_registry;


PyTypeObject *_PyNs3StatisticalSummary_Type;
std::map<void*, PyObject*> *_PyNs3StatisticalSummary_wrapper_registry;


PyTypeObject *_PyNs3Tag_Type;


PyTypeObject *_PyNs3TagBuffer_Type;
std::map<void*, PyObject*> *_PyNs3TagBuffer_wrapper_registry;


PyTypeObject *_PyNs3TimeWithUnit_Type;
std::map<void*, PyObject*> *_PyNs3TimeWithUnit_wrapper_registry;


PyTypeObject *_PyNs3TypeId_Type;
std::map<void*, PyObject*> *_PyNs3TypeId_wrapper_registry;


PyTypeObject *_PyNs3TypeIdAttributeInformation_Type;
std::map<void*, PyObject*> *_PyNs3TypeIdAttributeInformation_wrapper_registry;


PyTypeObject *_PyNs3TypeIdTraceSourceInformation_Type;
std::map<void*, PyObject*> *_PyNs3TypeIdTraceSourceInformation_wrapper_registry;


PyTypeObject *_PyNs3Empty_Type;
std::map<void*, PyObject*> *_PyNs3Empty_wrapper_registry;


PyTypeObject *_PyNs3Int64x64_t_Type;
std::map<void*, PyObject*> *_PyNs3Int64x64_t_wrapper_registry;


PyTypeObject *_PyNs3Chunk_Type;


PyTypeObject *_PyNs3Header_Type;


PyTypeObject *_PyNs3Object_Type;


PyTypeObject *_PyNs3ObjectAggregateIterator_Type;
std::map<void*, PyObject*> *_PyNs3ObjectAggregateIterator_wrapper_registry;


PyTypeObject *_PyNs3RandomVariableStream_Type;


PyTypeObject *_PyNs3SequentialRandomVariable_Type;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map;


PyTypeObject *_PyNs3Socket_Type;


PyTypeObject *_PyNs3SocketIpTosTag_Type;


PyTypeObject *_PyNs3SocketIpTtlTag_Type;


PyTypeObject *_PyNs3SocketIpv6HopLimitTag_Type;


PyTypeObject *_PyNs3SocketIpv6TclassTag_Type;


PyTypeObject *_PyNs3SocketPriorityTag_Type;


PyTypeObject *_PyNs3SocketSetDontFragmentTag_Type;


PyTypeObject *_PyNs3Time_Type;
std::map<void*, PyObject*> *_PyNs3Time_wrapper_registry;


PyTypeObject *_PyNs3TraceSourceAccessor_Type;


PyTypeObject *_PyNs3Trailer_Type;


PyTypeObject *_PyNs3TriangularRandomVariable_Type;


PyTypeObject *_PyNs3UniformRandomVariable_Type;


PyTypeObject *_PyNs3WeibullRandomVariable_Type;


PyTypeObject *_PyNs3ZetaRandomVariable_Type;


PyTypeObject *_PyNs3ZipfRandomVariable_Type;


PyTypeObject *_PyNs3Application_Type;


PyTypeObject *_PyNs3AttributeAccessor_Type;


PyTypeObject *_PyNs3AttributeChecker_Type;


PyTypeObject *_PyNs3AttributeValue_Type;


PyTypeObject *_PyNs3BooleanChecker_Type;


PyTypeObject *_PyNs3BooleanValue_Type;


PyTypeObject *_PyNs3CallbackChecker_Type;


PyTypeObject *_PyNs3CallbackImplBase_Type;


PyTypeObject *_PyNs3CallbackValue_Type;


PyTypeObject *_PyNs3ConstantRandomVariable_Type;


PyTypeObject *_PyNs3DataCalculator_Type;


PyTypeObject *_PyNs3DataOutputInterface_Type;


PyTypeObject *_PyNs3DeterministicRandomVariable_Type;


PyTypeObject *_PyNs3DoubleValue_Type;


PyTypeObject *_PyNs3EmpiricalRandomVariable_Type;


PyTypeObject *_PyNs3EmptyAttributeAccessor_Type;


PyTypeObject *_PyNs3EmptyAttributeChecker_Type;


PyTypeObject *_PyNs3EmptyAttributeValue_Type;


PyTypeObject *_PyNs3EnumChecker_Type;


PyTypeObject *_PyNs3EnumValue_Type;


PyTypeObject *_PyNs3ErlangRandomVariable_Type;


PyTypeObject *_PyNs3EventImpl_Type;


PyTypeObject *_PyNs3ExponentialRandomVariable_Type;


PyTypeObject *_PyNs3GammaRandomVariable_Type;


PyTypeObject *_PyNs3IntegerValue_Type;


PyTypeObject *_PyNs3Ipv4_Type;


PyTypeObject *_PyNs3Ipv4AddressChecker_Type;


PyTypeObject *_PyNs3Ipv4AddressValue_Type;


PyTypeObject *_PyNs3Ipv4MaskChecker_Type;


PyTypeObject *_PyNs3Ipv4MaskValue_Type;


PyTypeObject *_PyNs3Ipv4MulticastRoute_Type;


PyTypeObject *_PyNs3Ipv4Route_Type;


PyTypeObject *_PyNs3Ipv6AddressChecker_Type;


PyTypeObject *_PyNs3Ipv6AddressValue_Type;


PyTypeObject *_PyNs3Ipv6PrefixChecker_Type;


PyTypeObject *_PyNs3Ipv6PrefixValue_Type;


PyTypeObject *_PyNs3LogNormalRandomVariable_Type;


PyTypeObject *_PyNs3Mac48AddressChecker_Type;


PyTypeObject *_PyNs3Mac48AddressValue_Type;


PyTypeObject *_PyNs3MinMaxAvgTotalCalculator__Double_Type;


PyTypeObject *_PyNs3NetDevice_Type;


PyTypeObject *_PyNs3NixVector_Type;


PyTypeObject *_PyNs3Node_Type;


PyTypeObject *_PyNs3NormalRandomVariable_Type;


PyTypeObject *_PyNs3ObjectFactoryChecker_Type;


PyTypeObject *_PyNs3ObjectFactoryValue_Type;


PyTypeObject *_PyNs3Packet_Type;


PyTypeObject *_PyNs3ParetoRandomVariable_Type;


PyTypeObject *_PyNs3TimeValue_Type;


PyTypeObject *_PyNs3TypeIdChecker_Type;


PyTypeObject *_PyNs3TypeIdValue_Type;


PyTypeObject *_PyNs3UintegerValue_Type;


PyTypeObject *_PyNs3AddressChecker_Type;


PyTypeObject *_PyNs3AddressValue_Type;


PyTypeObject *_PyNs3CallbackImpl__Bool_Ns3Ptr__lt__ns3Socket__gt___Const_ns3Address___amp___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type;


PyTypeObject *_PyNs3CallbackImpl__Ns3ObjectBase___star___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type;


PyTypeObject *_PyNs3CallbackImpl__Void_Const_ns3Ipv4Address___amp___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type;


PyTypeObject *_PyNs3CallbackImpl__Void_Ns3Ptr__lt__ns3NetDevice__gt___Ns3Ptr__lt__const_ns3Packet__gt___Unsigned_short_Const_ns3Address___amp___Const_ns3Address___amp___Ns3NetDevicePacketType_Ns3Empty_Ns3Empty_Ns3Empty_Type;


PyTypeObject *_PyNs3CallbackImpl__Void_Ns3Ptr__lt__ns3NetDevice__gt___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type;


PyTypeObject *_PyNs3CallbackImpl__Void_Ns3Ptr__lt__ns3Socket__gt___Const_ns3Address___amp___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type;


PyTypeObject *_PyNs3CallbackImpl__Void_Ns3Ptr__lt__ns3Socket__gt___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type;


PyTypeObject *_PyNs3CallbackImpl__Void_Ns3Ptr__lt__ns3Socket__gt___Unsigned_int_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type;


PyTypeObject *_PyNs3CallbackImpl__Void_Ns3Time_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type;


std::map<void*, PyObject*> PyNs3DefaultDeleter__Ns3RadvdInterface_wrapper_registry;


static int
_wrap_PyNs3DefaultDeleter__Ns3RadvdInterface__tp_init__0(PyNs3DefaultDeleter__Ns3RadvdInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::DefaultDeleter< ns3::RadvdInterface >();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3DefaultDeleter__Ns3RadvdInterface__tp_init__1(PyNs3DefaultDeleter__Ns3RadvdInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3DefaultDeleter__Ns3RadvdInterface *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DefaultDeleter__Ns3RadvdInterface_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::DefaultDeleter< ns3::RadvdInterface >(*((PyNs3DefaultDeleter__Ns3RadvdInterface *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3DefaultDeleter__Ns3RadvdInterface__tp_init(PyNs3DefaultDeleter__Ns3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DefaultDeleter__Ns3RadvdInterface__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DefaultDeleter__Ns3RadvdInterface__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


static PyObject*
_wrap_PyNs3DefaultDeleter__Ns3RadvdInterface__copy__(PyNs3DefaultDeleter__Ns3RadvdInterface *self)
{

    PyNs3DefaultDeleter__Ns3RadvdInterface *py_copy;
    py_copy = PyObject_New(PyNs3DefaultDeleter__Ns3RadvdInterface, &PyNs3DefaultDeleter__Ns3RadvdInterface_Type);
    py_copy->obj = new ns3::DefaultDeleter< ns3::RadvdInterface >(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3DefaultDeleter__Ns3RadvdInterface_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3DefaultDeleter__Ns3RadvdInterface_methods[] = {
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3DefaultDeleter__Ns3RadvdInterface__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3DefaultDeleter__Ns3RadvdInterface__tp_dealloc(PyNs3DefaultDeleter__Ns3RadvdInterface *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3DefaultDeleter__Ns3RadvdInterface_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3DefaultDeleter__Ns3RadvdInterface_wrapper_registry.end()) {
        PyNs3DefaultDeleter__Ns3RadvdInterface_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::DefaultDeleter< ns3::RadvdInterface > *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3DefaultDeleter__Ns3RadvdInterface_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.DefaultDeleter__Ns3RadvdInterface",            /* tp_name */
    sizeof(PyNs3DefaultDeleter__Ns3RadvdInterface),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DefaultDeleter__Ns3RadvdInterface__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    "DefaultDeleter__Ns3RadvdInterface(arg0)\nDefaultDeleter__Ns3RadvdInterface()",                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DefaultDeleter__Ns3RadvdInterface_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DefaultDeleter__Ns3RadvdInterface__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};



std::map<void*, PyObject*> PyNs3DefaultDeleter__Ns3RadvdPrefix_wrapper_registry;


static int
_wrap_PyNs3DefaultDeleter__Ns3RadvdPrefix__tp_init__0(PyNs3DefaultDeleter__Ns3RadvdPrefix *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::DefaultDeleter< ns3::RadvdPrefix >();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3DefaultDeleter__Ns3RadvdPrefix__tp_init__1(PyNs3DefaultDeleter__Ns3RadvdPrefix *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3DefaultDeleter__Ns3RadvdPrefix *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DefaultDeleter__Ns3RadvdPrefix_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::DefaultDeleter< ns3::RadvdPrefix >(*((PyNs3DefaultDeleter__Ns3RadvdPrefix *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3DefaultDeleter__Ns3RadvdPrefix__tp_init(PyNs3DefaultDeleter__Ns3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DefaultDeleter__Ns3RadvdPrefix__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DefaultDeleter__Ns3RadvdPrefix__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


static PyObject*
_wrap_PyNs3DefaultDeleter__Ns3RadvdPrefix__copy__(PyNs3DefaultDeleter__Ns3RadvdPrefix *self)
{

    PyNs3DefaultDeleter__Ns3RadvdPrefix *py_copy;
    py_copy = PyObject_New(PyNs3DefaultDeleter__Ns3RadvdPrefix, &PyNs3DefaultDeleter__Ns3RadvdPrefix_Type);
    py_copy->obj = new ns3::DefaultDeleter< ns3::RadvdPrefix >(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3DefaultDeleter__Ns3RadvdPrefix_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3DefaultDeleter__Ns3RadvdPrefix_methods[] = {
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3DefaultDeleter__Ns3RadvdPrefix__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3DefaultDeleter__Ns3RadvdPrefix__tp_dealloc(PyNs3DefaultDeleter__Ns3RadvdPrefix *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3DefaultDeleter__Ns3RadvdPrefix_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3DefaultDeleter__Ns3RadvdPrefix_wrapper_registry.end()) {
        PyNs3DefaultDeleter__Ns3RadvdPrefix_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::DefaultDeleter< ns3::RadvdPrefix > *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3DefaultDeleter__Ns3RadvdPrefix_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.DefaultDeleter__Ns3RadvdPrefix",            /* tp_name */
    sizeof(PyNs3DefaultDeleter__Ns3RadvdPrefix),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DefaultDeleter__Ns3RadvdPrefix__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    "DefaultDeleter__Ns3RadvdPrefix(arg0)\nDefaultDeleter__Ns3RadvdPrefix()",                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DefaultDeleter__Ns3RadvdPrefix_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DefaultDeleter__Ns3RadvdPrefix__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};



std::map<void*, PyObject*> PyNs3DhcpHelper_wrapper_registry;


static int
_wrap_PyNs3DhcpHelper__tp_init__0(PyNs3DhcpHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3DhcpHelper *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DhcpHelper_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::DhcpHelper(*((PyNs3DhcpHelper *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3DhcpHelper__tp_init__1(PyNs3DhcpHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::DhcpHelper();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3DhcpHelper__tp_init(PyNs3DhcpHelper *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DhcpHelper__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DhcpHelper__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}



PyObject *
_wrap_PyNs3DhcpHelper_InstallDhcpClient__0(PyNs3DhcpHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3NetDevice *netDevice;
    ns3::NetDevice *netDevice_ptr;
    const char *keywords[] = {"netDevice", NULL};
    PyNs3ApplicationContainer *py_ApplicationContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3NetDevice_Type, &netDevice)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    netDevice_ptr = (netDevice ? netDevice->obj : NULL);
    ns3::ApplicationContainer retval = self->obj->InstallDhcpClient(ns3::Ptr< ns3::NetDevice  > (netDevice_ptr));
    py_ApplicationContainer = PyObject_New(PyNs3ApplicationContainer, &PyNs3ApplicationContainer_Type);
    py_ApplicationContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_ApplicationContainer->obj = new ns3::ApplicationContainer(retval);
    PyNs3ApplicationContainer_wrapper_registry[(void *) py_ApplicationContainer->obj] = (PyObject *) py_ApplicationContainer;
    py_retval = Py_BuildValue((char *) "N", py_ApplicationContainer);
    return py_retval;
}

PyObject *
_wrap_PyNs3DhcpHelper_InstallDhcpClient__1(PyNs3DhcpHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3NetDeviceContainer *netDevices;
    const char *keywords[] = {"netDevices", NULL};
    PyNs3ApplicationContainer *py_ApplicationContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3NetDeviceContainer_Type, &netDevices)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::ApplicationContainer retval = self->obj->InstallDhcpClient(*((PyNs3NetDeviceContainer *) netDevices)->obj);
    py_ApplicationContainer = PyObject_New(PyNs3ApplicationContainer, &PyNs3ApplicationContainer_Type);
    py_ApplicationContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_ApplicationContainer->obj = new ns3::ApplicationContainer(retval);
    PyNs3ApplicationContainer_wrapper_registry[(void *) py_ApplicationContainer->obj] = (PyObject *) py_ApplicationContainer;
    py_retval = Py_BuildValue((char *) "N", py_ApplicationContainer);
    return py_retval;
}

PyObject * _wrap_PyNs3DhcpHelper_InstallDhcpClient(PyNs3DhcpHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DhcpHelper_InstallDhcpClient__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DhcpHelper_InstallDhcpClient__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3DhcpHelper_InstallDhcpServer(PyNs3DhcpHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3NetDevice *netDevice;
    ns3::NetDevice *netDevice_ptr;
    PyNs3Ipv4Address *serverAddr;
    PyNs3Ipv4Address *poolAddr;
    PyNs3Ipv4Mask *poolMask;
    PyNs3Ipv4Address *minAddr;
    PyNs3Ipv4Address *maxAddr;
    PyNs3Ipv4Address *gateway = NULL;
    const char *keywords[] = {"netDevice", "serverAddr", "poolAddr", "poolMask", "minAddr", "maxAddr", "gateway", NULL};
    PyNs3ApplicationContainer *py_ApplicationContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!O!O!O!|O!", (char **) keywords, &PyNs3NetDevice_Type, &netDevice, &PyNs3Ipv4Address_Type, &serverAddr, &PyNs3Ipv4Address_Type, &poolAddr, &PyNs3Ipv4Mask_Type, &poolMask, &PyNs3Ipv4Address_Type, &minAddr, &PyNs3Ipv4Address_Type, &maxAddr, &PyNs3Ipv4Address_Type, &gateway)) {
        return NULL;
    }
    netDevice_ptr = (netDevice ? netDevice->obj : NULL);
    ns3::ApplicationContainer retval = self->obj->InstallDhcpServer(ns3::Ptr< ns3::NetDevice  > (netDevice_ptr), *((PyNs3Ipv4Address *) serverAddr)->obj, *((PyNs3Ipv4Address *) poolAddr)->obj, *((PyNs3Ipv4Mask *) poolMask)->obj, *((PyNs3Ipv4Address *) minAddr)->obj, *((PyNs3Ipv4Address *) maxAddr)->obj, (gateway ? (*((PyNs3Ipv4Address *) gateway)->obj) : ns3::Ipv4Address()));
    py_ApplicationContainer = PyObject_New(PyNs3ApplicationContainer, &PyNs3ApplicationContainer_Type);
    py_ApplicationContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_ApplicationContainer->obj = new ns3::ApplicationContainer(retval);
    PyNs3ApplicationContainer_wrapper_registry[(void *) py_ApplicationContainer->obj] = (PyObject *) py_ApplicationContainer;
    py_retval = Py_BuildValue((char *) "N", py_ApplicationContainer);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHelper_InstallFixedAddress(PyNs3DhcpHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3NetDevice *netDevice;
    ns3::NetDevice *netDevice_ptr;
    PyNs3Ipv4Address *addr;
    PyNs3Ipv4Mask *mask;
    const char *keywords[] = {"netDevice", "addr", "mask", NULL};
    PyNs3Ipv4InterfaceContainer *py_Ipv4InterfaceContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!", (char **) keywords, &PyNs3NetDevice_Type, &netDevice, &PyNs3Ipv4Address_Type, &addr, &PyNs3Ipv4Mask_Type, &mask)) {
        return NULL;
    }
    netDevice_ptr = (netDevice ? netDevice->obj : NULL);
    ns3::Ipv4InterfaceContainer retval = self->obj->InstallFixedAddress(ns3::Ptr< ns3::NetDevice  > (netDevice_ptr), *((PyNs3Ipv4Address *) addr)->obj, *((PyNs3Ipv4Mask *) mask)->obj);
    py_Ipv4InterfaceContainer = PyObject_New(PyNs3Ipv4InterfaceContainer, &PyNs3Ipv4InterfaceContainer_Type);
    py_Ipv4InterfaceContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv4InterfaceContainer->obj = new ns3::Ipv4InterfaceContainer(retval);
    PyNs3Ipv4InterfaceContainer_wrapper_registry[(void *) py_Ipv4InterfaceContainer->obj] = (PyObject *) py_Ipv4InterfaceContainer;
    py_retval = Py_BuildValue((char *) "N", py_Ipv4InterfaceContainer);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHelper_SetClientAttribute(PyNs3DhcpHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3AttributeValue *value;
    const char *keywords[] = {"name", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3AttributeValue_Type, &value)) {
        return NULL;
    }
    self->obj->SetClientAttribute(std::string(name, name_len), *((PyNs3AttributeValue *) value)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHelper_SetServerAttribute(PyNs3DhcpHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3AttributeValue *value;
    const char *keywords[] = {"name", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3AttributeValue_Type, &value)) {
        return NULL;
    }
    self->obj->SetServerAttribute(std::string(name, name_len), *((PyNs3AttributeValue *) value)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3DhcpHelper__copy__(PyNs3DhcpHelper *self)
{

    PyNs3DhcpHelper *py_copy;
    py_copy = PyObject_New(PyNs3DhcpHelper, &PyNs3DhcpHelper_Type);
    py_copy->obj = new ns3::DhcpHelper(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3DhcpHelper_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3DhcpHelper_methods[] = {
    {(char *) "InstallDhcpClient", (PyCFunction) _wrap_PyNs3DhcpHelper_InstallDhcpClient, METH_VARARGS|METH_KEYWORDS, NULL },
    {(char *) "InstallDhcpServer", (PyCFunction) _wrap_PyNs3DhcpHelper_InstallDhcpServer, METH_VARARGS|METH_KEYWORDS, "InstallDhcpServer(netDevice, serverAddr, poolAddr, poolMask, minAddr, maxAddr, gateway)\n\ntype: netDevice: ns3::Ptr< ns3::NetDevice >\ntype: serverAddr: ns3::Ipv4Address\ntype: poolAddr: ns3::Ipv4Address\ntype: poolMask: ns3::Ipv4Mask\ntype: minAddr: ns3::Ipv4Address\ntype: maxAddr: ns3::Ipv4Address\ntype: gateway: ns3::Ipv4Address" },
    {(char *) "InstallFixedAddress", (PyCFunction) _wrap_PyNs3DhcpHelper_InstallFixedAddress, METH_VARARGS|METH_KEYWORDS, "InstallFixedAddress(netDevice, addr, mask)\n\ntype: netDevice: ns3::Ptr< ns3::NetDevice >\ntype: addr: ns3::Ipv4Address\ntype: mask: ns3::Ipv4Mask" },
    {(char *) "SetClientAttribute", (PyCFunction) _wrap_PyNs3DhcpHelper_SetClientAttribute, METH_VARARGS|METH_KEYWORDS, "SetClientAttribute(name, value)\n\ntype: name: std::string\ntype: value: ns3::AttributeValue const &" },
    {(char *) "SetServerAttribute", (PyCFunction) _wrap_PyNs3DhcpHelper_SetServerAttribute, METH_VARARGS|METH_KEYWORDS, "SetServerAttribute(name, value)\n\ntype: name: std::string\ntype: value: ns3::AttributeValue const &" },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3DhcpHelper__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3DhcpHelper__tp_dealloc(PyNs3DhcpHelper *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3DhcpHelper_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3DhcpHelper_wrapper_registry.end()) {
        PyNs3DhcpHelper_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::DhcpHelper *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3DhcpHelper_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.DhcpHelper",            /* tp_name */
    sizeof(PyNs3DhcpHelper),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DhcpHelper__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    "DhcpHelper(arg0)\nDhcpHelper()",                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DhcpHelper_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DhcpHelper__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};



std::map<void*, PyObject*> PyNs3Ping6Helper_wrapper_registry;


static int
_wrap_PyNs3Ping6Helper__tp_init__0(PyNs3Ping6Helper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Ping6Helper *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ping6Helper_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Ping6Helper(*((PyNs3Ping6Helper *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3Ping6Helper__tp_init__1(PyNs3Ping6Helper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::Ping6Helper();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3Ping6Helper__tp_init(PyNs3Ping6Helper *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Ping6Helper__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Ping6Helper__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3Ping6Helper_Install(PyNs3Ping6Helper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3NodeContainer *c;
    const char *keywords[] = {"c", NULL};
    PyNs3ApplicationContainer *py_ApplicationContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3NodeContainer_Type, &c)) {
        return NULL;
    }
    ns3::ApplicationContainer retval = self->obj->Install(*((PyNs3NodeContainer *) c)->obj);
    py_ApplicationContainer = PyObject_New(PyNs3ApplicationContainer, &PyNs3ApplicationContainer_Type);
    py_ApplicationContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_ApplicationContainer->obj = new ns3::ApplicationContainer(retval);
    PyNs3ApplicationContainer_wrapper_registry[(void *) py_ApplicationContainer->obj] = (PyObject *) py_ApplicationContainer;
    py_retval = Py_BuildValue((char *) "N", py_ApplicationContainer);
    return py_retval;
}


PyObject *
_wrap_PyNs3Ping6Helper_SetAttribute(PyNs3Ping6Helper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3AttributeValue *value;
    const char *keywords[] = {"name", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3AttributeValue_Type, &value)) {
        return NULL;
    }
    self->obj->SetAttribute(std::string(name, name_len), *((PyNs3AttributeValue *) value)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Ping6Helper_SetIfIndex(PyNs3Ping6Helper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int ifIndex;
    const char *keywords[] = {"ifIndex", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &ifIndex)) {
        return NULL;
    }
    self->obj->SetIfIndex(ifIndex);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Ping6Helper_SetLocal(PyNs3Ping6Helper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *ip;
    const char *keywords[] = {"ip", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv6Address_Type, &ip)) {
        return NULL;
    }
    self->obj->SetLocal(*((PyNs3Ipv6Address *) ip)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Ping6Helper_SetRemote(PyNs3Ping6Helper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *ip;
    const char *keywords[] = {"ip", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv6Address_Type, &ip)) {
        return NULL;
    }
    self->obj->SetRemote(*((PyNs3Ipv6Address *) ip)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Ping6Helper_SetRoutersAddress(PyNs3Ping6Helper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    std::vector< ns3::Ipv6Address > routers_value;
    const char *keywords[] = {"routers", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O&", (char **) keywords, _wrap_convert_py2c__std__vector__lt___ns3__Ipv6Address___gt__, &routers_value)) {
        return NULL;
    }
    self->obj->SetRoutersAddress(routers_value);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3Ping6Helper__copy__(PyNs3Ping6Helper *self)
{

    PyNs3Ping6Helper *py_copy;
    py_copy = PyObject_New(PyNs3Ping6Helper, &PyNs3Ping6Helper_Type);
    py_copy->obj = new ns3::Ping6Helper(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Ping6Helper_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Ping6Helper_methods[] = {
    {(char *) "Install", (PyCFunction) _wrap_PyNs3Ping6Helper_Install, METH_VARARGS|METH_KEYWORDS, "Install(c)\n\ntype: c: ns3::NodeContainer" },
    {(char *) "SetAttribute", (PyCFunction) _wrap_PyNs3Ping6Helper_SetAttribute, METH_VARARGS|METH_KEYWORDS, "SetAttribute(name, value)\n\ntype: name: std::string\ntype: value: ns3::AttributeValue const &" },
    {(char *) "SetIfIndex", (PyCFunction) _wrap_PyNs3Ping6Helper_SetIfIndex, METH_VARARGS|METH_KEYWORDS, "SetIfIndex(ifIndex)\n\ntype: ifIndex: uint32_t" },
    {(char *) "SetLocal", (PyCFunction) _wrap_PyNs3Ping6Helper_SetLocal, METH_VARARGS|METH_KEYWORDS, "SetLocal(ip)\n\ntype: ip: ns3::Ipv6Address" },
    {(char *) "SetRemote", (PyCFunction) _wrap_PyNs3Ping6Helper_SetRemote, METH_VARARGS|METH_KEYWORDS, "SetRemote(ip)\n\ntype: ip: ns3::Ipv6Address" },
    {(char *) "SetRoutersAddress", (PyCFunction) _wrap_PyNs3Ping6Helper_SetRoutersAddress, METH_VARARGS|METH_KEYWORDS, "SetRoutersAddress(routers)\n\ntype: routers: std::vector< ns3::Ipv6Address >" },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Ping6Helper__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3Ping6Helper__tp_dealloc(PyNs3Ping6Helper *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Ping6Helper_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Ping6Helper_wrapper_registry.end()) {
        PyNs3Ping6Helper_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::Ping6Helper *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3Ping6Helper_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.Ping6Helper",            /* tp_name */
    sizeof(PyNs3Ping6Helper),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Ping6Helper__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    "Ping6Helper(arg0)\nPing6Helper()",                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Ping6Helper_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Ping6Helper__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};



std::map<void*, PyObject*> PyNs3RadvdHelper_wrapper_registry;


static int
_wrap_PyNs3RadvdHelper__tp_init__0(PyNs3RadvdHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3RadvdHelper *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3RadvdHelper_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RadvdHelper(*((PyNs3RadvdHelper *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3RadvdHelper__tp_init__1(PyNs3RadvdHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RadvdHelper();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3RadvdHelper__tp_init(PyNs3RadvdHelper *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3RadvdHelper__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3RadvdHelper__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3RadvdHelper_AddAnnouncedPrefix(PyNs3RadvdHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int interface;
    PyNs3Ipv6Address *prefix;
    unsigned int prefixLength;
    const char *keywords[] = {"interface", "prefix", "prefixLength", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IO!I", (char **) keywords, &interface, &PyNs3Ipv6Address_Type, &prefix, &prefixLength)) {
        return NULL;
    }
    self->obj->AddAnnouncedPrefix(interface, *((PyNs3Ipv6Address *) prefix)->obj, prefixLength);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdHelper_ClearPrefixes(PyNs3RadvdHelper *self)
{
    PyObject *py_retval;
    
    self->obj->ClearPrefixes();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdHelper_DisableDefaultRouterForInterface(PyNs3RadvdHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int interface;
    const char *keywords[] = {"interface", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &interface)) {
        return NULL;
    }
    self->obj->DisableDefaultRouterForInterface(interface);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdHelper_EnableDefaultRouterForInterface(PyNs3RadvdHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int interface;
    const char *keywords[] = {"interface", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &interface)) {
        return NULL;
    }
    self->obj->EnableDefaultRouterForInterface(interface);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdHelper_GetRadvdInterface(PyNs3RadvdHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::RadvdInterface > retval;
    unsigned int interface;
    const char *keywords[] = {"interface", NULL};
    PyNs3RadvdInterface *py_RadvdInterface;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &interface)) {
        return NULL;
    }
    retval = self->obj->GetRadvdInterface(interface);
    if (!(const_cast<ns3::RadvdInterface *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::RadvdInterface *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_RadvdInterface = NULL;
    } else {
        py_RadvdInterface = (PyNs3RadvdInterface *) wrapper_lookup_iter->second;
        Py_INCREF(py_RadvdInterface);
    }
    
    if (py_RadvdInterface == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::RadvdInterface *> (ns3::PeekPointer (retval)))), &PyNs3RadvdInterface_Type);
        py_RadvdInterface = PyObject_New(PyNs3RadvdInterface, wrapper_type);
    
        py_RadvdInterface->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::RadvdInterface *> (ns3::PeekPointer (retval))->Ref();
        py_RadvdInterface->obj = const_cast<ns3::RadvdInterface *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_RadvdInterface->obj] = (PyObject *) py_RadvdInterface;
    }
    py_retval = Py_BuildValue((char *) "N", py_RadvdInterface);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdHelper_Install(PyNs3RadvdHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Node *node;
    ns3::Node *node_ptr;
    const char *keywords[] = {"node", NULL};
    PyNs3ApplicationContainer *py_ApplicationContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Node_Type, &node)) {
        return NULL;
    }
    node_ptr = (node ? node->obj : NULL);
    ns3::ApplicationContainer retval = self->obj->Install(ns3::Ptr< ns3::Node  > (node_ptr));
    py_ApplicationContainer = PyObject_New(PyNs3ApplicationContainer, &PyNs3ApplicationContainer_Type);
    py_ApplicationContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_ApplicationContainer->obj = new ns3::ApplicationContainer(retval);
    PyNs3ApplicationContainer_wrapper_registry[(void *) py_ApplicationContainer->obj] = (PyObject *) py_ApplicationContainer;
    py_retval = Py_BuildValue((char *) "N", py_ApplicationContainer);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdHelper_SetAttribute(PyNs3RadvdHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3AttributeValue *value;
    const char *keywords[] = {"name", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3AttributeValue_Type, &value)) {
        return NULL;
    }
    self->obj->SetAttribute(std::string(name, name_len), *((PyNs3AttributeValue *) value)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3RadvdHelper__copy__(PyNs3RadvdHelper *self)
{

    PyNs3RadvdHelper *py_copy;
    py_copy = PyObject_New(PyNs3RadvdHelper, &PyNs3RadvdHelper_Type);
    py_copy->obj = new ns3::RadvdHelper(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3RadvdHelper_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3RadvdHelper_methods[] = {
    {(char *) "AddAnnouncedPrefix", (PyCFunction) _wrap_PyNs3RadvdHelper_AddAnnouncedPrefix, METH_VARARGS|METH_KEYWORDS, "AddAnnouncedPrefix(interface, prefix, prefixLength)\n\ntype: interface: uint32_t\ntype: prefix: ns3::Ipv6Address\ntype: prefixLength: uint32_t" },
    {(char *) "ClearPrefixes", (PyCFunction) _wrap_PyNs3RadvdHelper_ClearPrefixes, METH_NOARGS, "ClearPrefixes()\n\n" },
    {(char *) "DisableDefaultRouterForInterface", (PyCFunction) _wrap_PyNs3RadvdHelper_DisableDefaultRouterForInterface, METH_VARARGS|METH_KEYWORDS, "DisableDefaultRouterForInterface(interface)\n\ntype: interface: uint32_t" },
    {(char *) "EnableDefaultRouterForInterface", (PyCFunction) _wrap_PyNs3RadvdHelper_EnableDefaultRouterForInterface, METH_VARARGS|METH_KEYWORDS, "EnableDefaultRouterForInterface(interface)\n\ntype: interface: uint32_t" },
    {(char *) "GetRadvdInterface", (PyCFunction) _wrap_PyNs3RadvdHelper_GetRadvdInterface, METH_VARARGS|METH_KEYWORDS, "GetRadvdInterface(interface)\n\ntype: interface: uint32_t" },
    {(char *) "Install", (PyCFunction) _wrap_PyNs3RadvdHelper_Install, METH_VARARGS|METH_KEYWORDS, "Install(node)\n\ntype: node: ns3::Ptr< ns3::Node >" },
    {(char *) "SetAttribute", (PyCFunction) _wrap_PyNs3RadvdHelper_SetAttribute, METH_VARARGS|METH_KEYWORDS, "SetAttribute(name, value)\n\ntype: name: std::string\ntype: value: ns3::AttributeValue const &" },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3RadvdHelper__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3RadvdHelper__tp_dealloc(PyNs3RadvdHelper *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3RadvdHelper_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3RadvdHelper_wrapper_registry.end()) {
        PyNs3RadvdHelper_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::RadvdHelper *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3RadvdHelper_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.RadvdHelper",            /* tp_name */
    sizeof(PyNs3RadvdHelper),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3RadvdHelper__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    "RadvdHelper(arg0)\nRadvdHelper()",                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3RadvdHelper_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3RadvdHelper__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};



std::map<void*, PyObject*> PyNs3V4PingHelper_wrapper_registry;


static int
_wrap_PyNs3V4PingHelper__tp_init__0(PyNs3V4PingHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3V4PingHelper *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3V4PingHelper_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::V4PingHelper(*((PyNs3V4PingHelper *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3V4PingHelper__tp_init__1(PyNs3V4PingHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Ipv4Address *remote;
    const char *keywords[] = {"remote", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv4Address_Type, &remote)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::V4PingHelper(*((PyNs3Ipv4Address *) remote)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3V4PingHelper__tp_init(PyNs3V4PingHelper *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3V4PingHelper__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3V4PingHelper__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}



PyObject *
_wrap_PyNs3V4PingHelper_Install__0(PyNs3V4PingHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3NodeContainer *nodes;
    const char *keywords[] = {"nodes", NULL};
    PyNs3ApplicationContainer *py_ApplicationContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3NodeContainer_Type, &nodes)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::ApplicationContainer retval = self->obj->Install(*((PyNs3NodeContainer *) nodes)->obj);
    py_ApplicationContainer = PyObject_New(PyNs3ApplicationContainer, &PyNs3ApplicationContainer_Type);
    py_ApplicationContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_ApplicationContainer->obj = new ns3::ApplicationContainer(retval);
    PyNs3ApplicationContainer_wrapper_registry[(void *) py_ApplicationContainer->obj] = (PyObject *) py_ApplicationContainer;
    py_retval = Py_BuildValue((char *) "N", py_ApplicationContainer);
    return py_retval;
}

PyObject *
_wrap_PyNs3V4PingHelper_Install__1(PyNs3V4PingHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    PyNs3Node *node;
    ns3::Node *node_ptr;
    const char *keywords[] = {"node", NULL};
    PyNs3ApplicationContainer *py_ApplicationContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Node_Type, &node)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    node_ptr = (node ? node->obj : NULL);
    ns3::ApplicationContainer retval = self->obj->Install(ns3::Ptr< ns3::Node  > (node_ptr));
    py_ApplicationContainer = PyObject_New(PyNs3ApplicationContainer, &PyNs3ApplicationContainer_Type);
    py_ApplicationContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_ApplicationContainer->obj = new ns3::ApplicationContainer(retval);
    PyNs3ApplicationContainer_wrapper_registry[(void *) py_ApplicationContainer->obj] = (PyObject *) py_ApplicationContainer;
    py_retval = Py_BuildValue((char *) "N", py_ApplicationContainer);
    return py_retval;
}

PyObject *
_wrap_PyNs3V4PingHelper_Install__2(PyNs3V4PingHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyObject *py_retval;
    const char *nodeName;
    Py_ssize_t nodeName_len;
    const char *keywords[] = {"nodeName", NULL};
    PyNs3ApplicationContainer *py_ApplicationContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#", (char **) keywords, &nodeName, &nodeName_len)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return NULL;
    }
    ns3::ApplicationContainer retval = self->obj->Install(std::string(nodeName, nodeName_len));
    py_ApplicationContainer = PyObject_New(PyNs3ApplicationContainer, &PyNs3ApplicationContainer_Type);
    py_ApplicationContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_ApplicationContainer->obj = new ns3::ApplicationContainer(retval);
    PyNs3ApplicationContainer_wrapper_registry[(void *) py_ApplicationContainer->obj] = (PyObject *) py_ApplicationContainer;
    py_retval = Py_BuildValue((char *) "N", py_ApplicationContainer);
    return py_retval;
}

PyObject * _wrap_PyNs3V4PingHelper_Install(PyNs3V4PingHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject * retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3V4PingHelper_Install__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3V4PingHelper_Install__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3V4PingHelper_Install__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    error_list = PyList_New(3);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return NULL;
}


PyObject *
_wrap_PyNs3V4PingHelper_SetAttribute(PyNs3V4PingHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *name;
    Py_ssize_t name_len;
    PyNs3AttributeValue *value;
    const char *keywords[] = {"name", "value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &name, &name_len, &PyNs3AttributeValue_Type, &value)) {
        return NULL;
    }
    self->obj->SetAttribute(std::string(name, name_len), *((PyNs3AttributeValue *) value)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3V4PingHelper__copy__(PyNs3V4PingHelper *self)
{

    PyNs3V4PingHelper *py_copy;
    py_copy = PyObject_New(PyNs3V4PingHelper, &PyNs3V4PingHelper_Type);
    py_copy->obj = new ns3::V4PingHelper(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3V4PingHelper_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3V4PingHelper_methods[] = {
    {(char *) "Install", (PyCFunction) _wrap_PyNs3V4PingHelper_Install, METH_VARARGS|METH_KEYWORDS, NULL },
    {(char *) "SetAttribute", (PyCFunction) _wrap_PyNs3V4PingHelper_SetAttribute, METH_VARARGS|METH_KEYWORDS, "SetAttribute(name, value)\n\ntype: name: std::string\ntype: value: ns3::AttributeValue const &" },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3V4PingHelper__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3V4PingHelper__tp_dealloc(PyNs3V4PingHelper *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3V4PingHelper_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3V4PingHelper_wrapper_registry.end()) {
        PyNs3V4PingHelper_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::V4PingHelper *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3V4PingHelper_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.V4PingHelper",            /* tp_name */
    sizeof(PyNs3V4PingHelper),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3V4PingHelper__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    "V4PingHelper(remote)\nV4PingHelper(arg0)",                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3V4PingHelper_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3V4PingHelper__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




pybindgen::TypeMap PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____typeid_map;



static int
_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init__0(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::SimpleRefCount< ns3::RadvdInterface, ns3::empty, ns3::DefaultDeleter<ns3::RadvdInterface> >();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init__1(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type, &o)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::SimpleRefCount< ns3::RadvdInterface, ns3::empty, ns3::DefaultDeleter<ns3::RadvdInterface> >(*((PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *) o)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____copy__(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *self)
{

    PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *py_copy;
    py_copy = PyObject_New(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__, &PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type);
    
    py_copy->obj = new ns3::SimpleRefCount< ns3::RadvdInterface, ns3::empty, ns3::DefaultDeleter<ns3::RadvdInterface> >(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___methods[] = {
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_dealloc(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__ *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::SimpleRefCount< ns3::RadvdInterface, ns3::empty, ns3::DefaultDeleter<ns3::RadvdInterface> > *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__",            /* tp_name */
    sizeof(PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    "SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__(o)\nSimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__()",                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




pybindgen::TypeMap PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____typeid_map;



static int
_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init__0(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::SimpleRefCount< ns3::RadvdPrefix, ns3::empty, ns3::DefaultDeleter<ns3::RadvdPrefix> >();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init__1(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *o;
    const char *keywords[] = {"o", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type, &o)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::SimpleRefCount< ns3::RadvdPrefix, ns3::empty, ns3::DefaultDeleter<ns3::RadvdPrefix> >(*((PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *) o)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


static PyObject*
_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____copy__(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *self)
{

    PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *py_copy;
    py_copy = PyObject_New(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__, &PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type);
    
    py_copy->obj = new ns3::SimpleRefCount< ns3::RadvdPrefix, ns3::empty, ns3::DefaultDeleter<ns3::RadvdPrefix> >(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___methods[] = {
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_dealloc(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__ *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::SimpleRefCount< ns3::RadvdPrefix, ns3::empty, ns3::DefaultDeleter<ns3::RadvdPrefix> > *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__",            /* tp_name */
    sizeof(PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    "SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__(o)\nSimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__()",                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3DhcpClient__PythonHelper::_wrap_NotifyNewAggregate(PyNs3DhcpClient *self)
{
    PyObject *py_retval;
    PyNs3DhcpClient__PythonHelper *helper = dynamic_cast< PyNs3DhcpClient__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3DhcpClient__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3DhcpClient *self)
{
    PyObject *py_retval;
    PyNs3DhcpClient__PythonHelper *helper = dynamic_cast< PyNs3DhcpClient__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3DhcpClient__PythonHelper::_wrap_DoInitialize(PyNs3DhcpClient *self)
{
    PyObject *py_retval;
    PyNs3DhcpClient__PythonHelper *helper = dynamic_cast< PyNs3DhcpClient__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoInitialize of class Application is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoInitialize__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3DhcpClient__PythonHelper::_wrap_DoDispose(PyNs3DhcpClient *self)
{
    PyObject *py_retval;
    PyNs3DhcpClient__PythonHelper *helper = dynamic_cast< PyNs3DhcpClient__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class DhcpClient is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3DhcpClient__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DhcpClient *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::DhcpClient::DoDispose();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = (ns3::DhcpClient*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3DhcpClient__PythonHelper::StartApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DhcpClient *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartApplication"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = (ns3::DhcpClient*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3DhcpClient__PythonHelper::StopApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DhcpClient *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StopApplication"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = (ns3::DhcpClient*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StopApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DhcpClient* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3DhcpClient__PythonHelper::DoInitialize()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Application *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoInitialize"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Application::DoInitialize();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Application* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = (ns3::Application*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoInitialize", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3DhcpClient__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3DhcpClient__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3DhcpClient__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3DhcpClient__tp_init__0(PyNs3DhcpClient *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3DhcpClient *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DhcpClient_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3DhcpClient_Type)
    {
        self->obj = new PyNs3DhcpClient__PythonHelper(*((PyNs3DhcpClient *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3DhcpClient__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::DhcpClient(*((PyNs3DhcpClient *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3DhcpClient__tp_init__1(PyNs3DhcpClient *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3DhcpClient_Type)
    {
        self->obj = new PyNs3DhcpClient__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3DhcpClient__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::DhcpClient();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3DhcpClient__tp_init__2(PyNs3DhcpClient *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3NetDevice *netDevice;
    ns3::NetDevice *netDevice_ptr;
    const char *keywords[] = {"netDevice", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3NetDevice_Type, &netDevice)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    netDevice_ptr = (netDevice ? netDevice->obj : NULL);
    if (Py_TYPE(self) != &PyNs3DhcpClient_Type)
    {
        self->obj = new PyNs3DhcpClient__PythonHelper(ns3::Ptr< ns3::NetDevice  > (netDevice_ptr));
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3DhcpClient__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::DhcpClient(ns3::Ptr< ns3::NetDevice  > (netDevice_ptr));
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3DhcpClient__tp_init(PyNs3DhcpClient *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3DhcpClient__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DhcpClient__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3DhcpClient__tp_init__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    error_list = PyList_New(3);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3DhcpClient_AssignStreams(PyNs3DhcpClient *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int64_t retval;
    int64_t stream;
    const char *keywords[] = {"stream", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "L", (char **) keywords, &stream)) {
        return NULL;
    }
    retval = self->obj->AssignStreams(stream);
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpClient_GetDhcpClientNetDevice(PyNs3DhcpClient *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::NetDevice > retval;
    PyNs3NetDevice *py_NetDevice;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->GetDhcpClientNetDevice();
    if (!(const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_NetDevice = NULL;
    } else {
        py_NetDevice = (PyNs3NetDevice *) wrapper_lookup_iter->second;
        Py_INCREF(py_NetDevice);
    }
    
    if (py_NetDevice == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid((*const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval)))), &PyNs3NetDevice_Type);
        py_NetDevice = PyObject_GC_New(PyNs3NetDevice, wrapper_type);
        py_NetDevice->inst_dict = NULL;
    
        py_NetDevice->inst_dict = NULL;
        py_NetDevice->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval))->Ref();
        py_NetDevice->obj = const_cast<ns3::NetDevice *> (ns3::PeekPointer (retval));
        PyNs3ObjectBase_wrapper_registry[(void *) py_NetDevice->obj] = (PyObject *) py_NetDevice;
    }
    py_retval = Py_BuildValue((char *) "N", py_NetDevice);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpClient_GetDhcpServer(PyNs3DhcpClient *self)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *py_Ipv4Address;
    
    ns3::Ipv4Address retval = self->obj->GetDhcpServer();
    py_Ipv4Address = PyObject_New(PyNs3Ipv4Address, &PyNs3Ipv4Address_Type);
    py_Ipv4Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv4Address->obj = new ns3::Ipv4Address(retval);
    PyNs3Ipv4Address_wrapper_registry[(void *) py_Ipv4Address->obj] = (PyObject *) py_Ipv4Address;
    py_retval = Py_BuildValue((char *) "N", py_Ipv4Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpClient_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::DhcpClient::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpClient_SetDhcpClientNetDevice(PyNs3DhcpClient *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3NetDevice *netDevice;
    ns3::NetDevice *netDevice_ptr;
    const char *keywords[] = {"netDevice", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3NetDevice_Type, &netDevice)) {
        return NULL;
    }
    netDevice_ptr = (netDevice ? netDevice->obj : NULL);
    self->obj->SetDhcpClientNetDevice(ns3::Ptr< ns3::NetDevice  > (netDevice_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3DhcpClient__copy__(PyNs3DhcpClient *self)
{

    PyNs3DhcpClient *py_copy;
    py_copy = PyObject_GC_New(PyNs3DhcpClient, &PyNs3DhcpClient_Type);
    py_copy->inst_dict = NULL;
    
    py_copy->obj = new ns3::DhcpClient(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3DhcpClient_methods[] = {
    {(char *) "AssignStreams", (PyCFunction) _wrap_PyNs3DhcpClient_AssignStreams, METH_VARARGS|METH_KEYWORDS, "AssignStreams(stream)\n\ntype: stream: int64_t" },
    {(char *) "GetDhcpClientNetDevice", (PyCFunction) _wrap_PyNs3DhcpClient_GetDhcpClientNetDevice, METH_NOARGS, "GetDhcpClientNetDevice()\n\n" },
    {(char *) "GetDhcpServer", (PyCFunction) _wrap_PyNs3DhcpClient_GetDhcpServer, METH_NOARGS, "GetDhcpServer()\n\n" },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3DhcpClient_GetTypeId, METH_NOARGS|METH_STATIC, "GetTypeId()\n\n" },
    {(char *) "SetDhcpClientNetDevice", (PyCFunction) _wrap_PyNs3DhcpClient_SetDhcpClientNetDevice, METH_VARARGS|METH_KEYWORDS, "SetDhcpClientNetDevice(netDevice)\n\ntype: netDevice: ns3::Ptr< ns3::NetDevice >" },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3DhcpClient__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3DhcpClient__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "DoInitialize", (PyCFunction) PyNs3DhcpClient__PythonHelper::_wrap_DoInitialize, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3DhcpClient__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3DhcpClient__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3DhcpClient__tp_clear(PyNs3DhcpClient *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::DhcpClient *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3DhcpClient__tp_traverse(PyNs3DhcpClient *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3DhcpClient__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3DhcpClient__tp_dealloc(PyNs3DhcpClient *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3DhcpClient__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3DhcpClient_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.DhcpClient",            /* tp_name */
    sizeof(PyNs3DhcpClient),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DhcpClient__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    "DhcpClient(netDevice)\nDhcpClient(arg0)\nDhcpClient()",                        /* Documentation string */
    (traverseproc)PyNs3DhcpClient__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3DhcpClient__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DhcpClient_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3DhcpClient, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DhcpClient__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};





static int
_wrap_PyNs3DhcpHeader__tp_init__0(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3DhcpHeader *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DhcpHeader_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::DhcpHeader(*((PyNs3DhcpHeader *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3DhcpHeader__tp_init__1(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::DhcpHeader();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3DhcpHeader__tp_init(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DhcpHeader__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DhcpHeader__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetChaddr(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    PyNs3Address *py_Address;
    
    ns3::Address retval = self->obj->GetChaddr();
    py_Address = PyObject_New(PyNs3Address, &PyNs3Address_Type);
    py_Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Address->obj = new ns3::Address(retval);
    PyNs3Address_wrapper_registry[(void *) py_Address->obj] = (PyObject *) py_Address;
    py_retval = Py_BuildValue((char *) "N", py_Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetDhcps(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *py_Ipv4Address;
    
    ns3::Ipv4Address retval = self->obj->GetDhcps();
    py_Ipv4Address = PyObject_New(PyNs3Ipv4Address, &PyNs3Ipv4Address_Type);
    py_Ipv4Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv4Address->obj = new ns3::Ipv4Address(retval);
    PyNs3Ipv4Address_wrapper_registry[(void *) py_Ipv4Address->obj] = (PyObject *) py_Ipv4Address;
    py_retval = Py_BuildValue((char *) "N", py_Ipv4Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetLease(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetLease();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetMask(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetMask();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetRebind(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetRebind();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetRenew(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetRenew();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetReq(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *py_Ipv4Address;
    
    ns3::Ipv4Address retval = self->obj->GetReq();
    py_Ipv4Address = PyObject_New(PyNs3Ipv4Address, &PyNs3Ipv4Address_Type);
    py_Ipv4Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv4Address->obj = new ns3::Ipv4Address(retval);
    PyNs3Ipv4Address_wrapper_registry[(void *) py_Ipv4Address->obj] = (PyObject *) py_Ipv4Address;
    py_retval = Py_BuildValue((char *) "N", py_Ipv4Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetRouter(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *py_Ipv4Address;
    
    ns3::Ipv4Address retval = self->obj->GetRouter();
    py_Ipv4Address = PyObject_New(PyNs3Ipv4Address, &PyNs3Ipv4Address_Type);
    py_Ipv4Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv4Address->obj = new ns3::Ipv4Address(retval);
    PyNs3Ipv4Address_wrapper_registry[(void *) py_Ipv4Address->obj] = (PyObject *) py_Ipv4Address;
    py_retval = Py_BuildValue((char *) "N", py_Ipv4Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetTran(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetTran();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetType(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetType();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::DhcpHeader::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_GetYiaddr(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *py_Ipv4Address;
    
    ns3::Ipv4Address retval = self->obj->GetYiaddr();
    py_Ipv4Address = PyObject_New(PyNs3Ipv4Address, &PyNs3Ipv4Address_Type);
    py_Ipv4Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv4Address->obj = new ns3::Ipv4Address(retval);
    PyNs3Ipv4Address_wrapper_registry[(void *) py_Ipv4Address->obj] = (PyObject *) py_Ipv4Address;
    py_retval = Py_BuildValue((char *) "N", py_Ipv4Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_ResetOpt(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    
    self->obj->ResetOpt();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetChaddr(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *addr;
    ns3::Address addr2;
    const char *keywords[] = {"addr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &addr)) {
        return NULL;
    }
    if (PyObject_IsInstance(addr, (PyObject*) &PyNs3Address_Type)) {
        addr2 = *((PyNs3Address *) addr)->obj;
    } else if (PyObject_IsInstance(addr, (PyObject*) &PyNs3Inet6SocketAddress_Type)) {
        addr2 = *((PyNs3Inet6SocketAddress *) addr)->obj;
    } else if (PyObject_IsInstance(addr, (PyObject*) &PyNs3InetSocketAddress_Type)) {
        addr2 = *((PyNs3InetSocketAddress *) addr)->obj;
    } else if (PyObject_IsInstance(addr, (PyObject*) &PyNs3Ipv4Address_Type)) {
        addr2 = *((PyNs3Ipv4Address *) addr)->obj;
    } else if (PyObject_IsInstance(addr, (PyObject*) &PyNs3Ipv6Address_Type)) {
        addr2 = *((PyNs3Ipv6Address *) addr)->obj;
    } else if (PyObject_IsInstance(addr, (PyObject*) &PyNs3Mac48Address_Type)) {
        addr2 = *((PyNs3Mac48Address *) addr)->obj;
    } else if (PyObject_IsInstance(addr, (PyObject*) &PyNs3Mac8Address_Type)) {
        addr2 = *((PyNs3Mac8Address *) addr)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Inet6SocketAddress, InetSocketAddress, Ipv4Address, Ipv6Address, Mac48Address, Mac8Address), not %s", Py_TYPE(addr)->tp_name);
        return NULL;
    }
    self->obj->SetChaddr(addr2);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetDhcps(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *addr;
    const char *keywords[] = {"addr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv4Address_Type, &addr)) {
        return NULL;
    }
    self->obj->SetDhcps(*((PyNs3Ipv4Address *) addr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetHWType(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int htype;
    int hlen;
    const char *keywords[] = {"htype", "hlen", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "ii", (char **) keywords, &htype, &hlen)) {
        return NULL;
    }
    if (htype > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    if (hlen > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetHWType(htype, hlen);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetLease(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int time;
    const char *keywords[] = {"time", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &time)) {
        return NULL;
    }
    self->obj->SetLease(time);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetMask(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int addr;
    const char *keywords[] = {"addr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &addr)) {
        return NULL;
    }
    self->obj->SetMask(addr);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetRebind(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int time;
    const char *keywords[] = {"time", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &time)) {
        return NULL;
    }
    self->obj->SetRebind(time);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetRenew(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int time;
    const char *keywords[] = {"time", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &time)) {
        return NULL;
    }
    self->obj->SetRenew(time);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetReq(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *addr;
    const char *keywords[] = {"addr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv4Address_Type, &addr)) {
        return NULL;
    }
    self->obj->SetReq(*((PyNs3Ipv4Address *) addr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetRouter(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *addr;
    const char *keywords[] = {"addr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv4Address_Type, &addr)) {
        return NULL;
    }
    self->obj->SetRouter(*((PyNs3Ipv4Address *) addr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetTime(PyNs3DhcpHeader *self)
{
    PyObject *py_retval;
    
    self->obj->SetTime();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetTran(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int tran;
    const char *keywords[] = {"tran", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &tran)) {
        return NULL;
    }
    self->obj->SetTran(tran);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetType(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int type;
    const char *keywords[] = {"type", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &type)) {
        return NULL;
    }
    if (type > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetType(type);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpHeader_SetYiaddr(PyNs3DhcpHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Ipv4Address *addr;
    const char *keywords[] = {"addr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv4Address_Type, &addr)) {
        return NULL;
    }
    self->obj->SetYiaddr(*((PyNs3Ipv4Address *) addr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3DhcpHeader__copy__(PyNs3DhcpHeader *self)
{

    PyNs3DhcpHeader *py_copy;
    py_copy = PyObject_GC_New(PyNs3DhcpHeader, &PyNs3DhcpHeader_Type);
    py_copy->inst_dict = NULL;
    py_copy->obj = new ns3::DhcpHeader(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3DhcpHeader_methods[] = {
    {(char *) "GetChaddr", (PyCFunction) _wrap_PyNs3DhcpHeader_GetChaddr, METH_NOARGS, "GetChaddr()\n\n" },
    {(char *) "GetDhcps", (PyCFunction) _wrap_PyNs3DhcpHeader_GetDhcps, METH_NOARGS, "GetDhcps()\n\n" },
    {(char *) "GetLease", (PyCFunction) _wrap_PyNs3DhcpHeader_GetLease, METH_NOARGS, "GetLease()\n\n" },
    {(char *) "GetMask", (PyCFunction) _wrap_PyNs3DhcpHeader_GetMask, METH_NOARGS, "GetMask()\n\n" },
    {(char *) "GetRebind", (PyCFunction) _wrap_PyNs3DhcpHeader_GetRebind, METH_NOARGS, "GetRebind()\n\n" },
    {(char *) "GetRenew", (PyCFunction) _wrap_PyNs3DhcpHeader_GetRenew, METH_NOARGS, "GetRenew()\n\n" },
    {(char *) "GetReq", (PyCFunction) _wrap_PyNs3DhcpHeader_GetReq, METH_NOARGS, "GetReq()\n\n" },
    {(char *) "GetRouter", (PyCFunction) _wrap_PyNs3DhcpHeader_GetRouter, METH_NOARGS, "GetRouter()\n\n" },
    {(char *) "GetTran", (PyCFunction) _wrap_PyNs3DhcpHeader_GetTran, METH_NOARGS, "GetTran()\n\n" },
    {(char *) "GetType", (PyCFunction) _wrap_PyNs3DhcpHeader_GetType, METH_NOARGS, "GetType()\n\n" },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3DhcpHeader_GetTypeId, METH_NOARGS|METH_STATIC, "GetTypeId()\n\n" },
    {(char *) "GetYiaddr", (PyCFunction) _wrap_PyNs3DhcpHeader_GetYiaddr, METH_NOARGS, "GetYiaddr()\n\n" },
    {(char *) "ResetOpt", (PyCFunction) _wrap_PyNs3DhcpHeader_ResetOpt, METH_NOARGS, "ResetOpt()\n\n" },
    {(char *) "SetChaddr", (PyCFunction) _wrap_PyNs3DhcpHeader_SetChaddr, METH_VARARGS|METH_KEYWORDS, "SetChaddr(addr)\n\ntype: addr: ns3::Address" },
    {(char *) "SetDhcps", (PyCFunction) _wrap_PyNs3DhcpHeader_SetDhcps, METH_VARARGS|METH_KEYWORDS, "SetDhcps(addr)\n\ntype: addr: ns3::Ipv4Address" },
    {(char *) "SetHWType", (PyCFunction) _wrap_PyNs3DhcpHeader_SetHWType, METH_VARARGS|METH_KEYWORDS, "SetHWType(htype, hlen)\n\ntype: htype: uint8_t\ntype: hlen: uint8_t" },
    {(char *) "SetLease", (PyCFunction) _wrap_PyNs3DhcpHeader_SetLease, METH_VARARGS|METH_KEYWORDS, "SetLease(time)\n\ntype: time: uint32_t" },
    {(char *) "SetMask", (PyCFunction) _wrap_PyNs3DhcpHeader_SetMask, METH_VARARGS|METH_KEYWORDS, "SetMask(addr)\n\ntype: addr: uint32_t" },
    {(char *) "SetRebind", (PyCFunction) _wrap_PyNs3DhcpHeader_SetRebind, METH_VARARGS|METH_KEYWORDS, "SetRebind(time)\n\ntype: time: uint32_t" },
    {(char *) "SetRenew", (PyCFunction) _wrap_PyNs3DhcpHeader_SetRenew, METH_VARARGS|METH_KEYWORDS, "SetRenew(time)\n\ntype: time: uint32_t" },
    {(char *) "SetReq", (PyCFunction) _wrap_PyNs3DhcpHeader_SetReq, METH_VARARGS|METH_KEYWORDS, "SetReq(addr)\n\ntype: addr: ns3::Ipv4Address" },
    {(char *) "SetRouter", (PyCFunction) _wrap_PyNs3DhcpHeader_SetRouter, METH_VARARGS|METH_KEYWORDS, "SetRouter(addr)\n\ntype: addr: ns3::Ipv4Address" },
    {(char *) "SetTime", (PyCFunction) _wrap_PyNs3DhcpHeader_SetTime, METH_NOARGS, "SetTime()\n\n" },
    {(char *) "SetTran", (PyCFunction) _wrap_PyNs3DhcpHeader_SetTran, METH_VARARGS|METH_KEYWORDS, "SetTran(tran)\n\ntype: tran: uint32_t" },
    {(char *) "SetType", (PyCFunction) _wrap_PyNs3DhcpHeader_SetType, METH_VARARGS|METH_KEYWORDS, "SetType(type)\n\ntype: type: uint8_t" },
    {(char *) "SetYiaddr", (PyCFunction) _wrap_PyNs3DhcpHeader_SetYiaddr, METH_VARARGS|METH_KEYWORDS, "SetYiaddr(addr)\n\ntype: addr: ns3::Ipv4Address" },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3DhcpHeader__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3DhcpHeader__tp_clear(PyNs3DhcpHeader *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::DhcpHeader *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3DhcpHeader__tp_traverse(PyNs3DhcpHeader *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3DhcpHeader__tp_dealloc(PyNs3DhcpHeader *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3DhcpHeader__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3DhcpHeader_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.DhcpHeader",            /* tp_name */
    sizeof(PyNs3DhcpHeader),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DhcpHeader__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    "DhcpHeader(arg0)\nDhcpHeader()",                        /* Documentation string */
    (traverseproc)PyNs3DhcpHeader__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3DhcpHeader__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DhcpHeader_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3DhcpHeader, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DhcpHeader__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3DhcpServer__PythonHelper::_wrap_NotifyNewAggregate(PyNs3DhcpServer *self)
{
    PyObject *py_retval;
    PyNs3DhcpServer__PythonHelper *helper = dynamic_cast< PyNs3DhcpServer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3DhcpServer__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3DhcpServer *self)
{
    PyObject *py_retval;
    PyNs3DhcpServer__PythonHelper *helper = dynamic_cast< PyNs3DhcpServer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3DhcpServer__PythonHelper::_wrap_DoInitialize(PyNs3DhcpServer *self)
{
    PyObject *py_retval;
    PyNs3DhcpServer__PythonHelper *helper = dynamic_cast< PyNs3DhcpServer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoInitialize of class Application is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoInitialize__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3DhcpServer__PythonHelper::_wrap_DoDispose(PyNs3DhcpServer *self)
{
    PyObject *py_retval;
    PyNs3DhcpServer__PythonHelper *helper = dynamic_cast< PyNs3DhcpServer__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class DhcpServer is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3DhcpServer__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DhcpServer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::DhcpServer::DoDispose();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = (ns3::DhcpServer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3DhcpServer__PythonHelper::StartApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DhcpServer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartApplication"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = (ns3::DhcpServer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3DhcpServer__PythonHelper::StopApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::DhcpServer *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StopApplication"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj;
    reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = (ns3::DhcpServer*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StopApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3DhcpServer* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3DhcpServer__PythonHelper::DoInitialize()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Application *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoInitialize"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Application::DoInitialize();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Application* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = (ns3::Application*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoInitialize", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3DhcpServer__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3DhcpServer__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3DhcpServer__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3DhcpServer__tp_init__0(PyNs3DhcpServer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3DhcpServer *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3DhcpServer_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3DhcpServer_Type)
    {
        self->obj = new PyNs3DhcpServer__PythonHelper(*((PyNs3DhcpServer *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3DhcpServer__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::DhcpServer(*((PyNs3DhcpServer *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3DhcpServer__tp_init__1(PyNs3DhcpServer *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3DhcpServer_Type)
    {
        self->obj = new PyNs3DhcpServer__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3DhcpServer__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::DhcpServer();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3DhcpServer__tp_init(PyNs3DhcpServer *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3DhcpServer__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3DhcpServer__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3DhcpServer_AddStaticDhcpEntry(PyNs3DhcpServer *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *chaddr;
    ns3::Address chaddr2;
    PyNs3Ipv4Address *addr;
    const char *keywords[] = {"chaddr", "addr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "OO!", (char **) keywords, &chaddr, &PyNs3Ipv4Address_Type, &addr)) {
        return NULL;
    }
    if (PyObject_IsInstance(chaddr, (PyObject*) &PyNs3Address_Type)) {
        chaddr2 = *((PyNs3Address *) chaddr)->obj;
    } else if (PyObject_IsInstance(chaddr, (PyObject*) &PyNs3Inet6SocketAddress_Type)) {
        chaddr2 = *((PyNs3Inet6SocketAddress *) chaddr)->obj;
    } else if (PyObject_IsInstance(chaddr, (PyObject*) &PyNs3InetSocketAddress_Type)) {
        chaddr2 = *((PyNs3InetSocketAddress *) chaddr)->obj;
    } else if (PyObject_IsInstance(chaddr, (PyObject*) &PyNs3Ipv4Address_Type)) {
        chaddr2 = *((PyNs3Ipv4Address *) chaddr)->obj;
    } else if (PyObject_IsInstance(chaddr, (PyObject*) &PyNs3Ipv6Address_Type)) {
        chaddr2 = *((PyNs3Ipv6Address *) chaddr)->obj;
    } else if (PyObject_IsInstance(chaddr, (PyObject*) &PyNs3Mac48Address_Type)) {
        chaddr2 = *((PyNs3Mac48Address *) chaddr)->obj;
    } else if (PyObject_IsInstance(chaddr, (PyObject*) &PyNs3Mac8Address_Type)) {
        chaddr2 = *((PyNs3Mac8Address *) chaddr)->obj;
    } else {
    
        PyErr_Format(PyExc_TypeError, "parameter must an instance of one of the types (Address, Inet6SocketAddress, InetSocketAddress, Ipv4Address, Ipv6Address, Mac48Address, Mac8Address), not %s", Py_TYPE(chaddr)->tp_name);
        return NULL;
    }
    self->obj->AddStaticDhcpEntry(chaddr2, *((PyNs3Ipv4Address *) addr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3DhcpServer_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::DhcpServer::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


static PyObject*
_wrap_PyNs3DhcpServer__copy__(PyNs3DhcpServer *self)
{

    PyNs3DhcpServer *py_copy;
    py_copy = PyObject_GC_New(PyNs3DhcpServer, &PyNs3DhcpServer_Type);
    py_copy->inst_dict = NULL;
    
    py_copy->obj = new ns3::DhcpServer(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3DhcpServer_methods[] = {
    {(char *) "AddStaticDhcpEntry", (PyCFunction) _wrap_PyNs3DhcpServer_AddStaticDhcpEntry, METH_VARARGS|METH_KEYWORDS, "AddStaticDhcpEntry(chaddr, addr)\n\ntype: chaddr: ns3::Address\ntype: addr: ns3::Ipv4Address" },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3DhcpServer_GetTypeId, METH_NOARGS|METH_STATIC, "GetTypeId()\n\n" },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3DhcpServer__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3DhcpServer__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "DoInitialize", (PyCFunction) PyNs3DhcpServer__PythonHelper::_wrap_DoInitialize, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3DhcpServer__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3DhcpServer__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3DhcpServer__tp_clear(PyNs3DhcpServer *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::DhcpServer *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3DhcpServer__tp_traverse(PyNs3DhcpServer *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3DhcpServer__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3DhcpServer__tp_dealloc(PyNs3DhcpServer *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3DhcpServer__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3DhcpServer_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.DhcpServer",            /* tp_name */
    sizeof(PyNs3DhcpServer),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3DhcpServer__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    "DhcpServer(arg0)\nDhcpServer()",                        /* Documentation string */
    (traverseproc)PyNs3DhcpServer__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3DhcpServer__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3DhcpServer_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3DhcpServer, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3DhcpServer__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3Ping6__PythonHelper::_wrap_NotifyNewAggregate(PyNs3Ping6 *self)
{
    PyObject *py_retval;
    PyNs3Ping6__PythonHelper *helper = dynamic_cast< PyNs3Ping6__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3Ping6__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3Ping6 *self)
{
    PyObject *py_retval;
    PyNs3Ping6__PythonHelper *helper = dynamic_cast< PyNs3Ping6__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3Ping6__PythonHelper::_wrap_DoInitialize(PyNs3Ping6 *self)
{
    PyObject *py_retval;
    PyNs3Ping6__PythonHelper *helper = dynamic_cast< PyNs3Ping6__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoInitialize of class Application is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoInitialize__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3Ping6__PythonHelper::_wrap_DoDispose(PyNs3Ping6 *self)
{
    PyObject *py_retval;
    PyNs3Ping6__PythonHelper *helper = dynamic_cast< PyNs3Ping6__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class Ping6 is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3Ping6__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Ping6 *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Ping6::DoDispose();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = (ns3::Ping6*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Ping6__PythonHelper::StartApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Ping6 *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartApplication"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = (ns3::Ping6*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Ping6__PythonHelper::StopApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Ping6 *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StopApplication"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = (ns3::Ping6*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StopApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Ping6* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Ping6__PythonHelper::DoInitialize()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Application *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoInitialize"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Application::DoInitialize();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Application* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = (ns3::Application*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoInitialize", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3Ping6__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3Ping6__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Ping6__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3Ping6__tp_init__0(PyNs3Ping6 *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Ping6 *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ping6_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3Ping6_Type)
    {
        self->obj = new PyNs3Ping6__PythonHelper(*((PyNs3Ping6 *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3Ping6__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::Ping6(*((PyNs3Ping6 *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3Ping6__tp_init__1(PyNs3Ping6 *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3Ping6_Type)
    {
        self->obj = new PyNs3Ping6__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3Ping6__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::Ping6();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3Ping6__tp_init(PyNs3Ping6 *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Ping6__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Ping6__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3Ping6_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::Ping6::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3Ping6_SetIfIndex(PyNs3Ping6 *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int ifIndex;
    const char *keywords[] = {"ifIndex", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &ifIndex)) {
        return NULL;
    }
    self->obj->SetIfIndex(ifIndex);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Ping6_SetLocal(PyNs3Ping6 *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *ipv6;
    const char *keywords[] = {"ipv6", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv6Address_Type, &ipv6)) {
        return NULL;
    }
    self->obj->SetLocal(*((PyNs3Ipv6Address *) ipv6)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Ping6_SetRemote(PyNs3Ping6 *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *ipv6;
    const char *keywords[] = {"ipv6", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv6Address_Type, &ipv6)) {
        return NULL;
    }
    self->obj->SetRemote(*((PyNs3Ipv6Address *) ipv6)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Ping6_SetRouters(PyNs3Ping6 *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    std::vector< ns3::Ipv6Address > routers_value;
    const char *keywords[] = {"routers", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O&", (char **) keywords, _wrap_convert_py2c__std__vector__lt___ns3__Ipv6Address___gt__, &routers_value)) {
        return NULL;
    }
    self->obj->SetRouters(routers_value);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3Ping6__copy__(PyNs3Ping6 *self)
{

    PyNs3Ping6 *py_copy;
    py_copy = PyObject_GC_New(PyNs3Ping6, &PyNs3Ping6_Type);
    py_copy->inst_dict = NULL;
    
    py_copy->obj = new ns3::Ping6(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Ping6_methods[] = {
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3Ping6_GetTypeId, METH_NOARGS|METH_STATIC, "GetTypeId()\n\n" },
    {(char *) "SetIfIndex", (PyCFunction) _wrap_PyNs3Ping6_SetIfIndex, METH_VARARGS|METH_KEYWORDS, "SetIfIndex(ifIndex)\n\ntype: ifIndex: uint32_t" },
    {(char *) "SetLocal", (PyCFunction) _wrap_PyNs3Ping6_SetLocal, METH_VARARGS|METH_KEYWORDS, "SetLocal(ipv6)\n\ntype: ipv6: ns3::Ipv6Address" },
    {(char *) "SetRemote", (PyCFunction) _wrap_PyNs3Ping6_SetRemote, METH_VARARGS|METH_KEYWORDS, "SetRemote(ipv6)\n\ntype: ipv6: ns3::Ipv6Address" },
    {(char *) "SetRouters", (PyCFunction) _wrap_PyNs3Ping6_SetRouters, METH_VARARGS|METH_KEYWORDS, "SetRouters(routers)\n\ntype: routers: std::vector< ns3::Ipv6Address >" },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3Ping6__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3Ping6__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "DoInitialize", (PyCFunction) PyNs3Ping6__PythonHelper::_wrap_DoInitialize, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3Ping6__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Ping6__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3Ping6__tp_clear(PyNs3Ping6 *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::Ping6 *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3Ping6__tp_traverse(PyNs3Ping6 *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3Ping6__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3Ping6__tp_dealloc(PyNs3Ping6 *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3Ping6__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3Ping6_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.Ping6",            /* tp_name */
    sizeof(PyNs3Ping6),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Ping6__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    "Ping6(arg0)\nPing6()",                        /* Documentation string */
    (traverseproc)PyNs3Ping6__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3Ping6__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Ping6_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3Ping6, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Ping6__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3Radvd__PythonHelper::_wrap_NotifyNewAggregate(PyNs3Radvd *self)
{
    PyObject *py_retval;
    PyNs3Radvd__PythonHelper *helper = dynamic_cast< PyNs3Radvd__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3Radvd__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3Radvd *self)
{
    PyObject *py_retval;
    PyNs3Radvd__PythonHelper *helper = dynamic_cast< PyNs3Radvd__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3Radvd__PythonHelper::_wrap_DoInitialize(PyNs3Radvd *self)
{
    PyObject *py_retval;
    PyNs3Radvd__PythonHelper *helper = dynamic_cast< PyNs3Radvd__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoInitialize of class Application is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoInitialize__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3Radvd__PythonHelper::_wrap_DoDispose(PyNs3Radvd *self)
{
    PyObject *py_retval;
    PyNs3Radvd__PythonHelper *helper = dynamic_cast< PyNs3Radvd__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class Radvd is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3Radvd__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Radvd *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Radvd::DoDispose();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = (ns3::Radvd*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Radvd__PythonHelper::StartApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Radvd *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartApplication"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = (ns3::Radvd*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Radvd__PythonHelper::StopApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Radvd *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StopApplication"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = (ns3::Radvd*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StopApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Radvd* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Radvd__PythonHelper::DoInitialize()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Application *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoInitialize"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Application::DoInitialize();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Application* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = (ns3::Application*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoInitialize", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3Radvd__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3Radvd__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3Radvd__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}
static PyObject* _wrap_PyNs3Radvd__get_MAX_INITIAL_RTR_ADVERTISEMENTS(PyObject * PYBINDGEN_UNUSED(obj), void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(ns3::Radvd::MAX_INITIAL_RTR_ADVERTISEMENTS));
    return py_retval;
}
static PyObject* _wrap_PyNs3Radvd__get_MAX_INITIAL_RTR_ADVERT_INTERVAL(PyObject * PYBINDGEN_UNUSED(obj), void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(ns3::Radvd::MAX_INITIAL_RTR_ADVERT_INTERVAL));
    return py_retval;
}
static PyObject* _wrap_PyNs3Radvd__get_MAX_RA_DELAY_TIME(PyObject * PYBINDGEN_UNUSED(obj), void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(ns3::Radvd::MAX_RA_DELAY_TIME));
    return py_retval;
}
static PyObject* _wrap_PyNs3Radvd__get_MIN_DELAY_BETWEEN_RAS(PyObject * PYBINDGEN_UNUSED(obj), void * PYBINDGEN_UNUSED(closure))
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(ns3::Radvd::MIN_DELAY_BETWEEN_RAS));
    return py_retval;
}
static PyGetSetDef Ns3RadvdMeta__getsets[] = {
    {
        (char*) "MAX_INITIAL_RTR_ADVERTISEMENTS", /* attribute name */
        (getter) _wrap_PyNs3Radvd__get_MAX_INITIAL_RTR_ADVERTISEMENTS, /* C function to get the attribute */
        (setter) NULL, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "MAX_INITIAL_RTR_ADVERT_INTERVAL", /* attribute name */
        (getter) _wrap_PyNs3Radvd__get_MAX_INITIAL_RTR_ADVERT_INTERVAL, /* C function to get the attribute */
        (setter) NULL, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "MAX_RA_DELAY_TIME", /* attribute name */
        (getter) _wrap_PyNs3Radvd__get_MAX_RA_DELAY_TIME, /* C function to get the attribute */
        (setter) NULL, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    {
        (char*) "MIN_DELAY_BETWEEN_RAS", /* attribute name */
        (getter) _wrap_PyNs3Radvd__get_MIN_DELAY_BETWEEN_RAS, /* C function to get the attribute */
        (setter) NULL, /* C function to set the attribute */
        NULL, /* optional doc string */
        NULL /* optional additional data for getter and setter */
    },
    { NULL, NULL, NULL, NULL, NULL }
};

PyTypeObject PyNs3RadvdMeta_Type = {
        PyVarObject_HEAD_INIT(NULL, 0)
	(char *) "Ns3RadvdMeta",		        /* tp_name */
	0,					/* tp_basicsize */
	0,					/* tp_itemsize */
	0,	 				/* tp_dealloc */
	0,					/* tp_print */
	0,					/* tp_getattr */
	0,					/* tp_setattr */
	0,					/* tp_compare */
	0,					/* tp_repr */
	0,					/* tp_as_number */
	0,					/* tp_as_sequence */
	0,		       			/* tp_as_mapping */
	0,					/* tp_hash */
	0,					/* tp_call */
	0,					/* tp_str */
	0,					/* tp_getattro */
	0,					/* tp_setattro */
	0,					/* tp_as_buffer */
	Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, /* tp_flags */
 	0,					/* tp_doc */
	0,					/* tp_traverse */
 	0,					/* tp_clear */
	0,					/* tp_richcompare */
	0,					/* tp_weaklistoffset */
	0,					/* tp_iter */
	0,					/* tp_iternext */
	0,					/* tp_methods */
	0,					/* tp_members */
	Ns3RadvdMeta__getsets,				/* tp_getset */
	0,					/* tp_base */
	0,					/* tp_dict */
	0,	                                /* tp_descr_get */
	0,  		                        /* tp_descr_set */
	0,					/* tp_dictoffset */
	0,					/* tp_init */
	0,					/* tp_alloc */
	0,					/* tp_new */
	0,               			/* tp_free */
        0,                                      /* tp_is_gc */
        0,                                      /* tp_bases */
        0,                                      /* tp_mro */
        0,                                      /* tp_cache */
        0,                                      /* tp_subclasses */
        0,                                      /* tp_weaklist */
        0                                       /* tp_del */
};



static int
_wrap_PyNs3Radvd__tp_init__0(PyNs3Radvd *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Radvd *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Radvd_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3Radvd_Type)
    {
        self->obj = new PyNs3Radvd__PythonHelper(*((PyNs3Radvd *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3Radvd__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::Radvd(*((PyNs3Radvd *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3Radvd__tp_init__1(PyNs3Radvd *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3Radvd_Type)
    {
        self->obj = new PyNs3Radvd__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3Radvd__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::Radvd();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3Radvd__tp_init(PyNs3Radvd *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Radvd__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Radvd__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3Radvd_AddConfiguration(PyNs3Radvd *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3RadvdInterface *routerInterface;
    ns3::RadvdInterface *routerInterface_ptr;
    const char *keywords[] = {"routerInterface", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3RadvdInterface_Type, &routerInterface)) {
        return NULL;
    }
    routerInterface_ptr = (routerInterface ? routerInterface->obj : NULL);
    self->obj->AddConfiguration(ns3::Ptr< ns3::RadvdInterface  > (routerInterface_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Radvd_AssignStreams(PyNs3Radvd *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int64_t retval;
    int64_t stream;
    const char *keywords[] = {"stream", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "L", (char **) keywords, &stream)) {
        return NULL;
    }
    retval = self->obj->AssignStreams(stream);
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3Radvd_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::Radvd::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


static PyObject*
_wrap_PyNs3Radvd__copy__(PyNs3Radvd *self)
{

    PyNs3Radvd *py_copy;
    py_copy = PyObject_GC_New(PyNs3Radvd, &PyNs3Radvd_Type);
    py_copy->inst_dict = NULL;
    
    py_copy->obj = new ns3::Radvd(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Radvd_methods[] = {
    {(char *) "AddConfiguration", (PyCFunction) _wrap_PyNs3Radvd_AddConfiguration, METH_VARARGS|METH_KEYWORDS, "AddConfiguration(routerInterface)\n\ntype: routerInterface: ns3::Ptr< ns3::RadvdInterface >" },
    {(char *) "AssignStreams", (PyCFunction) _wrap_PyNs3Radvd_AssignStreams, METH_VARARGS|METH_KEYWORDS, "AssignStreams(stream)\n\ntype: stream: int64_t" },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3Radvd_GetTypeId, METH_NOARGS|METH_STATIC, "GetTypeId()\n\n" },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3Radvd__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3Radvd__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "DoInitialize", (PyCFunction) PyNs3Radvd__PythonHelper::_wrap_DoInitialize, METH_NOARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3Radvd__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Radvd__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3Radvd__tp_clear(PyNs3Radvd *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::Radvd *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3Radvd__tp_traverse(PyNs3Radvd *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3Radvd__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3Radvd__tp_dealloc(PyNs3Radvd *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3Radvd__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3Radvd_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.Radvd",            /* tp_name */
    sizeof(PyNs3Radvd),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Radvd__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    "Radvd(arg0)\nRadvd()",                        /* Documentation string */
    (traverseproc)PyNs3Radvd__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3Radvd__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Radvd_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3Radvd, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Radvd__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};





static int
_wrap_PyNs3RadvdInterface__tp_init__0(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3RadvdInterface *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3RadvdInterface_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RadvdInterface(*((PyNs3RadvdInterface *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3RadvdInterface__tp_init__1(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    unsigned int interface;
    const char *keywords[] = {"interface", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &interface)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RadvdInterface(interface);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3RadvdInterface__tp_init__2(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    unsigned int interface;
    unsigned int maxRtrAdvInterval;
    unsigned int minRtrAdvInterval;
    const char *keywords[] = {"interface", "maxRtrAdvInterval", "minRtrAdvInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "III", (char **) keywords, &interface, &maxRtrAdvInterval, &minRtrAdvInterval)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RadvdInterface(interface, maxRtrAdvInterval, minRtrAdvInterval);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3RadvdInterface__tp_init(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3RadvdInterface__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3RadvdInterface__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3RadvdInterface__tp_init__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    error_list = PyList_New(3);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3RadvdInterface_AddPrefix(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3RadvdPrefix *routerPrefix;
    ns3::RadvdPrefix *routerPrefix_ptr;
    const char *keywords[] = {"routerPrefix", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3RadvdPrefix_Type, &routerPrefix)) {
        return NULL;
    }
    routerPrefix_ptr = (routerPrefix ? routerPrefix->obj : NULL);
    self->obj->AddPrefix(ns3::Ptr< ns3::RadvdPrefix  > (routerPrefix_ptr));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetCurHopLimit(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetCurHopLimit();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetDefaultLifeTime(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetDefaultLifeTime();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetDefaultPreference(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetDefaultPreference();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetHomeAgentLifeTime(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetHomeAgentLifeTime();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetHomeAgentPreference(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetHomeAgentPreference();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetInterface(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetInterface();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetLastRaTxTime(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    ns3::Time retval = self->obj->GetLastRaTxTime();
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(retval);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = Py_BuildValue((char *) "N", py_Time);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetLinkMtu(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetLinkMtu();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetMaxRtrAdvInterval(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetMaxRtrAdvInterval();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetMinDelayBetweenRAs(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetMinDelayBetweenRAs();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetMinRtrAdvInterval(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetMinRtrAdvInterval();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetPrefixes(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    ns3::RadvdInterface::RadvdPrefixList retval;
    Pyns3__RadvdInterface__RadvdPrefixList *py_ns3__RadvdInterface__RadvdPrefixList;
    
    retval = self->obj->GetPrefixes();
    py_ns3__RadvdInterface__RadvdPrefixList = PyObject_New(Pyns3__RadvdInterface__RadvdPrefixList, &Pyns3__RadvdInterface__RadvdPrefixList_Type);
    py_ns3__RadvdInterface__RadvdPrefixList->obj = new ns3::RadvdInterface::RadvdPrefixList(retval);
    py_retval = Py_BuildValue((char *) "N", py_ns3__RadvdInterface__RadvdPrefixList);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetReachableTime(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetReachableTime();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_GetRetransTimer(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetRetransTimer();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsHomeAgentFlag(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsHomeAgentFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsHomeAgentInfo(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsHomeAgentInfo();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsInitialRtrAdv(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsInitialRtrAdv();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsIntervalOpt(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsIntervalOpt();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsManagedFlag(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsManagedFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsMobRtrSupportFlag(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsMobRtrSupportFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsOtherConfigFlag(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsOtherConfigFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsSendAdvert(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsSendAdvert();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_IsSourceLLAddress(PyNs3RadvdInterface *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsSourceLLAddress();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetCurHopLimit(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int curHopLimit;
    const char *keywords[] = {"curHopLimit", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &curHopLimit)) {
        return NULL;
    }
    if (curHopLimit > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetCurHopLimit(curHopLimit);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetDefaultLifeTime(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int defaultLifeTime;
    const char *keywords[] = {"defaultLifeTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &defaultLifeTime)) {
        return NULL;
    }
    self->obj->SetDefaultLifeTime(defaultLifeTime);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetDefaultPreference(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int defaultPreference;
    const char *keywords[] = {"defaultPreference", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &defaultPreference)) {
        return NULL;
    }
    if (defaultPreference > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetDefaultPreference(defaultPreference);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetHomeAgentFlag(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool homeAgentFlag;
    PyObject *py_homeAgentFlag;
    const char *keywords[] = {"homeAgentFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_homeAgentFlag)) {
        return NULL;
    }
    homeAgentFlag = (bool) PyObject_IsTrue(py_homeAgentFlag);
    self->obj->SetHomeAgentFlag(homeAgentFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetHomeAgentInfo(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool homeAgentFlag;
    PyObject *py_homeAgentFlag;
    const char *keywords[] = {"homeAgentFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_homeAgentFlag)) {
        return NULL;
    }
    homeAgentFlag = (bool) PyObject_IsTrue(py_homeAgentFlag);
    self->obj->SetHomeAgentInfo(homeAgentFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetHomeAgentLifeTime(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int homeAgentLifeTime;
    const char *keywords[] = {"homeAgentLifeTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &homeAgentLifeTime)) {
        return NULL;
    }
    self->obj->SetHomeAgentLifeTime(homeAgentLifeTime);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetHomeAgentPreference(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int homeAgentPreference;
    const char *keywords[] = {"homeAgentPreference", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &homeAgentPreference)) {
        return NULL;
    }
    self->obj->SetHomeAgentPreference(homeAgentPreference);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetIntervalOpt(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool intervalOpt;
    PyObject *py_intervalOpt;
    const char *keywords[] = {"intervalOpt", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_intervalOpt)) {
        return NULL;
    }
    intervalOpt = (bool) PyObject_IsTrue(py_intervalOpt);
    self->obj->SetIntervalOpt(intervalOpt);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetLastRaTxTime(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Time *now;
    const char *keywords[] = {"now", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Time_Type, &now)) {
        return NULL;
    }
    self->obj->SetLastRaTxTime(*((PyNs3Time *) now)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetLinkMtu(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int linkMtu;
    const char *keywords[] = {"linkMtu", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &linkMtu)) {
        return NULL;
    }
    self->obj->SetLinkMtu(linkMtu);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetManagedFlag(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool managedFlag;
    PyObject *py_managedFlag;
    const char *keywords[] = {"managedFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_managedFlag)) {
        return NULL;
    }
    managedFlag = (bool) PyObject_IsTrue(py_managedFlag);
    self->obj->SetManagedFlag(managedFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetMaxRtrAdvInterval(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int maxRtrAdvInterval;
    const char *keywords[] = {"maxRtrAdvInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &maxRtrAdvInterval)) {
        return NULL;
    }
    self->obj->SetMaxRtrAdvInterval(maxRtrAdvInterval);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetMinDelayBetweenRAs(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int minDelayBetweenRAs;
    const char *keywords[] = {"minDelayBetweenRAs", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &minDelayBetweenRAs)) {
        return NULL;
    }
    self->obj->SetMinDelayBetweenRAs(minDelayBetweenRAs);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetMinRtrAdvInterval(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int minRtrAdvInterval;
    const char *keywords[] = {"minRtrAdvInterval", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &minRtrAdvInterval)) {
        return NULL;
    }
    self->obj->SetMinRtrAdvInterval(minRtrAdvInterval);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetMobRtrSupportFlag(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool mobRtrSupportFlag;
    PyObject *py_mobRtrSupportFlag;
    const char *keywords[] = {"mobRtrSupportFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_mobRtrSupportFlag)) {
        return NULL;
    }
    mobRtrSupportFlag = (bool) PyObject_IsTrue(py_mobRtrSupportFlag);
    self->obj->SetMobRtrSupportFlag(mobRtrSupportFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetOtherConfigFlag(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool otherConfigFlag;
    PyObject *py_otherConfigFlag;
    const char *keywords[] = {"otherConfigFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_otherConfigFlag)) {
        return NULL;
    }
    otherConfigFlag = (bool) PyObject_IsTrue(py_otherConfigFlag);
    self->obj->SetOtherConfigFlag(otherConfigFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetReachableTime(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int reachableTime;
    const char *keywords[] = {"reachableTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &reachableTime)) {
        return NULL;
    }
    self->obj->SetReachableTime(reachableTime);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetRetransTimer(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int retransTimer;
    const char *keywords[] = {"retransTimer", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &retransTimer)) {
        return NULL;
    }
    self->obj->SetRetransTimer(retransTimer);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetSendAdvert(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool sendAdvert;
    PyObject *py_sendAdvert;
    const char *keywords[] = {"sendAdvert", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_sendAdvert)) {
        return NULL;
    }
    sendAdvert = (bool) PyObject_IsTrue(py_sendAdvert);
    self->obj->SetSendAdvert(sendAdvert);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdInterface_SetSourceLLAddress(PyNs3RadvdInterface *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool sourceLLAddress;
    PyObject *py_sourceLLAddress;
    const char *keywords[] = {"sourceLLAddress", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_sourceLLAddress)) {
        return NULL;
    }
    sourceLLAddress = (bool) PyObject_IsTrue(py_sourceLLAddress);
    self->obj->SetSourceLLAddress(sourceLLAddress);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3RadvdInterface__copy__(PyNs3RadvdInterface *self)
{

    PyNs3RadvdInterface *py_copy;
    py_copy = PyObject_New(PyNs3RadvdInterface, &PyNs3RadvdInterface_Type);
    
    py_copy->obj = new ns3::RadvdInterface(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3RadvdInterface_methods[] = {
    {(char *) "AddPrefix", (PyCFunction) _wrap_PyNs3RadvdInterface_AddPrefix, METH_VARARGS|METH_KEYWORDS, "AddPrefix(routerPrefix)\n\ntype: routerPrefix: ns3::Ptr< ns3::RadvdPrefix >" },
    {(char *) "GetCurHopLimit", (PyCFunction) _wrap_PyNs3RadvdInterface_GetCurHopLimit, METH_NOARGS, "GetCurHopLimit()\n\n" },
    {(char *) "GetDefaultLifeTime", (PyCFunction) _wrap_PyNs3RadvdInterface_GetDefaultLifeTime, METH_NOARGS, "GetDefaultLifeTime()\n\n" },
    {(char *) "GetDefaultPreference", (PyCFunction) _wrap_PyNs3RadvdInterface_GetDefaultPreference, METH_NOARGS, "GetDefaultPreference()\n\n" },
    {(char *) "GetHomeAgentLifeTime", (PyCFunction) _wrap_PyNs3RadvdInterface_GetHomeAgentLifeTime, METH_NOARGS, "GetHomeAgentLifeTime()\n\n" },
    {(char *) "GetHomeAgentPreference", (PyCFunction) _wrap_PyNs3RadvdInterface_GetHomeAgentPreference, METH_NOARGS, "GetHomeAgentPreference()\n\n" },
    {(char *) "GetInterface", (PyCFunction) _wrap_PyNs3RadvdInterface_GetInterface, METH_NOARGS, "GetInterface()\n\n" },
    {(char *) "GetLastRaTxTime", (PyCFunction) _wrap_PyNs3RadvdInterface_GetLastRaTxTime, METH_NOARGS, "GetLastRaTxTime()\n\n" },
    {(char *) "GetLinkMtu", (PyCFunction) _wrap_PyNs3RadvdInterface_GetLinkMtu, METH_NOARGS, "GetLinkMtu()\n\n" },
    {(char *) "GetMaxRtrAdvInterval", (PyCFunction) _wrap_PyNs3RadvdInterface_GetMaxRtrAdvInterval, METH_NOARGS, "GetMaxRtrAdvInterval()\n\n" },
    {(char *) "GetMinDelayBetweenRAs", (PyCFunction) _wrap_PyNs3RadvdInterface_GetMinDelayBetweenRAs, METH_NOARGS, "GetMinDelayBetweenRAs()\n\n" },
    {(char *) "GetMinRtrAdvInterval", (PyCFunction) _wrap_PyNs3RadvdInterface_GetMinRtrAdvInterval, METH_NOARGS, "GetMinRtrAdvInterval()\n\n" },
    {(char *) "GetPrefixes", (PyCFunction) _wrap_PyNs3RadvdInterface_GetPrefixes, METH_NOARGS, "GetPrefixes()\n\n" },
    {(char *) "GetReachableTime", (PyCFunction) _wrap_PyNs3RadvdInterface_GetReachableTime, METH_NOARGS, "GetReachableTime()\n\n" },
    {(char *) "GetRetransTimer", (PyCFunction) _wrap_PyNs3RadvdInterface_GetRetransTimer, METH_NOARGS, "GetRetransTimer()\n\n" },
    {(char *) "IsHomeAgentFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_IsHomeAgentFlag, METH_NOARGS, "IsHomeAgentFlag()\n\n" },
    {(char *) "IsHomeAgentInfo", (PyCFunction) _wrap_PyNs3RadvdInterface_IsHomeAgentInfo, METH_NOARGS, "IsHomeAgentInfo()\n\n" },
    {(char *) "IsInitialRtrAdv", (PyCFunction) _wrap_PyNs3RadvdInterface_IsInitialRtrAdv, METH_NOARGS, "IsInitialRtrAdv()\n\n" },
    {(char *) "IsIntervalOpt", (PyCFunction) _wrap_PyNs3RadvdInterface_IsIntervalOpt, METH_NOARGS, "IsIntervalOpt()\n\n" },
    {(char *) "IsManagedFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_IsManagedFlag, METH_NOARGS, "IsManagedFlag()\n\n" },
    {(char *) "IsMobRtrSupportFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_IsMobRtrSupportFlag, METH_NOARGS, "IsMobRtrSupportFlag()\n\n" },
    {(char *) "IsOtherConfigFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_IsOtherConfigFlag, METH_NOARGS, "IsOtherConfigFlag()\n\n" },
    {(char *) "IsSendAdvert", (PyCFunction) _wrap_PyNs3RadvdInterface_IsSendAdvert, METH_NOARGS, "IsSendAdvert()\n\n" },
    {(char *) "IsSourceLLAddress", (PyCFunction) _wrap_PyNs3RadvdInterface_IsSourceLLAddress, METH_NOARGS, "IsSourceLLAddress()\n\n" },
    {(char *) "SetCurHopLimit", (PyCFunction) _wrap_PyNs3RadvdInterface_SetCurHopLimit, METH_VARARGS|METH_KEYWORDS, "SetCurHopLimit(curHopLimit)\n\ntype: curHopLimit: uint8_t" },
    {(char *) "SetDefaultLifeTime", (PyCFunction) _wrap_PyNs3RadvdInterface_SetDefaultLifeTime, METH_VARARGS|METH_KEYWORDS, "SetDefaultLifeTime(defaultLifeTime)\n\ntype: defaultLifeTime: uint32_t" },
    {(char *) "SetDefaultPreference", (PyCFunction) _wrap_PyNs3RadvdInterface_SetDefaultPreference, METH_VARARGS|METH_KEYWORDS, "SetDefaultPreference(defaultPreference)\n\ntype: defaultPreference: uint8_t" },
    {(char *) "SetHomeAgentFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_SetHomeAgentFlag, METH_VARARGS|METH_KEYWORDS, "SetHomeAgentFlag(homeAgentFlag)\n\ntype: homeAgentFlag: bool" },
    {(char *) "SetHomeAgentInfo", (PyCFunction) _wrap_PyNs3RadvdInterface_SetHomeAgentInfo, METH_VARARGS|METH_KEYWORDS, "SetHomeAgentInfo(homeAgentFlag)\n\ntype: homeAgentFlag: bool" },
    {(char *) "SetHomeAgentLifeTime", (PyCFunction) _wrap_PyNs3RadvdInterface_SetHomeAgentLifeTime, METH_VARARGS|METH_KEYWORDS, "SetHomeAgentLifeTime(homeAgentLifeTime)\n\ntype: homeAgentLifeTime: uint32_t" },
    {(char *) "SetHomeAgentPreference", (PyCFunction) _wrap_PyNs3RadvdInterface_SetHomeAgentPreference, METH_VARARGS|METH_KEYWORDS, "SetHomeAgentPreference(homeAgentPreference)\n\ntype: homeAgentPreference: uint32_t" },
    {(char *) "SetIntervalOpt", (PyCFunction) _wrap_PyNs3RadvdInterface_SetIntervalOpt, METH_VARARGS|METH_KEYWORDS, "SetIntervalOpt(intervalOpt)\n\ntype: intervalOpt: bool" },
    {(char *) "SetLastRaTxTime", (PyCFunction) _wrap_PyNs3RadvdInterface_SetLastRaTxTime, METH_VARARGS|METH_KEYWORDS, "SetLastRaTxTime(now)\n\ntype: now: ns3::Time" },
    {(char *) "SetLinkMtu", (PyCFunction) _wrap_PyNs3RadvdInterface_SetLinkMtu, METH_VARARGS|METH_KEYWORDS, "SetLinkMtu(linkMtu)\n\ntype: linkMtu: uint32_t" },
    {(char *) "SetManagedFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_SetManagedFlag, METH_VARARGS|METH_KEYWORDS, "SetManagedFlag(managedFlag)\n\ntype: managedFlag: bool" },
    {(char *) "SetMaxRtrAdvInterval", (PyCFunction) _wrap_PyNs3RadvdInterface_SetMaxRtrAdvInterval, METH_VARARGS|METH_KEYWORDS, "SetMaxRtrAdvInterval(maxRtrAdvInterval)\n\ntype: maxRtrAdvInterval: uint32_t" },
    {(char *) "SetMinDelayBetweenRAs", (PyCFunction) _wrap_PyNs3RadvdInterface_SetMinDelayBetweenRAs, METH_VARARGS|METH_KEYWORDS, "SetMinDelayBetweenRAs(minDelayBetweenRAs)\n\ntype: minDelayBetweenRAs: uint32_t" },
    {(char *) "SetMinRtrAdvInterval", (PyCFunction) _wrap_PyNs3RadvdInterface_SetMinRtrAdvInterval, METH_VARARGS|METH_KEYWORDS, "SetMinRtrAdvInterval(minRtrAdvInterval)\n\ntype: minRtrAdvInterval: uint32_t" },
    {(char *) "SetMobRtrSupportFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_SetMobRtrSupportFlag, METH_VARARGS|METH_KEYWORDS, "SetMobRtrSupportFlag(mobRtrSupportFlag)\n\ntype: mobRtrSupportFlag: bool" },
    {(char *) "SetOtherConfigFlag", (PyCFunction) _wrap_PyNs3RadvdInterface_SetOtherConfigFlag, METH_VARARGS|METH_KEYWORDS, "SetOtherConfigFlag(otherConfigFlag)\n\ntype: otherConfigFlag: bool" },
    {(char *) "SetReachableTime", (PyCFunction) _wrap_PyNs3RadvdInterface_SetReachableTime, METH_VARARGS|METH_KEYWORDS, "SetReachableTime(reachableTime)\n\ntype: reachableTime: uint32_t" },
    {(char *) "SetRetransTimer", (PyCFunction) _wrap_PyNs3RadvdInterface_SetRetransTimer, METH_VARARGS|METH_KEYWORDS, "SetRetransTimer(retransTimer)\n\ntype: retransTimer: uint32_t" },
    {(char *) "SetSendAdvert", (PyCFunction) _wrap_PyNs3RadvdInterface_SetSendAdvert, METH_VARARGS|METH_KEYWORDS, "SetSendAdvert(sendAdvert)\n\ntype: sendAdvert: bool" },
    {(char *) "SetSourceLLAddress", (PyCFunction) _wrap_PyNs3RadvdInterface_SetSourceLLAddress, METH_VARARGS|METH_KEYWORDS, "SetSourceLLAddress(sourceLLAddress)\n\ntype: sourceLLAddress: bool" },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3RadvdInterface__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3RadvdInterface__tp_dealloc(PyNs3RadvdInterface *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::RadvdInterface *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3RadvdInterface_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.RadvdInterface",            /* tp_name */
    sizeof(PyNs3RadvdInterface),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3RadvdInterface__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    "RadvdInterface(interface, maxRtrAdvInterval, minRtrAdvInterval)\nRadvdInterface(interface)\nRadvdInterface(arg0)",                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3RadvdInterface_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3RadvdInterface__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};





static int
_wrap_PyNs3RadvdPrefix__tp_init__0(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3RadvdPrefix *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3RadvdPrefix_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::RadvdPrefix(*((PyNs3RadvdPrefix *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3RadvdPrefix__tp_init__1(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Ipv6Address *network;
    int prefixLength;
    unsigned int preferredLifeTime = 604800;
    unsigned int validLifeTime = 2592000;
    bool onLinkFlag;
    PyObject *py_onLinkFlag = NULL;
    bool autonomousFlag;
    PyObject *py_autonomousFlag = NULL;
    bool routerAddrFlag;
    PyObject *py_routerAddrFlag = NULL;
    const char *keywords[] = {"network", "prefixLength", "preferredLifeTime", "validLifeTime", "onLinkFlag", "autonomousFlag", "routerAddrFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!i|IIOOO", (char **) keywords, &PyNs3Ipv6Address_Type, &network, &prefixLength, &preferredLifeTime, &validLifeTime, &py_onLinkFlag, &py_autonomousFlag, &py_routerAddrFlag)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (prefixLength > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    onLinkFlag = py_onLinkFlag? (bool) PyObject_IsTrue(py_onLinkFlag) : true;
    autonomousFlag = py_autonomousFlag? (bool) PyObject_IsTrue(py_autonomousFlag) : true;
    routerAddrFlag = py_routerAddrFlag? (bool) PyObject_IsTrue(py_routerAddrFlag) : false;
    self->obj = new ns3::RadvdPrefix(*((PyNs3Ipv6Address *) network)->obj, prefixLength, preferredLifeTime, validLifeTime, onLinkFlag, autonomousFlag, routerAddrFlag);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3RadvdPrefix__tp_init(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3RadvdPrefix__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3RadvdPrefix__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3RadvdPrefix_GetNetwork(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *py_Ipv6Address;
    
    ns3::Ipv6Address retval = self->obj->GetNetwork();
    py_Ipv6Address = PyObject_New(PyNs3Ipv6Address, &PyNs3Ipv6Address_Type);
    py_Ipv6Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv6Address->obj = new ns3::Ipv6Address(retval);
    PyNs3Ipv6Address_wrapper_registry[(void *) py_Ipv6Address->obj] = (PyObject *) py_Ipv6Address;
    py_retval = Py_BuildValue((char *) "N", py_Ipv6Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_GetPreferredLifeTime(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetPreferredLifeTime();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_GetPrefixLength(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetPrefixLength();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_GetValidLifeTime(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetValidLifeTime();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_IsAutonomousFlag(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsAutonomousFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_IsOnLinkFlag(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsOnLinkFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_IsRouterAddrFlag(PyNs3RadvdPrefix *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsRouterAddrFlag();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetAutonomousFlag(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool autonomousFlag;
    PyObject *py_autonomousFlag;
    const char *keywords[] = {"autonomousFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_autonomousFlag)) {
        return NULL;
    }
    autonomousFlag = (bool) PyObject_IsTrue(py_autonomousFlag);
    self->obj->SetAutonomousFlag(autonomousFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetNetwork(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *network;
    const char *keywords[] = {"network", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ipv6Address_Type, &network)) {
        return NULL;
    }
    self->obj->SetNetwork(*((PyNs3Ipv6Address *) network)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetOnLinkFlag(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool onLinkFlag;
    PyObject *py_onLinkFlag;
    const char *keywords[] = {"onLinkFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_onLinkFlag)) {
        return NULL;
    }
    onLinkFlag = (bool) PyObject_IsTrue(py_onLinkFlag);
    self->obj->SetOnLinkFlag(onLinkFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetPreferredLifeTime(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int preferredLifeTime;
    const char *keywords[] = {"preferredLifeTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &preferredLifeTime)) {
        return NULL;
    }
    self->obj->SetPreferredLifeTime(preferredLifeTime);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetPrefixLength(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    int prefixLength;
    const char *keywords[] = {"prefixLength", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &prefixLength)) {
        return NULL;
    }
    if (prefixLength > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        return NULL;
    }
    self->obj->SetPrefixLength(prefixLength);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetRouterAddrFlag(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool routerAddrFlag;
    PyObject *py_routerAddrFlag;
    const char *keywords[] = {"routerAddrFlag", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &py_routerAddrFlag)) {
        return NULL;
    }
    routerAddrFlag = (bool) PyObject_IsTrue(py_routerAddrFlag);
    self->obj->SetRouterAddrFlag(routerAddrFlag);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3RadvdPrefix_SetValidLifeTime(PyNs3RadvdPrefix *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int validLifeTime;
    const char *keywords[] = {"validLifeTime", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "I", (char **) keywords, &validLifeTime)) {
        return NULL;
    }
    self->obj->SetValidLifeTime(validLifeTime);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3RadvdPrefix__copy__(PyNs3RadvdPrefix *self)
{

    PyNs3RadvdPrefix *py_copy;
    py_copy = PyObject_New(PyNs3RadvdPrefix, &PyNs3RadvdPrefix_Type);
    
    py_copy->obj = new ns3::RadvdPrefix(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3RadvdPrefix_methods[] = {
    {(char *) "GetNetwork", (PyCFunction) _wrap_PyNs3RadvdPrefix_GetNetwork, METH_NOARGS, "GetNetwork()\n\n" },
    {(char *) "GetPreferredLifeTime", (PyCFunction) _wrap_PyNs3RadvdPrefix_GetPreferredLifeTime, METH_NOARGS, "GetPreferredLifeTime()\n\n" },
    {(char *) "GetPrefixLength", (PyCFunction) _wrap_PyNs3RadvdPrefix_GetPrefixLength, METH_NOARGS, "GetPrefixLength()\n\n" },
    {(char *) "GetValidLifeTime", (PyCFunction) _wrap_PyNs3RadvdPrefix_GetValidLifeTime, METH_NOARGS, "GetValidLifeTime()\n\n" },
    {(char *) "IsAutonomousFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_IsAutonomousFlag, METH_NOARGS, "IsAutonomousFlag()\n\n" },
    {(char *) "IsOnLinkFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_IsOnLinkFlag, METH_NOARGS, "IsOnLinkFlag()\n\n" },
    {(char *) "IsRouterAddrFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_IsRouterAddrFlag, METH_NOARGS, "IsRouterAddrFlag()\n\n" },
    {(char *) "SetAutonomousFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetAutonomousFlag, METH_VARARGS|METH_KEYWORDS, "SetAutonomousFlag(autonomousFlag)\n\ntype: autonomousFlag: bool" },
    {(char *) "SetNetwork", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetNetwork, METH_VARARGS|METH_KEYWORDS, "SetNetwork(network)\n\ntype: network: ns3::Ipv6Address" },
    {(char *) "SetOnLinkFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetOnLinkFlag, METH_VARARGS|METH_KEYWORDS, "SetOnLinkFlag(onLinkFlag)\n\ntype: onLinkFlag: bool" },
    {(char *) "SetPreferredLifeTime", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetPreferredLifeTime, METH_VARARGS|METH_KEYWORDS, "SetPreferredLifeTime(preferredLifeTime)\n\ntype: preferredLifeTime: uint32_t" },
    {(char *) "SetPrefixLength", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetPrefixLength, METH_VARARGS|METH_KEYWORDS, "SetPrefixLength(prefixLength)\n\ntype: prefixLength: uint8_t" },
    {(char *) "SetRouterAddrFlag", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetRouterAddrFlag, METH_VARARGS|METH_KEYWORDS, "SetRouterAddrFlag(routerAddrFlag)\n\ntype: routerAddrFlag: bool" },
    {(char *) "SetValidLifeTime", (PyCFunction) _wrap_PyNs3RadvdPrefix_SetValidLifeTime, METH_VARARGS|METH_KEYWORDS, "SetValidLifeTime(validLifeTime)\n\ntype: validLifeTime: uint32_t" },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3RadvdPrefix__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3RadvdPrefix__tp_dealloc(PyNs3RadvdPrefix *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::RadvdPrefix *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3RadvdPrefix_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.RadvdPrefix",            /* tp_name */
    sizeof(PyNs3RadvdPrefix),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3RadvdPrefix__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    "RadvdPrefix(network, prefixLength, preferredLifeTime, validLifeTime, onLinkFlag, autonomousFlag, routerAddrFlag)\nRadvdPrefix(arg0)",                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3RadvdPrefix_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3RadvdPrefix__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3V4Ping__PythonHelper::_wrap_NotifyNewAggregate(PyNs3V4Ping *self)
{
    PyObject *py_retval;
    PyNs3V4Ping__PythonHelper *helper = dynamic_cast< PyNs3V4Ping__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3V4Ping__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3V4Ping *self)
{
    PyObject *py_retval;
    PyNs3V4Ping__PythonHelper *helper = dynamic_cast< PyNs3V4Ping__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3V4Ping__PythonHelper::_wrap_DoInitialize(PyNs3V4Ping *self)
{
    PyObject *py_retval;
    PyNs3V4Ping__PythonHelper *helper = dynamic_cast< PyNs3V4Ping__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoInitialize of class Application is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoInitialize__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

void
PyNs3V4Ping__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::V4Ping *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj;
    reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = (ns3::V4Ping*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3V4Ping__PythonHelper::StartApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::V4Ping *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StartApplication"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj;
    reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = (ns3::V4Ping*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StartApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3V4Ping__PythonHelper::StopApplication()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::V4Ping *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "StopApplication"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj;
    reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = (ns3::V4Ping*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "StopApplication", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3V4Ping* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3V4Ping__PythonHelper::DoInitialize()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Application *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoInitialize"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Application::DoInitialize();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Application* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = (ns3::Application*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoInitialize", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Application* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3V4Ping__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3V4Ping__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3V4Ping__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3V4Ping__tp_init__0(PyNs3V4Ping *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3V4Ping *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3V4Ping_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3V4Ping_Type)
    {
        self->obj = new PyNs3V4Ping__PythonHelper(*((PyNs3V4Ping *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3V4Ping__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::V4Ping(*((PyNs3V4Ping *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3V4Ping__tp_init__1(PyNs3V4Ping *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3V4Ping_Type)
    {
        self->obj = new PyNs3V4Ping__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3V4Ping__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::V4Ping();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3V4Ping__tp_init(PyNs3V4Ping *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3V4Ping__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3V4Ping__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3V4Ping_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::V4Ping::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


static PyObject*
_wrap_PyNs3V4Ping__copy__(PyNs3V4Ping *self)
{

    PyNs3V4Ping *py_copy;
    py_copy = PyObject_GC_New(PyNs3V4Ping, &PyNs3V4Ping_Type);
    py_copy->inst_dict = NULL;
    
    py_copy->obj = new ns3::V4Ping(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3V4Ping_methods[] = {
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3V4Ping_GetTypeId, METH_NOARGS|METH_STATIC, "GetTypeId()\n\n" },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3V4Ping__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3V4Ping__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "DoInitialize", (PyCFunction) PyNs3V4Ping__PythonHelper::_wrap_DoInitialize, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3V4Ping__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3V4Ping__tp_clear(PyNs3V4Ping *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::V4Ping *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3V4Ping__tp_traverse(PyNs3V4Ping *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3V4Ping__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3V4Ping__tp_dealloc(PyNs3V4Ping *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3V4Ping__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

PyTypeObject PyNs3V4Ping_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.V4Ping",            /* tp_name */
    sizeof(PyNs3V4Ping),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3V4Ping__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    "V4Ping(arg0)\nV4Ping()",                        /* Documentation string */
    (traverseproc)PyNs3V4Ping__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3V4Ping__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3V4Ping_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3V4Ping, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3V4Ping__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};


/* --- containers --- */



static void
Pystd__vector__lt___ns3__Ipv6Address___gt__Iter__tp_clear(Pystd__vector__lt___ns3__Ipv6Address___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__vector__lt___ns3__Ipv6Address___gt__Iter__tp_traverse(Pystd__vector__lt___ns3__Ipv6Address___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__vector__lt___ns3__Ipv6Address___gt____tp_dealloc(Pystd__vector__lt___ns3__Ipv6Address___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__vector__lt___ns3__Ipv6Address___gt__Iter__tp_dealloc(Pystd__vector__lt___ns3__Ipv6Address___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__Ipv6Address___gt____tp_iter(Pystd__vector__lt___ns3__Ipv6Address___gt__ *self)
{
    Pystd__vector__lt___ns3__Ipv6Address___gt__Iter *iter = PyObject_GC_New(Pystd__vector__lt___ns3__Ipv6Address___gt__Iter, &Pystd__vector__lt___ns3__Ipv6Address___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::vector< ns3::Ipv6Address >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__vector__lt___ns3__Ipv6Address___gt__Iter__tp_iter(Pystd__vector__lt___ns3__Ipv6Address___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__vector__lt___ns3__Ipv6Address___gt__Iter__tp_iternext(Pystd__vector__lt___ns3__Ipv6Address___gt__Iter *self)
{
    PyObject *py_retval;
    std::vector< ns3::Ipv6Address >::iterator iter;
    PyNs3Ipv6Address *py_Ipv6Address;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_Ipv6Address = PyObject_New(PyNs3Ipv6Address, &PyNs3Ipv6Address_Type);
    py_Ipv6Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ipv6Address->obj = new ns3::Ipv6Address((*iter));
    PyNs3Ipv6Address_wrapper_registry[(void *) py_Ipv6Address->obj] = (PyObject *) py_Ipv6Address;
    py_retval = Py_BuildValue((char *) "N", py_Ipv6Address);
    return py_retval;
}

int _wrap_convert_py2c__ns3__Ipv6Address(PyObject *value, ns3::Ipv6Address *address)
{
    PyObject *py_retval;
    PyNs3Ipv6Address *tmp_Ipv6Address;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Ipv6Address_Type, &tmp_Ipv6Address)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_Ipv6Address->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__vector__lt___ns3__Ipv6Address___gt__(PyObject *arg, std::vector< ns3::Ipv6Address > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__vector__lt___ns3__Ipv6Address___gt___Type)) {
        *container = *((Pystd__vector__lt___ns3__Ipv6Address___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::Ipv6Address item;
            if (!_wrap_convert_py2c__ns3__Ipv6Address(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__vector__lt___ns3__Ipv6Address___gt__ instance, or a list of ns3::Ipv6Address");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__vector__lt___ns3__Ipv6Address___gt____tp_init(Pystd__vector__lt___ns3__Ipv6Address___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::vector< ns3::Ipv6Address >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__vector__lt___ns3__Ipv6Address___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__vector__lt___ns3__Ipv6Address___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.Std__vector__lt___ns3__Ipv6Address___gt__",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__Ipv6Address___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__Ipv6Address___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__Ipv6Address___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__vector__lt___ns3__Ipv6Address___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__vector__lt___ns3__Ipv6Address___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.Std__vector__lt___ns3__Ipv6Address___gt__Iter",            /* tp_name */
    sizeof(Pystd__vector__lt___ns3__Ipv6Address___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__vector__lt___ns3__Ipv6Address___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__vector__lt___ns3__Ipv6Address___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__vector__lt___ns3__Ipv6Address___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__vector__lt___ns3__Ipv6Address___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__vector__lt___ns3__Ipv6Address___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_clear(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_traverse(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_dealloc(Pystd__map__lt___unsigned_int__unsigned_int___gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_dealloc(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_iter(Pystd__map__lt___unsigned_int__unsigned_int___gt__ *self)
{
    Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *iter = PyObject_GC_New(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter, &Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::map< unsigned int, unsigned int >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_iter(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_iternext(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter *self)
{
    PyObject *py_retval;
    std::map< unsigned int, unsigned int >::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "NN", PyLong_FromUnsignedLong(iter->first), PyLong_FromUnsignedLong(iter->second));
    return py_retval;
}

int _wrap_convert_py2c__unsigned_int(PyObject *value, unsigned int *address)
{
    PyObject *py_retval;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "I", &*address)) {
        Py_DECREF(py_retval);
        return 0;
    }
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__map__lt___unsigned_int__unsigned_int___gt__(PyObject *arg, std::map< unsigned int, unsigned int > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__map__lt___unsigned_int__unsigned_int___gt___Type)) {
        *container = *((Pystd__map__lt___unsigned_int__unsigned_int___gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            PyObject *tup = PyList_GET_ITEM(arg, i);
            if (!PyTuple_Check(tup) || PyTuple_Size(tup) != 2) {
                PyErr_SetString(PyExc_TypeError, "items must be tuples with two elements");
                return 0;
            }
            std::pair< unsigned int, unsigned int > item;
            if (!_wrap_convert_py2c__unsigned_int(PyTuple_GET_ITEM(tup, 0), &item.first)) {
                return 0;
            }
            if (!_wrap_convert_py2c__unsigned_int(PyTuple_GET_ITEM(tup, 1), &item.second)) {
                return 0;
            }
            container->insert(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__map__lt___unsigned_int__unsigned_int___gt__ instance, or a list of unsigned int");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_init(Pystd__map__lt___unsigned_int__unsigned_int___gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::map< unsigned int, unsigned int >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__map__lt___unsigned_int__unsigned_int___gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__map__lt___unsigned_int__unsigned_int___gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.Std__map__lt___unsigned_int__unsigned_int___gt__",            /* tp_name */
    sizeof(Pystd__map__lt___unsigned_int__unsigned_int___gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.Std__map__lt___unsigned_int__unsigned_int___gt__Iter",            /* tp_name */
    sizeof(Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter__tp_clear(Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter__tp_traverse(Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt____tp_dealloc(Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__ *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter__tp_dealloc(Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt____tp_iter(Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__ *self)
{
    Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter *iter = PyObject_GC_New(Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter, &Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new std::list< ns3::Ptr< ns3::RadvdPrefix > >::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter__tp_iter(Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter__tp_iternext(Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter *self)
{
    PyObject *py_retval;
    std::list< ns3::Ptr< ns3::RadvdPrefix > >::iterator iter;
    PyNs3RadvdPrefix *py_RadvdPrefix;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    if (!(const_cast<ns3::RadvdPrefix *> (ns3::PeekPointer ((*iter))))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::RadvdPrefix *> (ns3::PeekPointer ((*iter))));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_RadvdPrefix = NULL;
    } else {
        py_RadvdPrefix = (PyNs3RadvdPrefix *) wrapper_lookup_iter->second;
        Py_INCREF(py_RadvdPrefix);
    }
    
    if (py_RadvdPrefix == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::RadvdPrefix *> (ns3::PeekPointer ((*iter))))), &PyNs3RadvdPrefix_Type);
        py_RadvdPrefix = PyObject_New(PyNs3RadvdPrefix, wrapper_type);
    
        py_RadvdPrefix->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::RadvdPrefix *> (ns3::PeekPointer ((*iter)))->Ref();
        py_RadvdPrefix->obj = const_cast<ns3::RadvdPrefix *> (ns3::PeekPointer ((*iter)));
        PyNs3Empty_wrapper_registry[(void *) py_RadvdPrefix->obj] = (PyObject *) py_RadvdPrefix;
    }
    py_retval = Py_BuildValue((char *) "N", py_RadvdPrefix);
    return py_retval;
}

int _wrap_convert_py2c__ns3__Ptr__lt___ns3__RadvdPrefix___gt__(PyObject *value, ns3::Ptr< ns3::RadvdPrefix > *address)
{
    PyObject *py_retval;
    PyNs3RadvdPrefix *tmp_RadvdPrefix;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3RadvdPrefix_Type, &tmp_RadvdPrefix)) {
        Py_DECREF(py_retval);
        return 0;
    }
    // dangerous!
    *address = ns3::Ptr< ns3::RadvdPrefix  > (tmp_RadvdPrefix->obj);
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__std__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__(PyObject *arg, std::list< ns3::Ptr< ns3::RadvdPrefix > > *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt___Type)) {
        *container = *((Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::Ptr< ns3::RadvdPrefix > item;
            if (!_wrap_convert_py2c__ns3__Ptr__lt___ns3__RadvdPrefix___gt__(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Std__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__ instance, or a list of ns3::Ptr< ns3::RadvdPrefix >");
        return 0;
    }
    return 1;
}


static int
_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt____tp_init(Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__ *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new std::list< ns3::Ptr< ns3::RadvdPrefix > >;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__std__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt___Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.Std__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt____tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt____tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt____tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.Std__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter",            /* tp_name */
    sizeof(Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter__tp_traverse,     /* tp_traverse */
    (inquiry)Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pyns3__RadvdInterface__RadvdPrefixListIter__tp_clear(Pyns3__RadvdInterface__RadvdPrefixListIter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pyns3__RadvdInterface__RadvdPrefixListIter__tp_traverse(Pyns3__RadvdInterface__RadvdPrefixListIter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pyns3__RadvdInterface__RadvdPrefixList__tp_dealloc(Pyns3__RadvdInterface__RadvdPrefixList *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pyns3__RadvdInterface__RadvdPrefixListIter__tp_dealloc(Pyns3__RadvdInterface__RadvdPrefixListIter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pyns3__RadvdInterface__RadvdPrefixList__tp_iter(Pyns3__RadvdInterface__RadvdPrefixList *self)
{
    Pyns3__RadvdInterface__RadvdPrefixListIter *iter = PyObject_GC_New(Pyns3__RadvdInterface__RadvdPrefixListIter, &Pyns3__RadvdInterface__RadvdPrefixListIter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new ns3::RadvdInterface::RadvdPrefixList::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pyns3__RadvdInterface__RadvdPrefixListIter__tp_iter(Pyns3__RadvdInterface__RadvdPrefixListIter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pyns3__RadvdInterface__RadvdPrefixListIter__tp_iternext(Pyns3__RadvdInterface__RadvdPrefixListIter *self)
{
    PyObject *py_retval;
    ns3::RadvdInterface::RadvdPrefixList::iterator iter;
    PyNs3RadvdPrefix *py_RadvdPrefix;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    if (!(const_cast<ns3::RadvdPrefix *> (ns3::PeekPointer ((*iter))))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::RadvdPrefix *> (ns3::PeekPointer ((*iter))));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_RadvdPrefix = NULL;
    } else {
        py_RadvdPrefix = (PyNs3RadvdPrefix *) wrapper_lookup_iter->second;
        Py_INCREF(py_RadvdPrefix);
    }
    
    if (py_RadvdPrefix == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::RadvdPrefix *> (ns3::PeekPointer ((*iter))))), &PyNs3RadvdPrefix_Type);
        py_RadvdPrefix = PyObject_New(PyNs3RadvdPrefix, wrapper_type);
    
        py_RadvdPrefix->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::RadvdPrefix *> (ns3::PeekPointer ((*iter)))->Ref();
        py_RadvdPrefix->obj = const_cast<ns3::RadvdPrefix *> (ns3::PeekPointer ((*iter)));
        PyNs3Empty_wrapper_registry[(void *) py_RadvdPrefix->obj] = (PyObject *) py_RadvdPrefix;
    }
    py_retval = Py_BuildValue((char *) "N", py_RadvdPrefix);
    return py_retval;
}

int _wrap_convert_py2c__ns3__RadvdInterface__RadvdPrefixList(PyObject *arg, ns3::RadvdInterface::RadvdPrefixList *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pyns3__RadvdInterface__RadvdPrefixList_Type)) {
        *container = *((Pyns3__RadvdInterface__RadvdPrefixList*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::Ptr< ns3::RadvdPrefix > item;
            if (!_wrap_convert_py2c__ns3__Ptr__lt___ns3__RadvdPrefix___gt__(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Ns3__RadvdInterface__RadvdPrefixList instance, or a list of ns3::Ptr< ns3::RadvdPrefix >");
        return 0;
    }
    return 1;
}


static int
_wrap_Pyns3__RadvdInterface__RadvdPrefixList__tp_init(Pyns3__RadvdInterface__RadvdPrefixList *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new ns3::RadvdInterface::RadvdPrefixList;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__ns3__RadvdInterface__RadvdPrefixList(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pyns3__RadvdInterface__RadvdPrefixList_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.Ns3__RadvdInterface__RadvdPrefixList",            /* tp_name */
    sizeof(Pyns3__RadvdInterface__RadvdPrefixList),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pyns3__RadvdInterface__RadvdPrefixList__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pyns3__RadvdInterface__RadvdPrefixList__tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pyns3__RadvdInterface__RadvdPrefixList__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pyns3__RadvdInterface__RadvdPrefixListIter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "internet_apps.Ns3__RadvdInterface__RadvdPrefixListIter",            /* tp_name */
    sizeof(Pyns3__RadvdInterface__RadvdPrefixListIter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pyns3__RadvdInterface__RadvdPrefixListIter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL, 
#else
    (cmpfunc)NULL,           /* tp_compare */
#endif
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pyns3__RadvdInterface__RadvdPrefixListIter__tp_traverse,     /* tp_traverse */
    (inquiry)Pyns3__RadvdInterface__RadvdPrefixListIter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pyns3__RadvdInterface__RadvdPrefixListIter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pyns3__RadvdInterface__RadvdPrefixListIter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};


/* --- enumerations --- */































#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef internet_apps_moduledef = {
    PyModuleDef_HEAD_INIT,
    "internet_apps",
    NULL,
    -1,
    internet_apps_functions,
};
#endif


#if PY_VERSION_HEX >= 0x03000000
    #define MOD_ERROR NULL
    #define MOD_INIT(name) PyObject* PyInit_##name(void)
    #define MOD_RETURN(val) val
#else
    #define MOD_ERROR
    #define MOD_INIT(name) void init##name(void)
    #define MOD_RETURN(val)
#endif
#if defined(__cplusplus)
extern "C"
#endif
#if defined(__GNUC__) && __GNUC__ >= 4
__attribute__ ((visibility("default")))
#endif


MOD_INIT(internet_apps)
{
    PyObject *m;
    PyObject *submodule;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&internet_apps_moduledef);
    #else
    m = Py_InitModule3((char *) "internet_apps", internet_apps_functions, NULL);
    #endif
    if (m == NULL) {
        return MOD_ERROR;
    }
    PyModule_AddIntConstant(m, (char *) "STD_IOS_IN", std::ios::in);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_OUT", std::ios::out);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_ATE", std::ios::ate);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_APP", std::ios::app);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_TRUNC", std::ios::trunc);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_BINARY", std::ios::binary);
    /* Import the 'ns3::Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ApplicationContainer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ApplicationContainer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ApplicationContainer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ApplicationContainer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ApplicationContainer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ApplicationContainer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AttributeConstructionList' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeConstructionList_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeConstructionList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3AttributeConstructionList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AttributeConstructionList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AttributeConstructionList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AttributeConstructionList::Item' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeConstructionListItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3AttributeConstructionListItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AttributeConstructionListItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AttributeConstructionListItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Average< double >' class from module 'ns.stats' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.stats");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Average__Double_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Average__Double");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Average__Double_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Average__Double_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Average__Double_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Buffer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Buffer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Buffer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Buffer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Buffer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Buffer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Buffer::Iterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BufferIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Iterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BufferIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BufferIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BufferIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ByteTagIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagIterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagList_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ByteTagList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList::Iterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagListIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Iterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagListIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagListIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagListIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList::Iterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagListIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagListIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagListIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagListIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::CallbackBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3CallbackBase_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3CallbackBase_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3CallbackBase_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DataOutputCallback' class from module 'ns.stats' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.stats");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DataOutputCallback_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DataOutputCallback");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DataOutputCallback_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DataOutputCallback_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DataOutputCallback_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DefaultDeleter< ns3::AttributeAccessor >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DefaultDeleter__Ns3AttributeAccessor_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DefaultDeleter__Ns3AttributeAccessor");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DefaultDeleter__Ns3AttributeAccessor_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DefaultDeleter__Ns3AttributeAccessor_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DefaultDeleter__Ns3AttributeAccessor_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DefaultDeleter< ns3::AttributeChecker >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DefaultDeleter__Ns3AttributeChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DefaultDeleter__Ns3AttributeChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DefaultDeleter__Ns3AttributeChecker_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DefaultDeleter__Ns3AttributeChecker_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DefaultDeleter__Ns3AttributeChecker_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DefaultDeleter< ns3::AttributeValue >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DefaultDeleter__Ns3AttributeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DefaultDeleter__Ns3AttributeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DefaultDeleter__Ns3AttributeValue_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DefaultDeleter__Ns3AttributeValue_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DefaultDeleter__Ns3AttributeValue_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DefaultDeleter< ns3::CallbackImplBase >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DefaultDeleter__Ns3CallbackImplBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DefaultDeleter__Ns3CallbackImplBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DefaultDeleter__Ns3CallbackImplBase_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DefaultDeleter__Ns3CallbackImplBase_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DefaultDeleter__Ns3CallbackImplBase_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DefaultDeleter< ns3::EventImpl >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DefaultDeleter__Ns3EventImpl_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DefaultDeleter__Ns3EventImpl");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DefaultDeleter__Ns3EventImpl_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DefaultDeleter__Ns3EventImpl_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DefaultDeleter__Ns3EventImpl_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DefaultDeleter< ns3::Hash::Implementation >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DefaultDeleter__Ns3HashImplementation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DefaultDeleter__Ns3HashImplementation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DefaultDeleter__Ns3HashImplementation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DefaultDeleter__Ns3HashImplementation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DefaultDeleter__Ns3HashImplementation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DefaultDeleter< ns3::NixVector >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DefaultDeleter__Ns3NixVector_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DefaultDeleter__Ns3NixVector");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DefaultDeleter__Ns3NixVector_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DefaultDeleter__Ns3NixVector_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DefaultDeleter__Ns3NixVector_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DefaultDeleter< ns3::Packet >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DefaultDeleter__Ns3Packet_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DefaultDeleter__Ns3Packet");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DefaultDeleter__Ns3Packet_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DefaultDeleter__Ns3Packet_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DefaultDeleter__Ns3Packet_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::DefaultDeleter< ns3::TraceSourceAccessor >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DefaultDeleter__Ns3TraceSourceAccessor_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DefaultDeleter__Ns3TraceSourceAccessor");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3DefaultDeleter__Ns3TraceSourceAccessor_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3DefaultDeleter__Ns3TraceSourceAccessor_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3DefaultDeleter__Ns3TraceSourceAccessor_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::EventId' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EventId_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EventId");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3EventId_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3EventId_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3EventId_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Hasher' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Hasher_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Hasher");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Hasher_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Hasher_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Hasher_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Inet6SocketAddress' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Inet6SocketAddress_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Inet6SocketAddress");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Inet6SocketAddress_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Inet6SocketAddress_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Inet6SocketAddress_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::InetSocketAddress' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3InetSocketAddress_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "InetSocketAddress");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3InetSocketAddress_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3InetSocketAddress_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3InetSocketAddress_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv4Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv4Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv4Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv4Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv4InterfaceAddress' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4InterfaceAddress_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4InterfaceAddress");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv4InterfaceAddress_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv4InterfaceAddress_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv4InterfaceAddress_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv4InterfaceContainer' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4InterfaceContainer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4InterfaceContainer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv4InterfaceContainer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv4InterfaceContainer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv4InterfaceContainer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv4Mask' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4Mask_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4Mask");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv4Mask_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv4Mask_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv4Mask_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv6Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv6Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv6Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv6Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv6Prefix' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6Prefix_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6Prefix");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv6Prefix_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv6Prefix_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv6Prefix_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Mac48Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Mac48Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Mac48Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Mac48Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Mac48Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Mac48Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Mac8Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Mac8Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Mac8Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Mac8Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Mac8Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Mac8Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::NetDeviceContainer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NetDeviceContainer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NetDeviceContainer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3NetDeviceContainer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3NetDeviceContainer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3NetDeviceContainer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::NodeContainer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NodeContainer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NodeContainer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3NodeContainer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3NodeContainer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3NodeContainer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectBase_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectBase_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectBase_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectDeleter' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectDeleter_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectDeleter");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectDeleter_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectDeleter_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectDeleter_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectFactory' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectFactory_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectFactory");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectFactory_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectFactory_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectFactory_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketMetadata' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketMetadata_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PacketMetadata");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketMetadata_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadata_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadata_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketMetadata::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketMetadataItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketMetadataItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadataItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadataItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketMetadata::ItemIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketMetadataItemIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ItemIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketMetadataItemIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadataItemIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadataItemIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PacketTagIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagIterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagList' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagList_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PacketTagList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagList::TagData' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagListTagData_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TagData");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagListTagData_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagListTagData_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagListTagData_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Simulator' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Simulator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Simulator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Simulator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Simulator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Simulator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::StatisticalSummary' class from module 'ns.stats' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.stats");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3StatisticalSummary_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "StatisticalSummary");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3StatisticalSummary_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3StatisticalSummary_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3StatisticalSummary_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Tag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Tag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Tag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TagBuffer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TagBuffer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TagBuffer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TagBuffer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TagBuffer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TagBuffer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TimeWithUnit' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TimeWithUnit_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TimeWithUnit");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TimeWithUnit_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TimeWithUnit_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TimeWithUnit_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TypeId' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeId_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TypeId");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TypeId_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeId_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeId_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TypeId::AttributeInformation' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdAttributeInformation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeInformation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TypeIdAttributeInformation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeIdAttributeInformation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeIdAttributeInformation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TypeId::TraceSourceInformation' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdTraceSourceInformation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TraceSourceInformation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TypeIdTraceSourceInformation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeIdTraceSourceInformation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeIdTraceSourceInformation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::empty' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Empty_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Empty_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Empty_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::int64x64_t' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Int64x64_t_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "int64x64_t");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Int64x64_t_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Int64x64_t_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Int64x64_t_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Chunk' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Chunk_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Chunk");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Header' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Header_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Header");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Object' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Object_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Object");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Object::AggregateIterator' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectAggregateIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AggregateIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectAggregateIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectAggregateIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectAggregateIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::RandomVariableStream' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3RandomVariableStream_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RandomVariableStream");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SequentialRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SequentialRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SequentialRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Hash::Implementation, ns3::empty, ns3::DefaultDeleter<ns3::Hash::Implementation> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Hash::Implementation, ns3::empty, ns3::DefaultDeleter<ns3::Hash::Implementation> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4MulticastRoute> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Ipv4MulticastRoute, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4MulticastRoute> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Ipv4MulticastRoute_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4MulticastRoute__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4Route> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Ipv4Route, ns3::empty, ns3::DefaultDeleter<ns3::Ipv4Route> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Ipv4Route_Ns3Empty_Ns3DefaultDeleter__lt__ns3Ipv4Route__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Socket' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Socket_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Socket");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketIpTosTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketIpTosTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketIpTosTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketIpTtlTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketIpTtlTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketIpTtlTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketIpv6HopLimitTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketIpv6HopLimitTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketIpv6HopLimitTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketIpv6TclassTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketIpv6TclassTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketIpv6TclassTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketPriorityTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketPriorityTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketPriorityTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SocketSetDontFragmentTag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SocketSetDontFragmentTag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SocketSetDontFragmentTag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Time' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Time_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Time");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Time_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Time_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Time_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TraceSourceAccessor' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TraceSourceAccessor_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TraceSourceAccessor");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Trailer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Trailer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Trailer");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TriangularRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TriangularRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TriangularRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UniformRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UniformRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UniformRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WeibullRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WeibullRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WeibullRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ZetaRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ZetaRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ZetaRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ZipfRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ZipfRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ZipfRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Application' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Application_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Application");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeAccessor' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeAccessor_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeAccessor");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::BooleanChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BooleanChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BooleanChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::BooleanValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BooleanValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BooleanValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImplBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImplBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImplBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ConstantRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ConstantRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ConstantRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DataCalculator' class from module 'ns.stats' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.stats");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DataCalculator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DataCalculator");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DataOutputInterface' class from module 'ns.stats' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.stats");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DataOutputInterface_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DataOutputInterface");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DeterministicRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DeterministicRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DeterministicRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DoubleValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DoubleValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DoubleValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EmpiricalRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EmpiricalRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EmpiricalRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EmptyAttributeAccessor' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EmptyAttributeAccessor_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EmptyAttributeAccessor");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EmptyAttributeChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EmptyAttributeChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EmptyAttributeChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EmptyAttributeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EmptyAttributeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EmptyAttributeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EnumChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EnumChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EnumChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EnumValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EnumValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EnumValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ErlangRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ErlangRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ErlangRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EventImpl' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EventImpl_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EventImpl");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ExponentialRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ExponentialRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ExponentialRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::GammaRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3GammaRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "GammaRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::IntegerValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3IntegerValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "IntegerValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4MaskChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4MaskChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4MaskChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4MaskValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4MaskValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4MaskValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4MulticastRoute' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4MulticastRoute_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4MulticastRoute");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4Route' class from module 'ns.internet' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.internet");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4Route_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4Route");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6PrefixChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6PrefixChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6PrefixChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6PrefixValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6PrefixValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6PrefixValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::LogNormalRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3LogNormalRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "LogNormalRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Mac48AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Mac48AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Mac48AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Mac48AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Mac48AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Mac48AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MinMaxAvgTotalCalculator< double >' class from module 'ns.stats' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.stats");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MinMaxAvgTotalCalculator__Double_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MinMaxAvgTotalCalculator__Double");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NetDevice' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NetDevice_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NetDevice");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NixVector' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NixVector_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NixVector");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Node' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Node_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Node");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NormalRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NormalRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NormalRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ObjectFactoryChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectFactoryChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectFactoryChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ObjectFactoryValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectFactoryValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectFactoryValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Packet' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Packet_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Packet");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ParetoRandomVariable' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ParetoRandomVariable_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ParetoRandomVariable");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TimeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TimeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TimeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TypeIdChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TypeIdChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TypeIdValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TypeIdValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UintegerValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UintegerValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UintegerValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImpl< bool, ns3::Ptr<ns3::Socket>, const ns3::Address &, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImpl__Bool_Ns3Ptr__lt__ns3Socket__gt___Const_ns3Address___amp___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImpl__Bool_Ns3Ptr__lt__ns3Socket__gt___Const_ns3Address___amp___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImpl< ns3::ObjectBase *, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImpl__Ns3ObjectBase___star___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImpl__Ns3ObjectBase___star___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImpl< void, const ns3::Ipv4Address &, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImpl__Void_Const_ns3Ipv4Address___amp___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImpl__Void_Const_ns3Ipv4Address___amp___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImpl< void, ns3::Ptr<ns3::NetDevice>, ns3::Ptr<const ns3::Packet>, unsigned short, const ns3::Address &, const ns3::Address &, ns3::NetDevice::PacketType, ns3::empty, ns3::empty, ns3::empty >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImpl__Void_Ns3Ptr__lt__ns3NetDevice__gt___Ns3Ptr__lt__const_ns3Packet__gt___Unsigned_short_Const_ns3Address___amp___Const_ns3Address___amp___Ns3NetDevicePacketType_Ns3Empty_Ns3Empty_Ns3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImpl__Void_Ns3Ptr__lt__ns3NetDevice__gt___Ns3Ptr__lt__const_ns3Packet__gt___Unsigned_short_Const_ns3Address___amp___Const_ns3Address___amp___Ns3NetDevicePacketType_Ns3Empty_Ns3Empty_Ns3Empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImpl< void, ns3::Ptr<ns3::NetDevice>, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImpl__Void_Ns3Ptr__lt__ns3NetDevice__gt___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImpl__Void_Ns3Ptr__lt__ns3NetDevice__gt___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImpl< void, ns3::Ptr<ns3::Socket>, const ns3::Address &, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImpl__Void_Ns3Ptr__lt__ns3Socket__gt___Const_ns3Address___amp___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImpl__Void_Ns3Ptr__lt__ns3Socket__gt___Const_ns3Address___amp___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImpl< void, ns3::Ptr<ns3::Socket>, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImpl__Void_Ns3Ptr__lt__ns3Socket__gt___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImpl__Void_Ns3Ptr__lt__ns3Socket__gt___Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImpl< void, ns3::Ptr<ns3::Socket>, unsigned int, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImpl__Void_Ns3Ptr__lt__ns3Socket__gt___Unsigned_int_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImpl__Void_Ns3Ptr__lt__ns3Socket__gt___Unsigned_int_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImpl< void, ns3::Time, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImpl__Void_Ns3Time_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImpl__Void_Ns3Time_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty_Ns3Empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    PyModule_AddObject(m, (char *) "_PyNs3DefaultDeleter__Ns3RadvdInterface_wrapper_registry", PyCObject_FromVoidPtr(&PyNs3DefaultDeleter__Ns3RadvdInterface_wrapper_registry, NULL));
    /* Register the 'ns3::DefaultDeleter< ns3::RadvdInterface >' class */
    if (PyType_Ready(&PyNs3DefaultDeleter__Ns3RadvdInterface_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "DefaultDeleter__Ns3RadvdInterface", (PyObject *) &PyNs3DefaultDeleter__Ns3RadvdInterface_Type);
    PyModule_AddObject(m, (char *) "_PyNs3DefaultDeleter__Ns3RadvdPrefix_wrapper_registry", PyCObject_FromVoidPtr(&PyNs3DefaultDeleter__Ns3RadvdPrefix_wrapper_registry, NULL));
    /* Register the 'ns3::DefaultDeleter< ns3::RadvdPrefix >' class */
    if (PyType_Ready(&PyNs3DefaultDeleter__Ns3RadvdPrefix_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "DefaultDeleter__Ns3RadvdPrefix", (PyObject *) &PyNs3DefaultDeleter__Ns3RadvdPrefix_Type);
    PyModule_AddObject(m, (char *) "_PyNs3DhcpHelper_wrapper_registry", PyCObject_FromVoidPtr(&PyNs3DhcpHelper_wrapper_registry, NULL));
    /* Register the 'ns3::DhcpHelper' class */
    if (PyType_Ready(&PyNs3DhcpHelper_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "DhcpHelper", (PyObject *) &PyNs3DhcpHelper_Type);
    PyModule_AddObject(m, (char *) "_PyNs3Ping6Helper_wrapper_registry", PyCObject_FromVoidPtr(&PyNs3Ping6Helper_wrapper_registry, NULL));
    /* Register the 'ns3::Ping6Helper' class */
    if (PyType_Ready(&PyNs3Ping6Helper_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Ping6Helper", (PyObject *) &PyNs3Ping6Helper_Type);
    PyModule_AddObject(m, (char *) "_PyNs3RadvdHelper_wrapper_registry", PyCObject_FromVoidPtr(&PyNs3RadvdHelper_wrapper_registry, NULL));
    /* Register the 'ns3::RadvdHelper' class */
    if (PyType_Ready(&PyNs3RadvdHelper_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "RadvdHelper", (PyObject *) &PyNs3RadvdHelper_Type);
    PyModule_AddObject(m, (char *) "_PyNs3V4PingHelper_wrapper_registry", PyCObject_FromVoidPtr(&PyNs3V4PingHelper_wrapper_registry, NULL));
    /* Register the 'ns3::V4PingHelper' class */
    if (PyType_Ready(&PyNs3V4PingHelper_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "V4PingHelper", (PyObject *) &PyNs3V4PingHelper_Type);
    PyModule_AddObject(m, (char *) "_PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____typeid_map", PyCObject_FromVoidPtr(&PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____typeid_map, NULL));
    PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____typeid_map.register_wrapper(typeid(ns3::SimpleRefCount< ns3::RadvdInterface, ns3::empty, ns3::DefaultDeleter<ns3::RadvdInterface> >), &PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type);
    /* Register the 'ns3::SimpleRefCount< ns3::RadvdInterface, ns3::empty, ns3::DefaultDeleter<ns3::RadvdInterface> >' class */
    PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type.tp_base = &PyNs3Empty_Type;
    if (PyType_Ready(&PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt__", (PyObject *) &PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type);
    PyModule_AddObject(m, (char *) "_PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____typeid_map", PyCObject_FromVoidPtr(&PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____typeid_map, NULL));
    PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____typeid_map.register_wrapper(typeid(ns3::SimpleRefCount< ns3::RadvdPrefix, ns3::empty, ns3::DefaultDeleter<ns3::RadvdPrefix> >), &PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type);
    /* Register the 'ns3::SimpleRefCount< ns3::RadvdPrefix, ns3::empty, ns3::DefaultDeleter<ns3::RadvdPrefix> >' class */
    PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type.tp_base = &PyNs3Empty_Type;
    if (PyType_Ready(&PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt__", (PyObject *) &PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::DhcpClient), &PyNs3DhcpClient_Type);
    /* Register the 'ns3::DhcpClient' class */
    PyNs3DhcpClient_Type.tp_base = &PyNs3Application_Type;
    if (PyType_Ready(&PyNs3DhcpClient_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "DhcpClient", (PyObject *) &PyNs3DhcpClient_Type);
    /* Register the 'ns3::DhcpHeader' class */
    PyNs3DhcpHeader_Type.tp_base = &PyNs3Header_Type;
    if (PyType_Ready(&PyNs3DhcpHeader_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "DhcpHeader", (PyObject *) &PyNs3DhcpHeader_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::DhcpServer), &PyNs3DhcpServer_Type);
    /* Register the 'ns3::DhcpServer' class */
    PyNs3DhcpServer_Type.tp_base = &PyNs3Application_Type;
    if (PyType_Ready(&PyNs3DhcpServer_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "DhcpServer", (PyObject *) &PyNs3DhcpServer_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::Ping6), &PyNs3Ping6_Type);
    /* Register the 'ns3::Ping6' class */
    PyNs3Ping6_Type.tp_base = &PyNs3Application_Type;
    if (PyType_Ready(&PyNs3Ping6_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Ping6", (PyObject *) &PyNs3Ping6_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::Radvd), &PyNs3Radvd_Type);
    /* Register the 'ns3::Radvd' class */
    
    PyNs3RadvdMeta_Type.tp_base = Py_TYPE(&PyNs3Application_Type);
    /* Some fields need to be manually inheritted from the parent metaclass */
    PyNs3RadvdMeta_Type.tp_traverse = Py_TYPE(&PyNs3Application_Type)->tp_traverse;
    PyNs3RadvdMeta_Type.tp_clear = Py_TYPE(&PyNs3Application_Type)->tp_clear;
    PyNs3RadvdMeta_Type.tp_is_gc = Py_TYPE(&PyNs3Application_Type)->tp_is_gc;
    /* PyType tp_setattro is too restrictive */
    PyNs3RadvdMeta_Type.tp_setattro = PyObject_GenericSetAttr;
    PyType_Ready(&PyNs3RadvdMeta_Type);
    
    PyNs3Radvd_Type.tp_base = &PyNs3Application_Type;
    Py_TYPE(&PyNs3Radvd_Type) = &PyNs3RadvdMeta_Type;
    if (PyType_Ready(&PyNs3Radvd_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Radvd", (PyObject *) &PyNs3Radvd_Type);
    PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt____typeid_map.register_wrapper(typeid(ns3::RadvdInterface), &PyNs3RadvdInterface_Type);
    /* Register the 'ns3::RadvdInterface' class */
    PyNs3RadvdInterface_Type.tp_base = &PyNs3SimpleRefCount__Ns3RadvdInterface_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdInterface__gt___Type;
    if (PyType_Ready(&PyNs3RadvdInterface_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "RadvdInterface", (PyObject *) &PyNs3RadvdInterface_Type);
    PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt____typeid_map.register_wrapper(typeid(ns3::RadvdPrefix), &PyNs3RadvdPrefix_Type);
    /* Register the 'ns3::RadvdPrefix' class */
    PyNs3RadvdPrefix_Type.tp_base = &PyNs3SimpleRefCount__Ns3RadvdPrefix_Ns3Empty_Ns3DefaultDeleter__lt__ns3RadvdPrefix__gt___Type;
    if (PyType_Ready(&PyNs3RadvdPrefix_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "RadvdPrefix", (PyObject *) &PyNs3RadvdPrefix_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::V4Ping), &PyNs3V4Ping_Type);
    /* Register the 'ns3::V4Ping' class */
    PyNs3V4Ping_Type.tp_base = &PyNs3Application_Type;
    if (PyType_Ready(&PyNs3V4Ping_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "V4Ping", (PyObject *) &PyNs3V4Ping_Type);
    /* Register the 'std::vector< ns3::Ipv6Address >' class */
    if (PyType_Ready(&Pystd__vector__lt___ns3__Ipv6Address___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__vector__lt___ns3__Ipv6Address___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__Ipv6Address___gt__", (PyObject *) &Pystd__vector__lt___ns3__Ipv6Address___gt___Type);
    PyModule_AddObject(m, (char *) "Std__vector__lt___ns3__Ipv6Address___gt__Iter", (PyObject *) &Pystd__vector__lt___ns3__Ipv6Address___gt__Iter_Type);
    /* Register the 'std::map< unsigned int, unsigned int >' class */
    if (PyType_Ready(&Pystd__map__lt___unsigned_int__unsigned_int___gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__map__lt___unsigned_int__unsigned_int___gt__", (PyObject *) &Pystd__map__lt___unsigned_int__unsigned_int___gt___Type);
    PyModule_AddObject(m, (char *) "Std__map__lt___unsigned_int__unsigned_int___gt__Iter", (PyObject *) &Pystd__map__lt___unsigned_int__unsigned_int___gt__Iter_Type);
    /* Register the 'std::list< ns3::Ptr< ns3::RadvdPrefix > >' class */
    if (PyType_Ready(&Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt___Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__", (PyObject *) &Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt___Type);
    PyModule_AddObject(m, (char *) "Std__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter", (PyObject *) &Pystd__list__lt___ns3__Ptr__lt___ns3__RadvdPrefix___gt_____gt__Iter_Type);
    /* Register the 'ns3::RadvdInterface::RadvdPrefixList' class */
    if (PyType_Ready(&Pyns3__RadvdInterface__RadvdPrefixList_Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pyns3__RadvdInterface__RadvdPrefixListIter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Ns3__RadvdInterface__RadvdPrefixList", (PyObject *) &Pyns3__RadvdInterface__RadvdPrefixList_Type);
    PyModule_AddObject(m, (char *) "Ns3__RadvdInterface__RadvdPrefixListIter", (PyObject *) &Pyns3__RadvdInterface__RadvdPrefixListIter_Type);
    {
        PyObject *tmp_value;
         // ns3::DhcpHeader::OP_MASK
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::OP_MASK);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "OP_MASK", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::OP_ROUTE
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::OP_ROUTE);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "OP_ROUTE", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::OP_ADDREQ
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::OP_ADDREQ);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "OP_ADDREQ", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::OP_LEASE
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::OP_LEASE);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "OP_LEASE", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::OP_MSGTYPE
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::OP_MSGTYPE);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "OP_MSGTYPE", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::OP_SERVID
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::OP_SERVID);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "OP_SERVID", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::OP_RENEW
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::OP_RENEW);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "OP_RENEW", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::OP_REBIND
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::OP_REBIND);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "OP_REBIND", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::OP_END
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::OP_END);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "OP_END", tmp_value);
        Py_DECREF(tmp_value);
    }
    {
        PyObject *tmp_value;
         // ns3::DhcpHeader::DHCPDISCOVER
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::DHCPDISCOVER);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "DHCPDISCOVER", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::DHCPOFFER
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::DHCPOFFER);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "DHCPOFFER", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::DHCPREQ
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::DHCPREQ);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "DHCPREQ", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::DHCPACK
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::DHCPACK);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "DHCPACK", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::DhcpHeader::DHCPNACK
        tmp_value = PyLong_FromLong(ns3::DhcpHeader::DHCPNACK);
        PyDict_SetItemString((PyObject*) PyNs3DhcpHeader_Type.tp_dict, "DHCPNACK", tmp_value);
        Py_DECREF(tmp_value);
    }
    submodule = initinternet_apps_FatalImpl();
    if (submodule == NULL) {
        return MOD_ERROR;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "FatalImpl", submodule);
    submodule = initinternet_apps_Hash();
    if (submodule == NULL) {
        return MOD_ERROR;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "Hash", submodule);
    submodule = initinternet_apps_TracedValueCallback();
    if (submodule == NULL) {
        return MOD_ERROR;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "TracedValueCallback", submodule);
    submodule = initinternet_apps_internal();
    if (submodule == NULL) {
        return MOD_ERROR;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "internal", submodule);
    return MOD_RETURN(m);
}
