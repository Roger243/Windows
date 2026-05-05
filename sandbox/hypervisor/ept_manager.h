/*
 * Copyright (c) 2026 WinAgent Project
 * SPDX-License-Identifier: MIT
 */

#pragma once

typedef struct EPT_ENTRY{unsigned read,write,execute;unsigned long long page_frame_number;unsigned memory_type;} EPT_ENTRY;
int EptInitialize(void);
int EptMapGuestPhysical(unsigned long long gpa,unsigned long long hpa);
int EptUnmapPage(unsigned long long gpa);
void EptViolationHandler(unsigned long long gpa);
