/*
 * Copyright (c) 2026 WinAgent Project
 * SPDX-License-Identifier: MIT
 */

#include "../include/winagent_api.h"
HRESULT WinAgentConnect(PHANDLE h){if(!h)return E_POINTER;*h=(HANDLE)1;return S_OK;}
