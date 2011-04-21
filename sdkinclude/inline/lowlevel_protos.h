#ifndef _VBCCINLINE_LOWLEVEL_H
#define _VBCCINLINE_LOWLEVEL_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

ULONG __ReadJoyPort(__reg("d0") unsigned long port, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define ReadJoyPort(port) __ReadJoyPort((port), LowLevelBase)

UBYTE __GetLanguageSelection(__reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define GetLanguageSelection() __GetLanguageSelection(LowLevelBase)

ULONG __GetKey(__reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define GetKey() __GetKey(LowLevelBase)

void __QueryKeys(__reg("a0") struct KeyQuery * queryArray, __reg("d1") unsigned long arraySize, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define QueryKeys(queryArray, arraySize) __QueryKeys((queryArray), (arraySize), LowLevelBase)

APTR __AddKBInt(__reg("a0") APTR intRoutine, __reg("a1") APTR intData, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define AddKBInt(intRoutine, intData) __AddKBInt((intRoutine), (intData), LowLevelBase)

void __RemKBInt(__reg("a1") APTR intHandle, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define RemKBInt(intHandle) __RemKBInt((intHandle), LowLevelBase)

ULONG __SystemControlA(__reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define SystemControlA(tagList) __SystemControlA((tagList), LowLevelBase)

APTR __AddTimerInt(__reg("a0") APTR intRoutine, __reg("a1") APTR intData, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define AddTimerInt(intRoutine, intData) __AddTimerInt((intRoutine), (intData), LowLevelBase)

void __RemTimerInt(__reg("a1") APTR intHandle, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define RemTimerInt(intHandle) __RemTimerInt((intHandle), LowLevelBase)

void __StopTimerInt(__reg("a1") APTR intHandle, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define StopTimerInt(intHandle) __StopTimerInt((intHandle), LowLevelBase)

void __StartTimerInt(__reg("a1") APTR intHandle, __reg("d0") unsigned long timeInterval, __reg("d1") long continuous, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define StartTimerInt(intHandle, timeInterval, continuous) __StartTimerInt((intHandle), (timeInterval), (continuous), LowLevelBase)

ULONG __ElapsedTime(__reg("a0") struct EClockVal * context, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define ElapsedTime(context) __ElapsedTime((context), LowLevelBase)

APTR __AddVBlankInt(__reg("a0") APTR intRoutine, __reg("a1") APTR intData, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define AddVBlankInt(intRoutine, intData) __AddVBlankInt((intRoutine), (intData), LowLevelBase)

void __RemVBlankInt(__reg("a1") APTR intHandle, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define RemVBlankInt(intHandle) __RemVBlankInt((intHandle), LowLevelBase)

BOOL __SetJoyPortAttrsA(__reg("d0") unsigned long portNumber, __reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define SetJoyPortAttrsA(portNumber, tagList) __SetJoyPortAttrsA((portNumber), (tagList), LowLevelBase)

#endif /*  _VBCCINLINE_LOWLEVEL_H  */
