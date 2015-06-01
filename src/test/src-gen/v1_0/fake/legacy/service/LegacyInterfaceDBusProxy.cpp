/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.1.v201505270851.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1_0/fake/legacy/service/LegacyInterfaceDBusProxy.hpp>

namespace v1_0 {
namespace fake {
namespace legacy {
namespace service {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createLegacyInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<LegacyInterfaceDBusProxy>(_address, _connection);
}

INITIALIZER(registerLegacyInterfaceDBusProxy) {
	CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		LegacyInterface::getInterface(),
		&createLegacyInterfaceDBusProxy);
}

LegacyInterfaceDBusProxy::LegacyInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
{
}



        void LegacyInterfaceDBusProxy::TestMethod(const int32_t &_input, CommonAPI::CallStatus &_status, int32_t &_val1, int32_t &_val2, const CommonAPI::CallInfo *_info) {
            CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t>,
                                             CommonAPI::DBus::DBusSerializableArguments<int32_t, int32_t> >::callMethodWithReply(
            *this,
            "TestMethod",
            "i",
            (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
            _input,
            _status
            , _val1, _val2);
        }
        std::future<CommonAPI::CallStatus> LegacyInterfaceDBusProxy::TestMethodAsync(const int32_t &_input, TestMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
            return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t>,
                                             CommonAPI::DBus::DBusSerializableArguments<int32_t, int32_t> >::callMethodAsync(
            *this,
            "TestMethod",
            "i",
            (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
            _input,
            std::move(_callback),
            std::tuple<int32_t, int32_t>());
        }
        void LegacyInterfaceDBusProxy::OtherTestMethod(CommonAPI::CallStatus &_status, std::string &_greeting, int32_t &_identifier, const CommonAPI::CallInfo *_info) {
            CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                             CommonAPI::DBus::DBusSerializableArguments<std::string, int32_t> >::callMethodWithReply(
            *this,
            "OtherTestMethod",
            "",
            (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
            _status
            , _greeting, _identifier);
        }
        std::future<CommonAPI::CallStatus> LegacyInterfaceDBusProxy::OtherTestMethodAsync(OtherTestMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
            return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                             CommonAPI::DBus::DBusSerializableArguments<std::string, int32_t> >::callMethodAsync(
            *this,
            "OtherTestMethod",
            "",
            (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
            std::move(_callback),
            std::tuple<std::string, int32_t>());
        }
        void LegacyInterfaceDBusProxy::finish(CommonAPI::CallStatus &_status, const CommonAPI::CallInfo *_info) {
            CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                             CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
            *this,
            "finish",
            "",
            (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
            _status
            );
        }
        std::future<CommonAPI::CallStatus> LegacyInterfaceDBusProxy::finishAsync(FinishAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
            return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                             CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
            *this,
            "finish",
            "",
            (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
            std::move(_callback),
            std::tuple<>());
        }


        void LegacyInterfaceDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
            ownVersionMajor = 1;
            ownVersionMinor = 0;
        }

        } // namespace service
        } // namespace legacy
        } // namespace fake
        } // namespace v1_0
