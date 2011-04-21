#ifndef _VBCCINLINE_BATTMEM_H
#define _VBCCINLINE_BATTMEM_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

void __ObtainBattSemaphore(__reg("a6") struct Library *)="\tjsr\t-6(a6)";
#define ObtainBattSemaphore() __ObtainBattSemaphore(BattMemBase)

void __ReleaseBattSemaphore(__reg("a6") struct Library *)="\tjsr\t-12(a6)";
#define ReleaseBattSemaphore() __ReleaseBattSemaphore(BattMemBase)

ULONG __ReadBattMem(__reg("a0") APTR buffer, __reg("d0") unsigned long offset, __reg("d1") unsigned long length, __reg("a6") struct Library *)="\tjsr\t-18(a6)";
#define ReadBattMem(buffer, offset, length) __ReadBattMem((buffer), (offset), (length), BattMemBase)

ULONG __WriteBattMem(__reg("a0") APTR buffer, __reg("d0") unsigned long offset, __reg("d1") unsigned long length, __reg("a6") struct Library *)="\tjsr\t-24(a6)";
#define WriteBattMem(buffer, offset, length) __WriteBattMem((buffer), (offset), (length), BattMemBase)

#endif /*  _VBCCINLINE_BATTMEM_H  */
