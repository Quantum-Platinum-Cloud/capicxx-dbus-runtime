// Copyright (C) 2014-2015 Bayerische Motoren Werke Aktiengesellschaft (BMW AG)
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#error "Only <CommonAPI/CommonAPI.hpp> can be included directly, this file may disappear or change contents."
#endif

#ifndef COMMONAPI_DBUS_DBUSDEPLOYMENTS_HPP_
#define COMMONAPI_DBUS_DBUSDEPLOYMENTS_HPP_

#include <string>
#include <unordered_map>

#include <CommonAPI/Deployment.hpp>
#include <CommonAPI/Export.hpp>

namespace CommonAPI {
namespace DBus {

template<typename... _Types>
struct VariantDeployment : CommonAPI::Deployment<_Types...> {
	VariantDeployment(bool _isFreeDesktop, _Types*... _t)
		  : CommonAPI::Deployment<_Types...>(_t...),
			isFreeDesktop_(_isFreeDesktop) {
	}

	bool isFreeDesktop_;
};

extern COMMONAPI_IMPORT_EXPORT VariantDeployment<> freedesktopVariant;

} // namespace DBus
} // namespace CommonAPI

#endif // COMMONAPI_DBUS_DBUSDEPLOYMENTS_HPP_
