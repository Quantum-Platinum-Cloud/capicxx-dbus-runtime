/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <commonapi/tests/managed/RootInterfaceStubDefault.h>

namespace commonapi {
namespace tests {
namespace managed {

RootInterfaceStubDefault::RootInterfaceStubDefault():
        autoInstanceCounter_(0),
        remoteEventHandler_(this) {
}

RootInterfaceStubRemoteEvent* RootInterfaceStubDefault::initStubAdapter(const std::shared_ptr<RootInterfaceStubAdapter>& stubAdapter) {
    CommonAPI::Stub<RootInterfaceStubAdapter, RootInterfaceStubRemoteEvent>::stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}


void RootInterfaceStubDefault::testRootMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t inInt, std::string inString, RootInterface::testRootMethodError& methodError, int32_t& outInt, std::string& outString) {
    // Call old style methods in default 
    testRootMethod(inInt, inString, methodError, outInt, outString);
}
void RootInterfaceStubDefault::testRootMethod(int32_t inInt, std::string inString, RootInterface::testRootMethodError& methodError, int32_t& outInt, std::string& outString) {
    // No operation in default
}



bool RootInterfaceStubDefault::registerManagedStubLeafInterfaceAutoInstance(std::shared_ptr<LeafInterfaceStub> stub) {
    autoInstanceCounter_++;
    std::stringstream ss;
    ss << stubAdapter_->getInstanceId() << ".i" << autoInstanceCounter_;
    std::string instance = ss.str();
    return stubAdapter_->registerManagedStubLeafInterface(stub, instance);
}
bool RootInterfaceStubDefault::registerManagedStubLeafInterface(std::shared_ptr<LeafInterfaceStub> stub, const std::string& instance) {
    return stubAdapter_->registerManagedStubLeafInterface(stub, instance);
}
bool RootInterfaceStubDefault::deregisterManagedStubLeafInterface(const std::string& instance) {
    return stubAdapter_->deregisterManagedStubLeafInterface(instance);
}
std::set<std::string>& RootInterfaceStubDefault::getLeafInterfaceInstances() {
    return stubAdapter_->getLeafInterfaceInstances();
}
bool RootInterfaceStubDefault::registerManagedStubBranchInterfaceAutoInstance(std::shared_ptr<BranchInterfaceStub> stub) {
    autoInstanceCounter_++;
    std::stringstream ss;
    ss << stubAdapter_->getInstanceId() << ".i" << autoInstanceCounter_;
    std::string instance = ss.str();
    return stubAdapter_->registerManagedStubBranchInterface(stub, instance);
}
bool RootInterfaceStubDefault::registerManagedStubBranchInterface(std::shared_ptr<BranchInterfaceStub> stub, const std::string& instance) {
    return stubAdapter_->registerManagedStubBranchInterface(stub, instance);
}
bool RootInterfaceStubDefault::deregisterManagedStubBranchInterface(const std::string& instance) {
    return stubAdapter_->deregisterManagedStubBranchInterface(instance);
}
std::set<std::string>& RootInterfaceStubDefault::getBranchInterfaceInstances() {
    return stubAdapter_->getBranchInterfaceInstances();
}

RootInterfaceStubDefault::RemoteEventHandler::RemoteEventHandler(RootInterfaceStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace managed
} // namespace tests
} // namespace commonapi
