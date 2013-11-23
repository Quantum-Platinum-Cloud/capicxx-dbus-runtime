/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Root_Interface_DBUS_STUB_ADAPTER_H_
#define COMMONAPI_TESTS_MANAGED_Root_Interface_DBUS_STUB_ADAPTER_H_

#include <commonapi/tests/managed/RootInterfaceStub.h>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusStubAdapterHelper.h>
#include <CommonAPI/DBus/DBusStubAdapter.h>
#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusServicePublisher.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace tests {
namespace managed {

typedef CommonAPI::DBus::DBusStubAdapterHelper<RootInterfaceStub> RootInterfaceDBusStubAdapterHelper;

class RootInterfaceDBusStubAdapterInternal: public RootInterfaceStubAdapter, public RootInterfaceDBusStubAdapterHelper {
 public:
    RootInterfaceDBusStubAdapterInternal(
            const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
            const std::string& commonApiAddress,
            const std::string& dbusInterfaceName,
            const std::string& dbusBusName,
            const std::string& dbusObjectPath,
            const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
            const std::shared_ptr<CommonAPI::StubBase>& stub);

    ~RootInterfaceDBusStubAdapterInternal();


    
    bool registerManagedStubLeafInterface(std::shared_ptr<LeafInterfaceStub>, const std::string&);
    bool deregisterManagedStubLeafInterface(const std::string&);
    std::set<std::string>& getLeafInterfaceInstances();
    bool registerManagedStubBranchInterface(std::shared_ptr<BranchInterfaceStub>, const std::string&);
    bool deregisterManagedStubBranchInterface(const std::string&);
    std::set<std::string>& getBranchInterfaceInstances();

    const RootInterfaceDBusStubAdapterHelper::StubDispatcherTable& getStubDispatcherTable();
    
    void deactivateManagedInstances();
    

 protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const;
    
  private:
    std::set<std::string> registeredLeafInterfaceInstances;
    std::set<std::string> registeredBranchInterfaceInstances;
    RootInterfaceDBusStubAdapterHelper::StubDispatcherTable stubDispatcherTable_;
};

class RootInterfaceDBusStubAdapter: public RootInterfaceDBusStubAdapterInternal, public std::enable_shared_from_this<RootInterfaceDBusStubAdapter> {
public:
    RootInterfaceDBusStubAdapter(
                         const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                         const std::string& commonApiAddress,
                         const std::string& dbusInterfaceName,
                         const std::string& dbusBusName,
                         const std::string& dbusObjectPath,
                         const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
                         const std::shared_ptr<CommonAPI::StubBase>& stub) :
            CommonAPI::DBus::DBusStubAdapter(
                            factory,
                            commonApiAddress,
                            dbusInterfaceName,
                            dbusBusName,
                            dbusObjectPath,
                            dbusConnection,
                            true),
            RootInterfaceDBusStubAdapterInternal(
                            factory,
                            commonApiAddress,
                            dbusInterfaceName,
                            dbusBusName,
                            dbusObjectPath,
                            dbusConnection,
                            stub) { }
};

} // namespace managed
} // namespace tests
} // namespace commonapi

#endif // COMMONAPI_TESTS_MANAGED_Root_Interface_DBUS_STUB_ADAPTER_H_
