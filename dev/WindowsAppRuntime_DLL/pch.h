﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once
#include <Windows.h>
#include <assert.h>
#include <unknwn.h>
#include <ShlObj_core.h>
#include <ShObjIdl_core.h>
#include <shlguid.h>
#include <shlwapi.h>
#include <shellapi.h>
#include <appmodel.h>
#include <xmllite.h>

#include <string>
#include <string_view>
#include <thread>
#include <mutex>
#include <list>
#include <stdexcept>
#include <regex>
#include <filesystem>

#include <wil/cppwinrt.h>
#include <wil/token_helpers.h>
#include <wil/stl.h>
#include <wil/resource.h>
#include <wil/result_macros.h>
#include <wil/filesystem.h>
#include <wil/com.h>
#include <wil/win32_helpers.h>

#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>

#include <winrt/Windows.ApplicationModel.h>
#include <winrt/Windows.ApplicationModel.Activation.h>
#include <winrt/Windows.ApplicationModel.Core.h>
#include <winrt/Windows.ApplicationModel.AppExtensions.h>
#include <winrt/Windows.Data.Json.h>
#include <winrt/Windows.Data.Xml.Dom.h>
#include <winrt/Windows.Management.Core.h>
#include <winrt/Windows.Management.Deployment.h>
#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.System.h>

#include <MsixDynamicDependency.h>

#include <appmodel.identity.h>
#include <appmodel.packagegraph.h>
#include <microsoft.utf8.h>
#include <security.integritylevel.h>
#include <windowsappruntime.selfcontained.h>
#include <windowsappruntime.versioninfo.h>

#define MIDL_NS_PREFIX
