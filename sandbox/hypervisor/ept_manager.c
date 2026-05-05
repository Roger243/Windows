/*
 * Copyright (c) 2026 WinAgent Project
 * SPDX-License-Identifier: MIT
 */

#include "ept_manager.h"

int EptInitialize(void){return 0;}
int EptMapGuestPhysical(unsigned long long gpa,unsigned long long hpa){(void)gpa;(void)hpa;return 0;}
int EptUnmapPage(unsigned long long gpa){(void)gpa;return 0;}
void EptViolationHandler(unsigned long long gpa){(void)gpa;}
