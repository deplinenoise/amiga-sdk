#ifndef _VBCCINLINE_DISK_H
#define _VBCCINLINE_DISK_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

BOOL __AllocUnit(__reg("d0") long unitNum, __reg("a6") struct DiskResource *)="\tjsr\t-6(a6)";
#define AllocUnit(unitNum) __AllocUnit((unitNum), DiskBase)

void __FreeUnit(__reg("d0") long unitNum, __reg("a6") struct DiskResource *)="\tjsr\t-12(a6)";
#define FreeUnit(unitNum) __FreeUnit((unitNum), DiskBase)

struct DiskResourceUnit * __GetUnit(__reg("a1") struct DiskResourceUnit * unitPointer, __reg("a6") struct DiskResource *)="\tjsr\t-18(a6)";
#define GetUnit(unitPointer) __GetUnit((unitPointer), DiskBase)

void __GiveUnit(__reg("a6") struct DiskResource *)="\tjsr\t-24(a6)";
#define GiveUnit() __GiveUnit(DiskBase)

LONG __GetUnitID(__reg("d0") long unitNum, __reg("a6") struct DiskResource *)="\tjsr\t-30(a6)";
#define GetUnitID(unitNum) __GetUnitID((unitNum), DiskBase)

LONG __ReadUnitID(__reg("d0") long unitNum, __reg("a6") struct DiskResource *)="\tjsr\t-36(a6)";
#define ReadUnitID(unitNum) __ReadUnitID((unitNum), DiskBase)

#endif /*  _VBCCINLINE_DISK_H  */
