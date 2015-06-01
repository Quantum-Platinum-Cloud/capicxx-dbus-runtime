/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.1.v201505270851.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1_0/commonapi/tests/managed/RootInterfaceDBusProxy.hpp>

namespace v1_0 {
namespace commonapi {
namespace tests {
namespace managed {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createRootInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<RootInterfaceDBusProxy>(_address, _connection);
}

INITIALIZER(registerRootInterfaceDBusProxy) {
	CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		RootInterface::getInterface(),
		&createRootInterfaceDBusProxy);
}

RootInterfaceDBusProxy::RootInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
,		proxyManagerLeafInterface_(*this, "commonapi.tests.managed.LeafInterface"),
		proxyManagerBranchInterface_(*this, "commonapi.tests.managed.BranchInterface")
{
}



        void RootInterfaceDBusProxy::testRootMethod(const int32_t &_inInt, const std::string &_inString, CommonAPI::CallStatus &_status, RootInterface::testRootMethodError &_error, int32_t &_outInt, std::string &_outString, const CommonAPI::CallInfo *_info) {
            CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t, std::string>,
                                             CommonAPI::DBus::DBusSerializableArguments<RootInterface::testRootMethodError, int32_t, std::string> >::callMethodWithReply(
            *this,
            "testRootMethod",
            "is",
            (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
            _inInt, _inString,
            _status,
            _error
            , _outInt, _outString);
        }
        std::future<CommonAPI::CallStatus> RootInterfaceDBusProxy::testRootMethodAsync(const int32_t &_inInt, const std::string &_inString, TestRootMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
            return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t, std::string>,
                                             CommonAPI::DBus::DBusSerializableArguments<RootInterface::testRootMethodError, int32_t, std::string> >::callMethodAsync(
            *this,
            "testRootMethod",
            "is",
            (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
            _inInt, _inString,
            std::move(_callback),
            std::tuple<RootInterface::testRootMethodError, int32_t, std::string>());
        }

        CommonAPI::ProxyManager& RootInterfaceDBusProxy::getProxyManagerLeafInterface() {
            return proxyManagerLeafInterface_;
        }
        CommonAPI::ProxyManager& RootInterfaceDBusProxy::getProxyManagerBranchInterface() {
            return proxyManagerBranchInterface_;
        }

        void RootInterfaceDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
            ownVersionMajor = 1;
            ownVersionMinor = 0;
        }

        } // namespace managed
        } // namespace tests
        } // namespace commonapi
        } // namespace v1_0
