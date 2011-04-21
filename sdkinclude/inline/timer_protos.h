#ifndef _VBCCINLINE_TIMER_H
#define _VBCCINLINE_TIMER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

void __AddTime(__reg("a0") struct timeval * dest, __reg("a1") struct timeval * src, __reg("a6") struct Device *)="\tjsr\t-42(a6)";
#define AddTime(dest, src) __AddTime((dest), (src), TimerBase)

void __SubTime(__reg("a0") struct timeval * dest, __reg("a1") struct timeval * src, __reg("a6") struct Device *)="\tjsr\t-48(a6)";
#define SubTime(dest, src) __SubTime((dest), (src), TimerBase)

LONG __CmpTime(__reg("a0") struct timeval * dest, __reg("a1") struct timeval * src, __reg("a6") struct Device *)="\tjsr\t-54(a6)";
#define CmpTime(dest, src) __CmpTime((dest), (src), TimerBase)

ULONG __ReadEClock(__reg("a0") struct EClockVal * dest, __reg("a6") struct Device *)="\tjsr\t-60(a6)";
#define ReadEClock(dest) __ReadEClock((dest), TimerBase)

void __GetSysTime(__reg("a0") struct timeval * dest, __reg("a6") struct Device *)="\tjsr\t-66(a6)";
#define GetSysTime(dest) __GetSysTime((dest), TimerBase)

#endif /*  _VBCCINLINE_TIMER_H  */
