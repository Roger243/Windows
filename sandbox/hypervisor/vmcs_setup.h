/*
 * Copyright (c) 2026 WinAgent Project
 * SPDX-License-Identifier: MIT
 */

#pragma once
typedef enum VMCS_FIELD{VMCS_GUEST_RIP,VMCS_GUEST_RSP,VMCS_HOST_RIP,VMCS_CTRL_PIN_BASED} VMCS_FIELD;
int VmcsSetupGuest(void);int VmcsSetupHost(void);int VmcsSetupControls(void);unsigned long long VmcsRead(VMCS_FIELD field);int VmcsWrite(VMCS_FIELD field,unsigned long long value);
