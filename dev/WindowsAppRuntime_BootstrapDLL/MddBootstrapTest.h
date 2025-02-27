﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#if !defined(MDDBOOTSTRAPTEST_H)
#define MDDBOOTSTRAPTEST_H

/// Initialize the Bootstrap API's test support. This will constrain DDLM enumeration
/// and matching for test purposes.
///
/// @param ddlmPackageNamePrefix only match DDLM packages with Name starting with this value
/// @param ddlmPackagePublisherId only match DDLM packages with this PublisherId
/// @param frameworkPackageNamePrefix framework package Name prefix (the 'Microsoft.WindowsAppRuntime' in 'Microsoft.WindowsAppRuntime.1.2-preview3')
/// @param mainPackageNamePrefix main package Name prefix (the 'MicrosoftCorporationII.WinAppRuntime' in 'MicrosoftCorporationII.WinAppRuntime.1.2-preview3')
///
/// @note Not for product use. This is only test purposes only to verify the implementation.
STDAPI MddBootstrapTestInitialize(
    _In_ PCWSTR ddlmPackageNamePrefix,
    _In_ PCWSTR ddlPackagePublisherId,
    _In_ PCWSTR frameworkPackageNamePrefix,
    _In_ PCWSTR mainPackageNamePrefix) noexcept;

#endif // MDDBOOTSTRAPTEST_H
