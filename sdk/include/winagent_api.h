#pragma once
#include <windows.h>
#ifdef WINAGENT_EXPORTS
#define WINAGENT_API __declspec(dllexport)
#else
#define WINAGENT_API __declspec(dllimport)
#endif
#ifdef __cplusplus
extern "C" {
#endif
WINAGENT_API HRESULT WinAgentConnect(PHANDLE);
#ifdef __cplusplus
}
#endif
