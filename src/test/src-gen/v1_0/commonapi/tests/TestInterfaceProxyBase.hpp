/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.1.v201505270851.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_Test_Interface_PROXY_BASE_HPP_
#define COMMONAPI_TESTS_Test_Interface_PROXY_BASE_HPP_

#include <v1_0/commonapi/tests/TestInterface.hpp>


#include <commonapi/tests/DerivedTypeCollection.hpp>
#include <commonapi/tests/PredefinedTypeCollection.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Struct.hpp>
#include <cstdint>
#include <unordered_map>
#include <vector>

#include <CommonAPI/Attribute.hpp>
#include <CommonAPI/Event.hpp>
#include <CommonAPI/SelectiveEvent.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace commonapi {
namespace tests {

class TestInterfaceProxyBase
    : virtual public CommonAPI::Proxy {
public:
    typedef CommonAPI::ObservableAttribute<uint32_t> TestPredefinedTypeAttributeAttribute;
    typedef CommonAPI::ObservableAttribute<::commonapi::tests::DerivedTypeCollection::TestStructExtended> TestDerivedStructAttributeAttribute;
    typedef CommonAPI::ObservableAttribute<::commonapi::tests::DerivedTypeCollection::TestArrayUInt64> TestDerivedArrayAttributeAttribute;
    typedef CommonAPI::Event<
        uint32_t, std::string
    > TestPredefinedTypeBroadcastEvent;
    typedef CommonAPI::SelectiveEvent<> TestSelectiveBroadcastSelectiveEvent;
    typedef CommonAPI::SelectiveEvent<uint32_t, std::string> TestBroadcastWithOutArgsSelectiveEvent;

    typedef std::function<void(const CommonAPI::CallStatus&)> TestEmptyMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> TestVoidPredefinedTypeMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const uint32_t&, const std::string&)> TestPredefinedTypeMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> TestVoidDerivedTypeMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const ::commonapi::tests::DerivedTypeCollection::TestEnumExtended2&, const ::commonapi::tests::DerivedTypeCollection::TestMap&)> TestDerivedTypeMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> TestArrayOfPolymorphicStructMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> TestMapOfPolymorphicStructMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> TestStructWithPolymorphicMemberMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> TestStructWithEnumKeyMapMemberAsyncCallback;

    virtual TestPredefinedTypeAttributeAttribute& getTestPredefinedTypeAttributeAttribute() = 0;
    virtual TestDerivedStructAttributeAttribute& getTestDerivedStructAttributeAttribute() = 0;
    virtual TestDerivedArrayAttributeAttribute& getTestDerivedArrayAttributeAttribute() = 0;

    virtual TestPredefinedTypeBroadcastEvent& getTestPredefinedTypeBroadcastEvent() = 0;
    virtual TestSelectiveBroadcastSelectiveEvent& getTestSelectiveBroadcastSelectiveEvent() = 0;
    virtual TestBroadcastWithOutArgsSelectiveEvent& getTestBroadcastWithOutArgsSelectiveEvent() = 0;

    virtual void testEmptyMethod(CommonAPI::CallStatus &_status, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> testEmptyMethodAsync(TestEmptyMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void testVoidPredefinedTypeMethod(const uint32_t &_uint32Value, const std::string &_stringValue, CommonAPI::CallStatus &_status, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> testVoidPredefinedTypeMethodAsync(const uint32_t &_uint32Value, const std::string &_stringValue, TestVoidPredefinedTypeMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void testPredefinedTypeMethod(const uint32_t &_uint32InValue, const std::string &_stringInValue, CommonAPI::CallStatus &_status, uint32_t &_uint32OutValue, std::string &_stringOutValue, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> testPredefinedTypeMethodAsync(const uint32_t &_uint32InValue, const std::string &_stringInValue, TestPredefinedTypeMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void testVoidDerivedTypeMethod(const ::commonapi::tests::DerivedTypeCollection::TestEnumExtended2 &_testEnumExtended2Value, const ::commonapi::tests::DerivedTypeCollection::TestMap &_testMapValue, CommonAPI::CallStatus &_status, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> testVoidDerivedTypeMethodAsync(const ::commonapi::tests::DerivedTypeCollection::TestEnumExtended2 &_testEnumExtended2Value, const ::commonapi::tests::DerivedTypeCollection::TestMap &_testMapValue, TestVoidDerivedTypeMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void testDerivedTypeMethod(const ::commonapi::tests::DerivedTypeCollection::TestEnumExtended2 &_testEnumExtended2InValue, const ::commonapi::tests::DerivedTypeCollection::TestMap &_testMapInValue, CommonAPI::CallStatus &_status, ::commonapi::tests::DerivedTypeCollection::TestEnumExtended2 &_testEnumExtended2OutValue, ::commonapi::tests::DerivedTypeCollection::TestMap &_testMapOutValue, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> testDerivedTypeMethodAsync(const ::commonapi::tests::DerivedTypeCollection::TestEnumExtended2 &_testEnumExtended2InValue, const ::commonapi::tests::DerivedTypeCollection::TestMap &_testMapInValue, TestDerivedTypeMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void TestArrayOfPolymorphicStructMethod(const std::vector<std::shared_ptr<::commonapi::tests::DerivedTypeCollection::TestPolymorphicStruct>> &_inArray, CommonAPI::CallStatus &_status, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> TestArrayOfPolymorphicStructMethodAsync(const std::vector<std::shared_ptr<::commonapi::tests::DerivedTypeCollection::TestPolymorphicStruct>> &_inArray, TestArrayOfPolymorphicStructMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void TestMapOfPolymorphicStructMethod(const ::commonapi::tests::DerivedTypeCollection::MapIntToPolymorphic &_inMap, CommonAPI::CallStatus &_status, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> TestMapOfPolymorphicStructMethodAsync(const ::commonapi::tests::DerivedTypeCollection::MapIntToPolymorphic &_inMap, TestMapOfPolymorphicStructMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void TestStructWithPolymorphicMemberMethod(const ::commonapi::tests::DerivedTypeCollection::StructWithPolymorphicMember &_inStruct, CommonAPI::CallStatus &_status, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> TestStructWithPolymorphicMemberMethodAsync(const ::commonapi::tests::DerivedTypeCollection::StructWithPolymorphicMember &_inStruct, TestStructWithPolymorphicMemberMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void TestStructWithEnumKeyMapMember(const ::commonapi::tests::DerivedTypeCollection::StructWithEnumKeyMap &_inStruct, CommonAPI::CallStatus &_status, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> TestStructWithEnumKeyMapMemberAsync(const ::commonapi::tests::DerivedTypeCollection::StructWithEnumKeyMap &_inStruct, TestStructWithEnumKeyMapMemberAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace tests
} // namespace commonapi
} // namespace v1_0

#endif // COMMONAPI_TESTS_Test_Interface_PROXY_BASE_HPP_
