/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V1_COMMONAPI_IPC_MANAGER_SOMEIP_STUB_ADAPTER_HPP_
#define V1_COMMONAPI_IPC_MANAGER_SOMEIP_STUB_ADAPTER_HPP_

#include <v1/commonapi/IPCManagerStub.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

template <typename _Stub = ::v1::commonapi::IPCManagerStub, typename... _Stubs>
class IPCManagerSomeIPStubAdapterInternal
    : public virtual IPCManagerStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>,
      public std::enable_shared_from_this< IPCManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> IPCManagerSomeIPStubAdapterHelper;

    ~IPCManagerSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        IPCManagerSomeIPStubAdapterHelper::deinit();
    }

    void deactivateManagedInstances() {}
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        CommonAPI::Version
    > getIPCManagerInterfaceVersionStubDispatcher;

    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setSensorRpmStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setBatteryLevelStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setGearModeStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setDirectionStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< std::string>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setLightStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< double>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::EmptyDeployment>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setThrottleStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< double>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::EmptyDeployment>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setSteeringStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setDistanceStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< std::string>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > getGearModeStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< std::string>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > getDirectionStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< std::string>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > getLightStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::IPCManagerStub,
        std::tuple< std::string>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > getSteeringStubDispatcher;
    
    IPCManagerSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        IPCManagerSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< IPCManagerStub>(_stub)),
        getIPCManagerInterfaceVersionStubDispatcher(&IPCManagerStub::lockInterfaceVersionAttribute, &IPCManagerStub::getInterfaceVersion, false, true),
        setSensorRpmStubDispatcher(
            &IPCManagerStub::setSensorRpm,
            false,
            _stub->hasElement(0),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setBatteryLevelStubDispatcher(
            &IPCManagerStub::setBatteryLevel,
            false,
            _stub->hasElement(1),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setGearModeStubDispatcher(
            &IPCManagerStub::setGearMode,
            false,
            _stub->hasElement(2),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setDirectionStubDispatcher(
            &IPCManagerStub::setDirection,
            false,
            _stub->hasElement(3),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setLightStubDispatcher(
            &IPCManagerStub::setLight,
            false,
            _stub->hasElement(4),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setThrottleStubDispatcher(
            &IPCManagerStub::setThrottle,
            false,
            _stub->hasElement(5),
            std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setSteeringStubDispatcher(
            &IPCManagerStub::setSteering,
            false,
            _stub->hasElement(6),
            std::make_tuple(static_cast< CommonAPI::EmptyDeployment* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setDistanceStubDispatcher(
            &IPCManagerStub::setDistance,
            false,
            _stub->hasElement(7),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        getGearModeStubDispatcher(
            &IPCManagerStub::getGearMode,
            false,
            _stub->hasElement(8),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        getDirectionStubDispatcher(
            &IPCManagerStub::getDirection,
            false,
            _stub->hasElement(9),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        getLightStubDispatcher(
            &IPCManagerStub::getLight,
            false,
            _stub->hasElement(10),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        getSteeringStubDispatcher(
            &IPCManagerStub::getSteering,
            false,
            _stub->hasElement(11),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
    {
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x64) }, &setSensorRpmStubDispatcher );
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x65) }, &setBatteryLevelStubDispatcher );
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x66) }, &setGearModeStubDispatcher );
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x67) }, &setDirectionStubDispatcher );
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x68) }, &setLightStubDispatcher );
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x69) }, &setThrottleStubDispatcher );
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x6a) }, &setSteeringStubDispatcher );
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x6b) }, &setDistanceStubDispatcher );
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x6c) }, &getGearModeStubDispatcher );
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x6d) }, &getDirectionStubDispatcher );
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x6e) }, &getLightStubDispatcher );
        IPCManagerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x6f) }, &getSteeringStubDispatcher );
        // Provided events/fields
    }

    // Register/Unregister event handlers for selective broadcasts
    void registerSelectiveEventHandlers();
    void unregisterSelectiveEventHandlers();

};


template <typename _Stub, typename... _Stubs>
void IPCManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>::registerSelectiveEventHandlers() {
}

template <typename _Stub, typename... _Stubs>
void IPCManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>::unregisterSelectiveEventHandlers() {
}

template <typename _Stub = ::v1::commonapi::IPCManagerStub, typename... _Stubs>
class IPCManagerSomeIPStubAdapter
    : public IPCManagerSomeIPStubAdapterInternal<_Stub, _Stubs...> {
public:
    IPCManagerSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          IPCManagerSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_IPC_Manager_SOMEIP_STUB_ADAPTER_HPP_
