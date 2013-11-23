/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Leaf_Interface_STUB_H_
#define COMMONAPI_TESTS_MANAGED_Leaf_Interface_STUB_H_




#include "LeafInterface.h"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <vector>

#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace tests {
namespace managed {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service LeafInterface. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class LeafInterfaceStubAdapter: virtual public CommonAPI::StubAdapter, public LeafInterface {
 public:

    
    
    virtual void deactivateManagedInstances() = 0;
    
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for LeafInterface.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class LeafInterfaceStubRemoteEvent {
 public:
    virtual ~LeafInterfaceStubRemoteEvent() { }

};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service LeafInterface to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class LeafInterfaceStub : public virtual CommonAPI::Stub<LeafInterfaceStubAdapter, LeafInterfaceStubRemoteEvent> {
public:
    virtual ~LeafInterfaceStub() { }


    /// This is the method that will be called on remote calls on the method testLeafMethod.
    virtual void testLeafMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t inInt, std::string inString, LeafInterface::testLeafMethodError& methodError, int32_t& outInt, std::string& outString) = 0;
    
    
    using CommonAPI::Stub<LeafInterfaceStubAdapter, LeafInterfaceStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<LeafInterfaceStubAdapter, LeafInterfaceStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<LeafInterfaceStubAdapter, LeafInterfaceStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    
};

} // namespace managed
} // namespace tests
} // namespace commonapi

#endif // COMMONAPI_TESTS_MANAGED_Leaf_Interface_STUB_H_
