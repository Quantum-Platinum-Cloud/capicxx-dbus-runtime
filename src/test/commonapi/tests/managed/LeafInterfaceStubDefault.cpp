/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <commonapi/tests/managed/LeafInterfaceStubDefault.h>

namespace commonapi {
namespace tests {
namespace managed {

LeafInterfaceStubDefault::LeafInterfaceStubDefault():
        remoteEventHandler_(this) {
}

LeafInterfaceStubRemoteEvent* LeafInterfaceStubDefault::initStubAdapter(const std::shared_ptr<LeafInterfaceStubAdapter>& stubAdapter) {
    CommonAPI::Stub<LeafInterfaceStubAdapter, LeafInterfaceStubRemoteEvent>::stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}


void LeafInterfaceStubDefault::testLeafMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t inInt, std::string inString, LeafInterface::testLeafMethodError& methodError, int32_t& outInt, std::string& outString) {
    // Call old style methods in default 
    testLeafMethod(inInt, inString, methodError, outInt, outString);
}
void LeafInterfaceStubDefault::testLeafMethod(int32_t inInt, std::string inString, LeafInterface::testLeafMethodError& methodError, int32_t& outInt, std::string& outString) {
    // No operation in default
}




LeafInterfaceStubDefault::RemoteEventHandler::RemoteEventHandler(LeafInterfaceStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace managed
} // namespace tests
} // namespace commonapi
