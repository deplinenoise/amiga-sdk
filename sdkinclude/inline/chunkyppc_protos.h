#ifndef _VBCCINLINE_CHUNKYPPC_H
#define _VBCCINLINE_CHUNKYPPC_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

int __ChunkyInit68k(__reg("a0") struct Mode_Screen * Mode_Screen, __reg("d0") int srcformat, __reg("a6") struct Library *)="\tjsr\t-198(a6)";
#define ChunkyInit68k(Mode_Screen, srcformat) __ChunkyInit68k((Mode_Screen), (srcformat), ChunkyPPCBase)

struct Mode_Screen * __OpenGraphics(__reg("a0") char * Title, __reg("a1") struct Mode_Screen * Mode_Screen, __reg("d0") int override, __reg("a6") struct Library *)="\tjsr\t-204(a6)";
#define OpenGraphics(Title, Mode_Screen, override) __OpenGraphics((Title), (Mode_Screen), (override), ChunkyPPCBase)

void __CloseGraphics(__reg("a0") struct Mode_Screen * Mode_Screen, __reg("d0") int shutdownlibs, __reg("a6") struct Library *)="\tjsr\t-210(a6)";
#define CloseGraphics(Mode_Screen, shutdownlibs) __CloseGraphics((Mode_Screen), (shutdownlibs), ChunkyPPCBase)

void __LoadColors(__reg("a0") struct Mode_Screen * Mode_Screen, __reg("a1") ULONG * Table, __reg("a6") struct Library *)="\tjsr\t-216(a6)";
#define LoadColors(Mode_Screen, Table) __LoadColors((Mode_Screen), (Table), ChunkyPPCBase)

void __DoubleBuffer(__reg("a0") struct Mode_Screen * Mode_Screen, __reg("a6") struct Library *)="\tjsr\t-222(a6)";
#define DoubleBuffer(Mode_Screen) __DoubleBuffer((Mode_Screen), ChunkyPPCBase)

#endif /*  _VBCCINLINE_CHUNKYPPC_H  */
