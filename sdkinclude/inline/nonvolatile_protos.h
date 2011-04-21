#ifndef _VBCCINLINE_NONVOLATILE_H
#define _VBCCINLINE_NONVOLATILE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

APTR __GetCopyNV(__reg("a0") STRPTR appName, __reg("a1") STRPTR itemName, __reg("d1") long killRequesters, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define GetCopyNV(appName, itemName, killRequesters) __GetCopyNV((appName), (itemName), (killRequesters), NVBase)

void __FreeNVData(__reg("a0") APTR data, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define FreeNVData(data) __FreeNVData((data), NVBase)

UWORD __StoreNV(__reg("a0") STRPTR appName, __reg("a1") STRPTR itemName, __reg("a2") APTR data, __reg("d0") unsigned long length, __reg("d1") long killRequesters, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define StoreNV(appName, itemName, data, length, killRequesters) __StoreNV((appName), (itemName), (data), (length), (killRequesters), NVBase)

BOOL __DeleteNV(__reg("a0") STRPTR appName, __reg("a1") STRPTR itemName, __reg("d1") long killRequesters, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define DeleteNV(appName, itemName, killRequesters) __DeleteNV((appName), (itemName), (killRequesters), NVBase)

struct NVInfo * __GetNVInfo(__reg("d1") long killRequesters, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define GetNVInfo(killRequesters) __GetNVInfo((killRequesters), NVBase)

struct MinList * __GetNVList(__reg("a0") STRPTR appName, __reg("d1") long killRequesters, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define GetNVList(appName, killRequesters) __GetNVList((appName), (killRequesters), NVBase)

BOOL __SetNVProtection(__reg("a0") STRPTR appName, __reg("a1") STRPTR itemName, __reg("d2") long mask, __reg("d1") long killRequesters, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define SetNVProtection(appName, itemName, mask, killRequesters) __SetNVProtection((appName), (itemName), (mask), (killRequesters), NVBase)

#endif /*  _VBCCINLINE_NONVOLATILE_H  */
