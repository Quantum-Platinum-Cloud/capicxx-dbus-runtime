/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.1.v201505270851.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_Test_Interface_STUB_DEFAULT_HPP_
#define COMMONAPI_TESTS_Test_Interface_STUB_DEFAULT_HPP_


#include <v1_0/commonapi/tests/TestInterfaceStub.hpp>
#include <sstream>

namespace v1_0 {
namespace commonapi {
namespace tests {

/**
 * Provides a default implementation for TestInterfaceStubRemoteEvent and
 * TestInterfaceStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class TestInterfaceStubDefault
    : public virtual TestInterfaceStub {
public:
    TestInterfaceStubDefault();

    TestInterfaceStubRemoteEvent* initStubAdapter(const std::shared_ptr<TestInterfaceStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);

    virtual const uint32_t& getTestPredefinedTypeAttributeAttribute();
    virtual const uint32_t& getTestPredefinedTypeAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setTestPredefinedTypeAttributeAttribute(uint32_t _value);
    virtual void setTestPredefinedTypeAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);
    virtual const ::commonapi::tests::DerivedTypeCollection::TestStructExtended& getTestDerivedStructAttributeAttribute();
    virtual const ::commonapi::tests::DerivedTypeCollection::TestStructExtended& getTestDerivedStructAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setTestDerivedStructAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestStructExtended _value);
    virtual void setTestDerivedStructAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::TestStructExtended _value);
    virtual const ::commonapi::tests::DerivedTypeCollection::TestArrayUInt64& getTestDerivedArrayAttributeAttribute();
    virtual const ::commonapi::tests::DerivedTypeCollection::TestArrayUInt64& getTestDerivedArrayAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client);
    virtual void setTestDerivedArrayAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 _value);
    virtual void setTestDerivedArrayAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 _value);

    virtual void testEmptyMethod(const std::shared_ptr<CommonAPI::ClientId> _client, testEmptyMethodReply_t _reply);
    virtual void testVoidPredefinedTypeMethod(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _uint32Value, std::string _stringValue, testVoidPredefinedTypeMethodReply_t _reply);
    virtual void testPredefinedTypeMethod(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _uint32InValue, std::string _stringInValue, testPredefinedTypeMethodReply_t _reply);
    virtual void testVoidDerivedTypeMethod(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::TestEnumExtended2 _testEnumExtended2Value, ::commonapi::tests::DerivedTypeCollection::TestMap _testMapValue, testVoidDerivedTypeMethodReply_t _reply);
    virtual void testDerivedTypeMethod(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::TestEnumExtended2 _testEnumExtended2InValue, ::commonapi::tests::DerivedTypeCollection::TestMap _testMapInValue, testDerivedTypeMethodReply_t _reply);
    virtual void TestArrayOfPolymorphicStructMethod(const std::shared_ptr<CommonAPI::ClientId> _client, std::vector<std::shared_ptr<::commonapi::tests::DerivedTypeCollection::TestPolymorphicStruct>> _inArray, TestArrayOfPolymorphicStructMethodReply_t _reply);
    virtual void TestMapOfPolymorphicStructMethod(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::MapIntToPolymorphic _inMap, TestMapOfPolymorphicStructMethodReply_t _reply);
    virtual void TestStructWithPolymorphicMemberMethod(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::StructWithPolymorphicMember _inStruct, TestStructWithPolymorphicMemberMethodReply_t _reply);
    virtual void TestStructWithEnumKeyMapMember(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::StructWithEnumKeyMap _inStruct, TestStructWithEnumKeyMapMemberReply_t _reply);

virtual void fireTestPredefinedTypeBroadcastEvent(const uint32_t &_uint32Value, const std::string &_stringValue);
virtual void fireTestSelectiveBroadcastSelective(const std::shared_ptr<CommonAPI::ClientIdList> _receivers = nullptr);
virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForTestSelectiveBroadcastSelective();
/// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
virtual void onTestSelectiveBroadcastSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event);
/// Hook method for reacting accepting or denying new subscriptions 
virtual bool onTestSelectiveBroadcastSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client);
virtual void fireTestBroadcastWithOutArgsSelective(const uint32_t &_uint32Value, const std::string &_stringValue, const std::shared_ptr<CommonAPI::ClientIdList> _receivers = nullptr);
virtual std::shared_ptr<CommonAPI::ClientIdList> const getSubscribersForTestBroadcastWithOutArgsSelective();
/// Hook method for reacting on new subscriptions or removed subscriptions respectively for selective broadcasts.
virtual void onTestBroadcastWithOutArgsSelectiveSubscriptionChanged(const std::shared_ptr<CommonAPI::ClientId> _client, const CommonAPI::SelectiveBroadcastSubscriptionEvent _event);
/// Hook method for reacting accepting or denying new subscriptions 
virtual bool onTestBroadcastWithOutArgsSelectiveSubscriptionRequested(const std::shared_ptr<CommonAPI::ClientId> _client);


protected:
    virtual bool trySetTestPredefinedTypeAttributeAttribute(uint32_t _value);
    virtual bool validateTestPredefinedTypeAttributeAttributeRequestedValue(const uint32_t &_value);
    virtual void onRemoteTestPredefinedTypeAttributeAttributeChanged();
    virtual bool trySetTestDerivedStructAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestStructExtended _value);
    virtual bool validateTestDerivedStructAttributeAttributeRequestedValue(const ::commonapi::tests::DerivedTypeCollection::TestStructExtended &_value);
    virtual void onRemoteTestDerivedStructAttributeAttributeChanged();
    virtual bool trySetTestDerivedArrayAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 _value);
    virtual bool validateTestDerivedArrayAttributeAttributeRequestedValue(const ::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 &_value);
    virtual void onRemoteTestDerivedArrayAttributeAttributeChanged();
    class RemoteEventHandler: public virtual TestInterfaceStubRemoteEvent {
    public:
        RemoteEventHandler(TestInterfaceStubDefault *_defaultStub);

        virtual bool onRemoteSetTestPredefinedTypeAttributeAttribute(uint32_t _value);
        virtual bool onRemoteSetTestPredefinedTypeAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value);
        virtual void onRemoteTestPredefinedTypeAttributeAttributeChanged();

        virtual bool onRemoteSetTestDerivedStructAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestStructExtended _value);
        virtual bool onRemoteSetTestDerivedStructAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::TestStructExtended _value);
        virtual void onRemoteTestDerivedStructAttributeAttributeChanged();

        virtual bool onRemoteSetTestDerivedArrayAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 _value);
        virtual bool onRemoteSetTestDerivedArrayAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 _value);
        virtual void onRemoteTestDerivedArrayAttributeAttributeChanged();


    private:
        TestInterfaceStubDefault *defaultStub_;
    };
private:
    TestInterfaceStubDefault::RemoteEventHandler remoteEventHandler_;

    uint32_t testPredefinedTypeAttributeAttributeValue_;
    ::commonapi::tests::DerivedTypeCollection::TestStructExtended testDerivedStructAttributeAttributeValue_;
    ::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 testDerivedArrayAttributeAttributeValue_;

    CommonAPI::Version interfaceVersion_;
};

} // namespace tests
} // namespace commonapi
} // namespace v1_0

#endif // COMMONAPI_TESTS_Test_Interface_STUB_DEFAULT
