/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Second_Root_H_
#define COMMONAPI_TESTS_MANAGED_Second_Root_H_


#include <set>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/types.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace tests {
namespace managed {

class SecondRoot {
 public:
    virtual ~SecondRoot() { }

    static inline const char* getInterfaceId();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* SecondRoot::getInterfaceId() {
    static const char* interfaceId = "commonapi.tests.managed.SecondRoot";
    return interfaceId;
}

CommonAPI::Version SecondRoot::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace managed
} // namespace tests
} // namespace commonapi

namespace CommonAPI {

}


namespace std {
    //hashes for types
    
    //hashes for error types
}

#endif // COMMONAPI_TESTS_MANAGED_Second_Root_H_
