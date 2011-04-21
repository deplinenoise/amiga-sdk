#ifndef _VBCCINLINE_MISC_H
#define _VBCCINLINE_MISC_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

UBYTE * __AllocMiscResource(__reg("d0") unsigned long unitNum, __reg("a1") UBYTE * name, __reg("a6") struct Library *)="\tjsr\t-6(a6)";
#define AllocMiscResource(unitNum, name) __AllocMiscResource((unitNum), (name), MiscBase)

void __FreeMiscResource(__reg("d0") unsigned long unitNum, __reg("a6") struct Library *)="\tjsr\t-12(a6)";
#define FreeMiscResource(unitNum) __FreeMiscResource((unitNum), MiscBase)

#endif /*  _VBCCINLINE_MISC_H  */
