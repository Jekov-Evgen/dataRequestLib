#pragma once

static float CalculateCPULoad(unsigned long long idleTicks, unsigned long long totalTicks);
static unsigned long long FileTimeToInt64(const FILETIME& ft);
float GetCPULoad();
