// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// Rely on _STRINGIZE(x) in yvals_core.h
#ifndef _STRINGIZE
#define _STRINGIZEX(x)  #x
#define _STRINGIZE(x)   _STRINGIZEX(x)
#endif

#define PUSHNOTIFICATIONS_LIBID_UUID          CE96C745-3017-460E-895B-4FD98E1194F2

#define PUSHNOTIFICATIONS_IMPL_CLSID_UUID     E739C755-0D09-48DF-A468-A5DF0B5422DC
#define PUSHNOTIFICATIONS_IMPL_CLSID_STRING   _STRINGIZE(PUSHNOTIFICATIONS_IMPL_CLSID_UUID)

#define PUSHNOTIFICATIONS_TASK_CLSID_UUID     8FCFB82B-DB93-4E1D-9008-76D768CEB9EA
#define PUSHNOTIFICATIONS_TASK_CLSID_STRING   _STRINGIZE(PUSHNOTIFICATIONS_TASK_CLSID_UUID)

#if defined(WINDOWSAPPSDK_BUILD_PIPELINE) && (WINDOWSAPPSDK_BUILD_PIPELINE == 1)
#include "PushNotifications-Override.h"
#endif