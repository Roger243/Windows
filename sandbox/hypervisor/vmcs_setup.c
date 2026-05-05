/*
 * Copyright (c) 2026 WinAgent Project
 * SPDX-License-Identifier: MIT
 */

#include "vmcs_setup.h"
int VmcsSetupGuest(void){return 0;}int VmcsSetupHost(void){return 0;}int VmcsSetupControls(void){return 0;}unsigned long long VmcsRead(VMCS_FIELD field){(void)field;return 0;}int VmcsWrite(VMCS_FIELD field,unsigned long long value){(void)field;(void)value;return 0;}
