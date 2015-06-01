/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.1.v201505270851.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1_0/commonapi/tests/TestFreedesktopInterfaceDBusProxy.hpp>

namespace v1_0 {
namespace commonapi {
namespace tests {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createTestFreedesktopInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<TestFreedesktopInterfaceDBusProxy>(_address, _connection);
}

INITIALIZER(registerTestFreedesktopInterfaceDBusProxy) {
	CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		TestFreedesktopInterface::getInterface(),
		&createTestFreedesktopInterfaceDBusProxy);
}

TestFreedesktopInterfaceDBusProxy::TestFreedesktopInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		testPredefinedTypeAttribute_(*this, getAddress().getInterface(), "TestPredefinedTypeAttribute"),
		testReadonlyAttribute_(*this, getAddress().getInterface(), "TestReadonlyAttribute"),
		testDerivedStructAttribute_(*this, getAddress().getInterface(), "TestDerivedStructAttribute"),
		testDerivedArrayAttribute_(*this, getAddress().getInterface(), "TestDerivedArrayAttribute")
{
}

        TestFreedesktopInterfaceDBusProxy::TestPredefinedTypeAttributeAttribute& TestFreedesktopInterfaceDBusProxy::getTestPredefinedTypeAttributeAttribute() {
            return testPredefinedTypeAttribute_;
        }
        TestFreedesktopInterfaceDBusProxy::TestReadonlyAttributeAttribute& TestFreedesktopInterfaceDBusProxy::getTestReadonlyAttributeAttribute() {
            return testReadonlyAttribute_;
        }
        TestFreedesktopInterfaceDBusProxy::TestDerivedStructAttributeAttribute& TestFreedesktopInterfaceDBusProxy::getTestDerivedStructAttributeAttribute() {
            return testDerivedStructAttribute_;
        }
        TestFreedesktopInterfaceDBusProxy::TestDerivedArrayAttributeAttribute& TestFreedesktopInterfaceDBusProxy::getTestDerivedArrayAttributeAttribute() {
            return testDerivedArrayAttribute_;
        }




        void TestFreedesktopInterfaceDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
            ownVersionMajor = 1;
            ownVersionMinor = 0;
        }

        } // namespace tests
        } // namespace commonapi
        } // namespace v1_0
