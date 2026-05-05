/*
 * Copyright (c) 2026 WinAgent Project
 * SPDX-License-Identifier: MIT
 */

#include <windows.h>
void WINAPI ServiceMain(DWORD,LPWSTR*){}
int wmain(){SERVICE_TABLE_ENTRY table[]={ {(LPWSTR)L"WinAgentSvc",ServiceMain},{nullptr,nullptr}};StartServiceCtrlDispatcher(table);return 0;}
