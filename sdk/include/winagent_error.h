#pragma once
#include <windows.h>
#define WINAGENT_E_NOT_CONNECTED ((HRESULT)0x80040001L)
LPCWSTR WinAgentErrorToString(HRESULT hr);
