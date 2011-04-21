#ifndef _VBCCINLINE_CGXSYSTEM_H
#define _VBCCINLINE_CGXSYSTEM_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct Region * __InstallTransparentRegion(__reg("a0") SLayer SLayer, __reg("a1") struct Region * Region, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define InstallTransparentRegion(SLayer, Region) __InstallTransparentRegion((SLayer), (Region), CGXSystemBase)

struct Hook * __InstallTransparentRegionHook(__reg("a0") SLayer SLayer, __reg("a1") struct Hook * Hook, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define InstallTransparentRegionHook(SLayer, Hook) __InstallTransparentRegionHook((SLayer), (Hook), CGXSystemBase)

ULONG __HideWindow(__reg("a0") struct Window * Window, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define HideWindow(Window) __HideWindow((Window), CGXSystemBase)

ULONG __ShowWindow(__reg("a0") struct Window * Window, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define ShowWindow(Window) __ShowWindow((Window), CGXSystemBase)

#endif /*  _VBCCINLINE_CGXSYSTEM_H  */
