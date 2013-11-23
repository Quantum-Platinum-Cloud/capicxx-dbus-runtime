<<<<<<< Upstream, based on origin/master
/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include "TestInterfaceDBusStubAdapter.h"
#include <commonapi/tests/TestInterface.h>
=======
  /*
  * This file was generated by the CommonAPI Generators. 
  * Used org.genivi.commonapi.core 2.1.4.qualifier.
  * Used org.franca.core 0.8.10.201309262002.
  *
  * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
  * If a copy of the MPL was not distributed with this file, You can obtain one at
  * http://mozilla.org/MPL/2.0/.
  */
  #include "TestInterfaceDBusStubAdapter.h"
  #include <commonapi/tests/TestInterface.h>
>>>>>>> 555557d Fix for inherited interfaces and tests for that including generated code

  namespace commonapi {
  namespace tests {

  std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createTestInterfaceDBusStubAdapter(
                     const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                     const std::string& commonApiAddress,
                     const std::string& interfaceName,
                     const std::string& busName,
                     const std::string& objectPath,
                     const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection,
                     const std::shared_ptr<CommonAPI::StubBase>& stubBase) {
      return std::make_shared<TestInterfaceDBusStubAdapter>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection, stubBase);
  }

<<<<<<< Upstream, based on origin/master
__attribute__((constructor)) void registerTestInterfaceDBusStubAdapter(void) {
    CommonAPI::DBus::DBusFactory::registerAdapterFactoryMethod(TestInterface::getInterfaceId(),
                                                               &createTestInterfaceDBusStubAdapter);
}

TestInterfaceDBusStubAdapter::TestInterfaceDBusStubAdapter(
        const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
        const std::string& commonApiAddress,
        const std::string& dbusInterfaceName,
        const std::string& dbusBusName,
        const std::string& dbusObjectPath,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
        const std::shared_ptr<CommonAPI::StubBase>& stub):
        TestInterfaceDBusStubAdapterHelper(factory, commonApiAddress, dbusInterfaceName, dbusBusName, dbusObjectPath, 
            dbusConnection, std::dynamic_pointer_cast<TestInterfaceStub>(stub),
            false) {
    subscribersForTestSelectiveBroadcastSelective_ = std::make_shared<CommonAPI::ClientIdList>();
    subscribersForTestBroadcastWithOutArgsSelective_ = std::make_shared<CommonAPI::ClientIdList>();
}

TestInterfaceDBusStubAdapter::~TestInterfaceDBusStubAdapter() {
    deactivateManagedInstances();
    deinit();
    stub_.reset();
}

void TestInterfaceDBusStubAdapter::deactivateManagedInstances() {
}

const char* TestInterfaceDBusStubAdapter::getMethodsDBusIntrospectionXmlData() const {
    static const char* introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"getTestPredefinedTypeAttributeAttribute\">\n"
            "<arg name=\"value\" type=\"u\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setTestPredefinedTypeAttributeAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"u\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onTestPredefinedTypeAttributeAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"u\" />\n"
        "</signal>\n"
        "<method name=\"getTestDerivedStructAttributeAttribute\">\n"
            "<arg name=\"value\" type=\"(sqi)\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setTestDerivedStructAttributeAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"(sqi)\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"(sqi)\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onTestDerivedStructAttributeAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"(sqi)\" />\n"
        "</signal>\n"
        "<method name=\"getTestDerivedArrayAttributeAttribute\">\n"
            "<arg name=\"value\" type=\"at\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"setTestDerivedArrayAttributeAttribute\">\n"
            "<arg name=\"requestedValue\" type=\"at\" direction=\"in\" />\n"
            "<arg name=\"setValue\" type=\"at\" direction=\"out\" />\n"
        "</method>\n"
        "<signal name=\"onTestDerivedArrayAttributeAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"at\" />\n"
        "</signal>\n"
        "<signal name=\"TestPredefinedTypeBroadcast\">\n"
            "<arg name=\"uint32Value\" type=\"u\" />\n"
            "<arg name=\"stringValue\" type=\"s\" />\n"
        "</signal>\n"
        "<signal name=\"TestSelectiveBroadcast\">\n"
        "</signal>\n"
        "<signal name=\"TestBroadcastWithOutArgs\">\n"
            "<arg name=\"uint32Value\" type=\"u\" />\n"
            "<arg name=\"stringValue\" type=\"s\" />\n"
        "</signal>\n"
        "<method name=\"testEmptyMethod\">\n"
        "</method>\n"
        "<method name=\"testVoidPredefinedTypeMethod\">\n"
            "<arg name=\"uint32Value\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"stringValue\" type=\"s\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"testPredefinedTypeMethod\">\n"
            "<arg name=\"uint32InValue\" type=\"u\" direction=\"in\" />\n"
            "<arg name=\"stringInValue\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"uint32OutValue\" type=\"u\" direction=\"out\" />\n"
            "<arg name=\"stringOutValue\" type=\"s\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"testVoidDerivedTypeMethod\">\n"
            "<arg name=\"testEnumExtended2Value\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"testMapValue\" type=\"a{ua(sq)}\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"testDerivedTypeMethod\">\n"
            "<arg name=\"testEnumExtended2InValue\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"testMapInValue\" type=\"a{ua(sq)}\" direction=\"in\" />\n"
            "<arg name=\"testEnumExtended2OutValue\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"testMapOutValue\" type=\"a{ua(sq)}\" direction=\"out\" />\n"
        "</method>\n"
        "<method name=\"TestArrayOfPolymorphicStructMethod\">\n"
            "<arg name=\"inArray\" type=\"a(uv)\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"TestMapOfPolymorphicStructMethod\">\n"
            "<arg name=\"inMap\" type=\"a{y(uv)}\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"TestStructWithPolymorphicMemberMethod\">\n"
            "<arg name=\"inStruct\" type=\"(u(uv))\" direction=\"in\" />\n"
        "</method>\n"
        "<method name=\"TestStructWithEnumKeyMapMember\">\n"
            "<arg name=\"inStruct\" type=\"(a{is})\" direction=\"in\" />\n"
        "</method>\n"
        
    ;
    return introspectionData;
}
=======
  __attribute__((constructor)) void registerTestInterfaceDBusStubAdapter(void) {
      CommonAPI::DBus::DBusFactory::registerAdapterFactoryMethod(TestInterface::getInterfaceId(),
                                                                 &createTestInterfaceDBusStubAdapter);
  }
>>>>>>> 555557d Fix for inherited interfaces and tests for that including generated code

    static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
            TestInterfaceStub,
            CommonAPI::Version
            > getInterfaceVersionStubDispatcher(&TestInterfaceStub::getInterfaceVersion, "uu");


  TestInterfaceDBusStubAdapterInternal::~TestInterfaceDBusStubAdapterInternal() {
      deactivateManagedInstances();
      TestInterfaceDBusStubAdapterHelper::deinit();
      TestInterfaceDBusStubAdapterHelper::stub_.reset();
  }
  
  void TestInterfaceDBusStubAdapterInternal::deactivateManagedInstances() {
  }

  const char* TestInterfaceDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
      static const std::string introspectionData =
          "<method name=\"getTestPredefinedTypeAttributeAttribute\">\n"
              "<arg name=\"value\" type=\"u\" direction=\"out\" />"
          "</method>\n"
          "<method name=\"setTestPredefinedTypeAttributeAttribute\">\n"
              "<arg name=\"requestedValue\" type=\"u\" direction=\"in\" />\n"
              "<arg name=\"setValue\" type=\"u\" direction=\"out\" />\n"
          "</method>\n"
          "<signal name=\"onTestPredefinedTypeAttributeAttributeChanged\">\n"
              "<arg name=\"changedValue\" type=\"u\" />\n"
          "</signal>\n"
          "<method name=\"getTestDerivedStructAttributeAttribute\">\n"
              "<arg name=\"value\" type=\"(sqi)\" direction=\"out\" />"
          "</method>\n"
          "<method name=\"setTestDerivedStructAttributeAttribute\">\n"
              "<arg name=\"requestedValue\" type=\"(sqi)\" direction=\"in\" />\n"
              "<arg name=\"setValue\" type=\"(sqi)\" direction=\"out\" />\n"
          "</method>\n"
          "<signal name=\"onTestDerivedStructAttributeAttributeChanged\">\n"
              "<arg name=\"changedValue\" type=\"(sqi)\" />\n"
          "</signal>\n"
          "<method name=\"getTestDerivedArrayAttributeAttribute\">\n"
              "<arg name=\"value\" type=\"at\" direction=\"out\" />"
          "</method>\n"
          "<method name=\"setTestDerivedArrayAttributeAttribute\">\n"
              "<arg name=\"requestedValue\" type=\"at\" direction=\"in\" />\n"
              "<arg name=\"setValue\" type=\"at\" direction=\"out\" />\n"
          "</method>\n"
          "<signal name=\"onTestDerivedArrayAttributeAttributeChanged\">\n"
              "<arg name=\"changedValue\" type=\"at\" />\n"
          "</signal>\n"
          "<signal name=\"TestPredefinedTypeBroadcast\">\n"
              "<arg name=\"uint32Value\" type=\"u\" />\n"
              "<arg name=\"stringValue\" type=\"s\" />\n"
          "</signal>\n"
          "<signal name=\"TestSelectiveBroadcast\">\n"
          "</signal>\n"
          "<signal name=\"TestBroadcastWithOutArgs\">\n"
              "<arg name=\"uint32Value\" type=\"u\" />\n"
              "<arg name=\"stringValue\" type=\"s\" />\n"
          "</signal>\n"
          "<method name=\"testEmptyMethod\">\n"
          "</method>\n"
          "<method name=\"testVoidPredefinedTypeMethod\">\n"
              "<arg name=\"uint32Value\" type=\"u\" direction=\"in\" />\n"
              "<arg name=\"stringValue\" type=\"s\" direction=\"in\" />\n"
          "</method>\n"
          "<method name=\"testPredefinedTypeMethod\">\n"
              "<arg name=\"uint32InValue\" type=\"u\" direction=\"in\" />\n"
              "<arg name=\"stringInValue\" type=\"s\" direction=\"in\" />\n"
              "<arg name=\"uint32OutValue\" type=\"u\" direction=\"out\" />\n"
              "<arg name=\"stringOutValue\" type=\"s\" direction=\"out\" />\n"
          "</method>\n"
          "<method name=\"testVoidDerivedTypeMethod\">\n"
              "<arg name=\"testEnumExtended2Value\" type=\"i\" direction=\"in\" />\n"
              "<arg name=\"testMapValue\" type=\"a{ua(sq)}\" direction=\"in\" />\n"
          "</method>\n"
          "<method name=\"testDerivedTypeMethod\">\n"
              "<arg name=\"testEnumExtended2InValue\" type=\"i\" direction=\"in\" />\n"
              "<arg name=\"testMapInValue\" type=\"a{ua(sq)}\" direction=\"in\" />\n"
              "<arg name=\"testEnumExtended2OutValue\" type=\"i\" direction=\"out\" />\n"
              "<arg name=\"testMapOutValue\" type=\"a{ua(sq)}\" direction=\"out\" />\n"
          "</method>\n"
          "<method name=\"TestArrayOfPolymorphicStructMethod\">\n"
              "<arg name=\"inArray\" type=\"a(uv)\" direction=\"in\" />\n"
          "</method>\n"
          "<method name=\"TestMapOfPolymorphicStructMethod\">\n"
              "<arg name=\"inMap\" type=\"a{y(uv)}\" direction=\"in\" />\n"
          "</method>\n"
          "<method name=\"TestStructWithPolymorphicMemberMethod\">\n"
              "<arg name=\"inStruct\" type=\"(u(uv))\" direction=\"in\" />\n"
          "</method>\n"
          "<method name=\"TestStructWithEnumKeyMapMember\">\n"
              "<arg name=\"inStruct\" type=\"(ua{is})\" direction=\"in\" />\n"
          "</method>\n"
          
      ;
      return introspectionData.c_str();
  }

  static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
          TestInterfaceStub,
          uint32_t
          > getTestPredefinedTypeAttributeAttributeStubDispatcher(&TestInterfaceStub::getTestPredefinedTypeAttributeAttribute, "u");
  static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
          TestInterfaceStub,
          uint32_t
          > setTestPredefinedTypeAttributeAttributeStubDispatcher(
                  &TestInterfaceStub::getTestPredefinedTypeAttributeAttribute,
                  &TestInterfaceStubRemoteEvent::onRemoteSetTestPredefinedTypeAttributeAttribute,
                  &TestInterfaceStubRemoteEvent::onRemoteTestPredefinedTypeAttributeAttributeChanged,
                  &TestInterfaceStubAdapter::fireTestPredefinedTypeAttributeAttributeChanged,
                  "u");

  static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
          TestInterfaceStub,
          DerivedTypeCollection::TestStructExtended
          > getTestDerivedStructAttributeAttributeStubDispatcher(&TestInterfaceStub::getTestDerivedStructAttributeAttribute, "(sqi)");
  static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
          TestInterfaceStub,
          DerivedTypeCollection::TestStructExtended
          > setTestDerivedStructAttributeAttributeStubDispatcher(
                  &TestInterfaceStub::getTestDerivedStructAttributeAttribute,
                  &TestInterfaceStubRemoteEvent::onRemoteSetTestDerivedStructAttributeAttribute,
                  &TestInterfaceStubRemoteEvent::onRemoteTestDerivedStructAttributeAttributeChanged,
                  &TestInterfaceStubAdapter::fireTestDerivedStructAttributeAttributeChanged,
                  "(sqi)");

  static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
          TestInterfaceStub,
          DerivedTypeCollection::TestArrayUInt64
          > getTestDerivedArrayAttributeAttributeStubDispatcher(&TestInterfaceStub::getTestDerivedArrayAttributeAttribute, "at");
  static CommonAPI::DBus::DBusSetObservableAttributeStubDispatcher<
          TestInterfaceStub,
          DerivedTypeCollection::TestArrayUInt64
          > setTestDerivedArrayAttributeAttributeStubDispatcher(
                  &TestInterfaceStub::getTestDerivedArrayAttributeAttribute,
                  &TestInterfaceStubRemoteEvent::onRemoteSetTestDerivedArrayAttributeAttribute,
                  &TestInterfaceStubRemoteEvent::onRemoteTestDerivedArrayAttributeAttributeChanged,
                  &TestInterfaceStubAdapter::fireTestDerivedArrayAttributeAttributeChanged,
                  "at");


<<<<<<< Upstream, based on origin/master
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<>,
    std::tuple<>
    > testEmptyMethodStubDispatcher(&TestInterfaceStub::testEmptyMethod, "");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<uint32_t, std::string>,
    std::tuple<>
    > testVoidPredefinedTypeMethodStubDispatcher(&TestInterfaceStub::testVoidPredefinedTypeMethod, "");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<uint32_t, std::string>,
    std::tuple<uint32_t, std::string>
    > testPredefinedTypeMethodStubDispatcher(&TestInterfaceStub::testPredefinedTypeMethod, "us");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<DerivedTypeCollection::TestEnumExtended2, DerivedTypeCollection::TestMap>,
    std::tuple<>
    > testVoidDerivedTypeMethodStubDispatcher(&TestInterfaceStub::testVoidDerivedTypeMethod, "");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<DerivedTypeCollection::TestEnumExtended2, DerivedTypeCollection::TestMap>,
    std::tuple<DerivedTypeCollection::TestEnumExtended2, DerivedTypeCollection::TestMap>
    > testDerivedTypeMethodStubDispatcher(&TestInterfaceStub::testDerivedTypeMethod, "ia{ua(sq)}");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<std::vector<std::shared_ptr<DerivedTypeCollection::TestPolymorphicStruct>>>,
    std::tuple<>
    > testArrayOfPolymorphicStructMethodStubDispatcher(&TestInterfaceStub::TestArrayOfPolymorphicStructMethod, "");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<DerivedTypeCollection::MapIntToPolymorphic>,
    std::tuple<>
    > testMapOfPolymorphicStructMethodStubDispatcher(&TestInterfaceStub::TestMapOfPolymorphicStructMethod, "");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<DerivedTypeCollection::StructWithPolymorphicMember>,
    std::tuple<>
    > testStructWithPolymorphicMemberMethodStubDispatcher(&TestInterfaceStub::TestStructWithPolymorphicMemberMethod, "");
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    TestInterfaceStub,
    std::tuple<DerivedTypeCollection::StructWithEnumKeyMap>,
    std::tuple<>
    > testStructWithEnumKeyMapMemberStubDispatcher(&TestInterfaceStub::TestStructWithEnumKeyMapMember, "");
=======
  static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
      TestInterfaceStub,
      std::tuple<>,
      std::tuple<>
      > testEmptyMethodStubDispatcher(&TestInterfaceStub::testEmptyMethod, "");
  static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
      TestInterfaceStub,
      std::tuple<uint32_t, std::string>,
      std::tuple<>
      > testVoidPredefinedTypeMethodStubDispatcher(&TestInterfaceStub::testVoidPredefinedTypeMethod, "");
  static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
      TestInterfaceStub,
      std::tuple<uint32_t, std::string>,
      std::tuple<uint32_t, std::string>
      > testPredefinedTypeMethodStubDispatcher(&TestInterfaceStub::testPredefinedTypeMethod, "us");
  static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
      TestInterfaceStub,
      std::tuple<DerivedTypeCollection::TestEnumExtended2, DerivedTypeCollection::TestMap>,
      std::tuple<>
      > testVoidDerivedTypeMethodStubDispatcher(&TestInterfaceStub::testVoidDerivedTypeMethod, "");
  static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
      TestInterfaceStub,
      std::tuple<DerivedTypeCollection::TestEnumExtended2, DerivedTypeCollection::TestMap>,
      std::tuple<DerivedTypeCollection::TestEnumExtended2, DerivedTypeCollection::TestMap>
      > testDerivedTypeMethodStubDispatcher(&TestInterfaceStub::testDerivedTypeMethod, "ia{ua(sq)}");
  static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
      TestInterfaceStub,
      std::tuple<std::vector<std::shared_ptr<DerivedTypeCollection::TestPolymorphicStruct>>>,
      std::tuple<>
      > testArrayOfPolymorphicStructMethodStubDispatcher(&TestInterfaceStub::TestArrayOfPolymorphicStructMethod, "");
  static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
      TestInterfaceStub,
      std::tuple<DerivedTypeCollection::MapIntToPolymorphic>,
      std::tuple<>
      > testMapOfPolymorphicStructMethodStubDispatcher(&TestInterfaceStub::TestMapOfPolymorphicStructMethod, "");
  static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
      TestInterfaceStub,
      std::tuple<DerivedTypeCollection::StructWithPolymorphicMember>,
      std::tuple<>
      > testStructWithPolymorphicMemberMethodStubDispatcher(&TestInterfaceStub::TestStructWithPolymorphicMemberMethod, "");
  static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
      TestInterfaceStub,
      std::tuple<DerivedTypeCollection::StructWithEnumKeyMap>,
      std::tuple<>
      > testStructWithEnumKeyMapMemberStubDispatcher(&TestInterfaceStub::TestStructWithEnumKeyMapMember, "");
>>>>>>> 555557d Fix for inherited interfaces and tests for that including generated code

  void TestInterfaceDBusStubAdapterInternal::fireTestPredefinedTypeAttributeAttributeChanged(const uint32_t& value) {
      CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<uint32_t>>
          ::sendSignal(
              *this,
              "onTestPredefinedTypeAttributeAttributeChanged",
              "u",
              value
      );
  }
  void TestInterfaceDBusStubAdapterInternal::fireTestDerivedStructAttributeAttributeChanged(const DerivedTypeCollection::TestStructExtended& value) {
      CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<DerivedTypeCollection::TestStructExtended>>
          ::sendSignal(
              *this,
              "onTestDerivedStructAttributeAttributeChanged",
              "(sqi)",
              value
      );
  }
  void TestInterfaceDBusStubAdapterInternal::fireTestDerivedArrayAttributeAttributeChanged(const DerivedTypeCollection::TestArrayUInt64& value) {
      CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<DerivedTypeCollection::TestArrayUInt64>>
          ::sendSignal(
              *this,
              "onTestDerivedArrayAttributeAttributeChanged",
              "at",
              value
      );
  }

  void TestInterfaceDBusStubAdapterInternal::fireTestPredefinedTypeBroadcastEvent(const uint32_t& uint32Value, const std::string& stringValue) {
      CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<uint32_t, std::string>>
              ::sendSignal(
                  *this,
                  "TestPredefinedTypeBroadcast",
                  "us",
                  uint32Value, stringValue
          );
  }
  static CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
      TestInterfaceStub,
      TestInterfaceStubAdapter,
      std::tuple<>,
      std::tuple<bool>
      > subscribeTestSelectiveBroadcastSelectiveStubDispatcher(&TestInterfaceStubAdapter::subscribeForTestSelectiveBroadcastSelective, "b");

  static CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
      TestInterfaceStub,
      TestInterfaceStubAdapter,
      std::tuple<>,
      std::tuple<>
      > unsubscribeTestSelectiveBroadcastSelectiveStubDispatcher(&TestInterfaceStubAdapter::unsubscribeFromTestSelectiveBroadcastSelective, "");


  void TestInterfaceDBusStubAdapterInternal::fireTestSelectiveBroadcastSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) {
      std::shared_ptr<CommonAPI::DBus::DBusClientId> dbusClientId = std::dynamic_pointer_cast<CommonAPI::DBus::DBusClientId, CommonAPI::ClientId>(clientId);

      if(dbusClientId)
      {
          CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<>>
              ::sendSignal(
                  dbusClientId->getDBusId(),
                  *this,
                  "TestSelectiveBroadcast",
                  ""
          );
      }
  }

  void TestInterfaceDBusStubAdapterInternal::sendTestSelectiveBroadcastSelective(const std::shared_ptr<CommonAPI::ClientIdList> receivers) {
      std::shared_ptr<CommonAPI::ClientIdList> actualReceiverList;
      actualReceiverList = receivers;

      if(receivers == NULL)
          actualReceiverList = subscribersForTestSelectiveBroadcastSelective_;

      for (auto clientIdIterator = actualReceiverList->cbegin();
                 clientIdIterator != actualReceiverList->cend();
                 clientIdIterator++) {
          if(receivers == NULL || subscribersForTestSelectiveBroadcastSelective_->find(*clientIdIterator) != subscribersForTestSelectiveBroadcastSelective_->end()) {
              fireTestSelectiveBroadcastSelective(*clientIdIterator);
          }
      }
  }

  void TestInterfaceDBusStubAdapterInternal::subscribeForTestSelectiveBroadcastSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) {
      bool ok = stub_->onTestSelectiveBroadcastSelectiveSubscriptionRequested(clientId);
      if (ok) {
          subscribersForTestSelectiveBroadcastSelective_->insert(clientId);
          stub_->onTestSelectiveBroadcastSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::SUBSCRIBED);
          success = true;
      } else {
          success = false;
      }
  }


  void TestInterfaceDBusStubAdapterInternal::unsubscribeFromTestSelectiveBroadcastSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) {
      subscribersForTestSelectiveBroadcastSelective_->erase(clientId);
      stub_->onTestSelectiveBroadcastSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::UNSUBSCRIBED);
  }

  std::shared_ptr<CommonAPI::ClientIdList> const TestInterfaceDBusStubAdapterInternal::getSubscribersForTestSelectiveBroadcastSelective() {
      return subscribersForTestSelectiveBroadcastSelective_;
  }

  static CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
      TestInterfaceStub,
      TestInterfaceStubAdapter,
      std::tuple<>,
      std::tuple<bool>
      > subscribeTestBroadcastWithOutArgsSelectiveStubDispatcher(&TestInterfaceStubAdapter::subscribeForTestBroadcastWithOutArgsSelective, "b");

  static CommonAPI::DBus::DBusMethodWithReplyAdapterDispatcher<
      TestInterfaceStub,
      TestInterfaceStubAdapter,
      std::tuple<>,
      std::tuple<>
      > unsubscribeTestBroadcastWithOutArgsSelectiveStubDispatcher(&TestInterfaceStubAdapter::unsubscribeFromTestBroadcastWithOutArgsSelective, "");


  void TestInterfaceDBusStubAdapterInternal::fireTestBroadcastWithOutArgsSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, const uint32_t& uint32Value, const std::string& stringValue) {
      std::shared_ptr<CommonAPI::DBus::DBusClientId> dbusClientId = std::dynamic_pointer_cast<CommonAPI::DBus::DBusClientId, CommonAPI::ClientId>(clientId);

      if(dbusClientId)
      {
          CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<uint32_t, std::string>>
              ::sendSignal(
                  dbusClientId->getDBusId(),
                  *this,
                  "TestBroadcastWithOutArgs",
                  "us",
                  uint32Value, stringValue
          );
      }
  }

  void TestInterfaceDBusStubAdapterInternal::sendTestBroadcastWithOutArgsSelective(const uint32_t& uint32Value, const std::string& stringValue, const std::shared_ptr<CommonAPI::ClientIdList> receivers) {
      std::shared_ptr<CommonAPI::ClientIdList> actualReceiverList;
      actualReceiverList = receivers;

      if(receivers == NULL)
          actualReceiverList = subscribersForTestBroadcastWithOutArgsSelective_;

      for (auto clientIdIterator = actualReceiverList->cbegin();
                 clientIdIterator != actualReceiverList->cend();
                 clientIdIterator++) {
          if(receivers == NULL || subscribersForTestBroadcastWithOutArgsSelective_->find(*clientIdIterator) != subscribersForTestBroadcastWithOutArgsSelective_->end()) {
              fireTestBroadcastWithOutArgsSelective(*clientIdIterator, uint32Value, stringValue);
          }
      }
  }

  void TestInterfaceDBusStubAdapterInternal::subscribeForTestBroadcastWithOutArgsSelective(const std::shared_ptr<CommonAPI::ClientId> clientId, bool& success) {
      bool ok = stub_->onTestBroadcastWithOutArgsSelectiveSubscriptionRequested(clientId);
      if (ok) {
          subscribersForTestBroadcastWithOutArgsSelective_->insert(clientId);
          stub_->onTestBroadcastWithOutArgsSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::SUBSCRIBED);
          success = true;
      } else {
          success = false;
      }
  }


  void TestInterfaceDBusStubAdapterInternal::unsubscribeFromTestBroadcastWithOutArgsSelective(const std::shared_ptr<CommonAPI::ClientId> clientId) {
      subscribersForTestBroadcastWithOutArgsSelective_->erase(clientId);
      stub_->onTestBroadcastWithOutArgsSelectiveSubscriptionChanged(clientId, CommonAPI::SelectiveBroadcastSubscriptionEvent::UNSUBSCRIBED);
  }

  std::shared_ptr<CommonAPI::ClientIdList> const TestInterfaceDBusStubAdapterInternal::getSubscribersForTestBroadcastWithOutArgsSelective() {
      return subscribersForTestBroadcastWithOutArgsSelective_;
  }


<<<<<<< Upstream, based on origin/master
const TestInterfaceDBusStubAdapter::StubDispatcherTable& TestInterfaceDBusStubAdapter::getStubDispatcherTable() {
    static const TestInterfaceDBusStubAdapter::StubDispatcherTable stubDispatcherTable = {
            { { "getInterfaceVersion", "" }, &commonapi::tests::getInterfaceVersionStubDispatcher },
            { { "getTestPredefinedTypeAttributeAttribute", "" }, &commonapi::tests::getTestPredefinedTypeAttributeAttributeStubDispatcher }
            , { { "setTestPredefinedTypeAttributeAttribute", "u" }, &commonapi::tests::setTestPredefinedTypeAttributeAttributeStubDispatcher },
            { { "getTestDerivedStructAttributeAttribute", "" }, &commonapi::tests::getTestDerivedStructAttributeAttributeStubDispatcher }
            , { { "setTestDerivedStructAttributeAttribute", "(sqi)" }, &commonapi::tests::setTestDerivedStructAttributeAttributeStubDispatcher },
            { { "getTestDerivedArrayAttributeAttribute", "" }, &commonapi::tests::getTestDerivedArrayAttributeAttributeStubDispatcher }
            , { { "setTestDerivedArrayAttributeAttribute", "at" }, &commonapi::tests::setTestDerivedArrayAttributeAttributeStubDispatcher }
            ,
            { { "testEmptyMethod", "" }, &commonapi::tests::testEmptyMethodStubDispatcher },
            { { "testVoidPredefinedTypeMethod", "us" }, &commonapi::tests::testVoidPredefinedTypeMethodStubDispatcher },
            { { "testPredefinedTypeMethod", "us" }, &commonapi::tests::testPredefinedTypeMethodStubDispatcher },
            { { "testVoidDerivedTypeMethod", "ia{ua(sq)}" }, &commonapi::tests::testVoidDerivedTypeMethodStubDispatcher },
            { { "testDerivedTypeMethod", "ia{ua(sq)}" }, &commonapi::tests::testDerivedTypeMethodStubDispatcher },
            { { "TestArrayOfPolymorphicStructMethod", "a(uv)" }, &commonapi::tests::testArrayOfPolymorphicStructMethodStubDispatcher },
            { { "TestMapOfPolymorphicStructMethod", "a{y(uv)}" }, &commonapi::tests::testMapOfPolymorphicStructMethodStubDispatcher },
            { { "TestStructWithPolymorphicMemberMethod", "(u(uv))" }, &commonapi::tests::testStructWithPolymorphicMemberMethodStubDispatcher },
            { { "TestStructWithEnumKeyMapMember", "(a{is})" }, &commonapi::tests::testStructWithEnumKeyMapMemberStubDispatcher }
            ,
            { { "subscribeForTestSelectiveBroadcastSelective", "" }, &commonapi::tests::subscribeTestSelectiveBroadcastSelectiveStubDispatcher },
            { { "unsubscribeFromTestSelectiveBroadcastSelective", "" }, &commonapi::tests::unsubscribeTestSelectiveBroadcastSelectiveStubDispatcher },
            { { "subscribeForTestBroadcastWithOutArgsSelective", "" }, &commonapi::tests::subscribeTestBroadcastWithOutArgsSelectiveStubDispatcher },
            { { "unsubscribeFromTestBroadcastWithOutArgsSelective", "" }, &commonapi::tests::unsubscribeTestBroadcastWithOutArgsSelectiveStubDispatcher }
            };
    return stubDispatcherTable;
}
=======
  const TestInterfaceDBusStubAdapterHelper::StubDispatcherTable& TestInterfaceDBusStubAdapterInternal::getStubDispatcherTable() {
      return stubDispatcherTable_;
  }
  
  
  TestInterfaceDBusStubAdapterInternal::TestInterfaceDBusStubAdapterInternal(
          const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
          const std::string& commonApiAddress,
          const std::string& dbusInterfaceName,
          const std::string& dbusBusName,
          const std::string& dbusObjectPath,
          const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
          const std::shared_ptr<CommonAPI::StubBase>& stub):
          CommonAPI::DBus::DBusStubAdapter(
                  factory,
                  commonApiAddress,
                  dbusInterfaceName,
                  dbusBusName,
                  dbusObjectPath,
                  dbusConnection,
                  false),
          TestInterfaceDBusStubAdapterHelper(factory, commonApiAddress, dbusInterfaceName, dbusBusName, dbusObjectPath, 
              dbusConnection, std::dynamic_pointer_cast<TestInterfaceStub>(stub),
              false),
          stubDispatcherTable_({
              { { "getTestPredefinedTypeAttributeAttribute", "" }, &commonapi::tests::getTestPredefinedTypeAttributeAttributeStubDispatcher }
              , { { "setTestPredefinedTypeAttributeAttribute", "u" }, &commonapi::tests::setTestPredefinedTypeAttributeAttributeStubDispatcher },
              { { "getTestDerivedStructAttributeAttribute", "" }, &commonapi::tests::getTestDerivedStructAttributeAttributeStubDispatcher }
              , { { "setTestDerivedStructAttributeAttribute", "(sqi)" }, &commonapi::tests::setTestDerivedStructAttributeAttributeStubDispatcher },
              { { "getTestDerivedArrayAttributeAttribute", "" }, &commonapi::tests::getTestDerivedArrayAttributeAttributeStubDispatcher }
              , { { "setTestDerivedArrayAttributeAttribute", "at" }, &commonapi::tests::setTestDerivedArrayAttributeAttributeStubDispatcher }
              ,
              { { "testEmptyMethod", "" }, &commonapi::tests::testEmptyMethodStubDispatcher },
              { { "testVoidPredefinedTypeMethod", "us" }, &commonapi::tests::testVoidPredefinedTypeMethodStubDispatcher },
              { { "testPredefinedTypeMethod", "us" }, &commonapi::tests::testPredefinedTypeMethodStubDispatcher },
              { { "testVoidDerivedTypeMethod", "ia{ua(sq)}" }, &commonapi::tests::testVoidDerivedTypeMethodStubDispatcher },
              { { "testDerivedTypeMethod", "ia{ua(sq)}" }, &commonapi::tests::testDerivedTypeMethodStubDispatcher },
              { { "TestArrayOfPolymorphicStructMethod", "a(uv)" }, &commonapi::tests::testArrayOfPolymorphicStructMethodStubDispatcher },
              { { "TestMapOfPolymorphicStructMethod", "a{y(uv)}" }, &commonapi::tests::testMapOfPolymorphicStructMethodStubDispatcher },
              { { "TestStructWithPolymorphicMemberMethod", "(u(uv))" }, &commonapi::tests::testStructWithPolymorphicMemberMethodStubDispatcher },
              { { "TestStructWithEnumKeyMapMember", "(ua{is})" }, &commonapi::tests::testStructWithEnumKeyMapMemberStubDispatcher }
              ,
              { { "subscribeForTestSelectiveBroadcastSelective", "" }, &commonapi::tests::subscribeTestSelectiveBroadcastSelectiveStubDispatcher },
              { { "unsubscribeFromTestSelectiveBroadcastSelective", "" }, &commonapi::tests::unsubscribeTestSelectiveBroadcastSelectiveStubDispatcher },
              { { "subscribeForTestBroadcastWithOutArgsSelective", "" }, &commonapi::tests::subscribeTestBroadcastWithOutArgsSelectiveStubDispatcher },
              { { "unsubscribeFromTestBroadcastWithOutArgsSelective", "" }, &commonapi::tests::unsubscribeTestBroadcastWithOutArgsSelectiveStubDispatcher }
              }) {
      subscribersForTestSelectiveBroadcastSelective_ = std::make_shared<CommonAPI::ClientIdList>();
      subscribersForTestBroadcastWithOutArgsSelective_ = std::make_shared<CommonAPI::ClientIdList>();
>>>>>>> 555557d Fix for inherited interfaces and tests for that including generated code

  }

  } // namespace tests
  } // namespace commonapi
