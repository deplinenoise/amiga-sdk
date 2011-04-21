#ifndef _VBCCINLINE_BATTCLOCK_H
#define _VBCCINLINE_BATTCLOCK_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

void __ResetBattClock(__reg("a6") struct Library *)="\tjsr\t-6(a6)";
#define ResetBattClock() __ResetBattClock(BattClockBase)

ULONG __ReadBattClock(__reg("a6") struct Library *)="\tjsr\t-12(a6)";
#define ReadBattClock() __ReadBattClock(BattClockBase)

void __WriteBattClock(__reg("d0") unsigned long time, __reg("a6") struct Library *)="\tjsr\t-18(a6)";
#define WriteBattClock(time) __WriteBattClock((time), BattClockBase)

#endif /*  _VBCCINLINE_BATTCLOCK_H  */
