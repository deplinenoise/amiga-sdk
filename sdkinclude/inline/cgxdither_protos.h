#ifndef _VBCCINLINE_CGXDITHER_H
#define _VBCCINLINE_CGXDITHER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

DITHERINFO __CreateDitherInfo(__reg("a0") struct ViewPort	* vp, __reg("a1") struct RastPort	* rp, __reg("a2") ULONG			* rgbcm, __reg("d0") LONG size, __reg("d1") BOOL sharepens, __reg("d2") BOOL usecolour, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define CreateDitherInfo(vp, rp, rgbcm, size, sharepens, usecolour) __CreateDitherInfo((vp), (rp), (rgbcm), (size), (sharepens), (usecolour), CGXDitherBase)

VOID __DeleteDitherInfo(__reg("a0") DITHERINFO ditherinfo, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define DeleteDitherInfo(ditherinfo) __DeleteDitherInfo((ditherinfo), CGXDitherBase)

BOOL __SetDitherMode(__reg("a0") DITHERINFO ditherinfo, __reg("d0") ULONG mode, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define SetDitherMode(ditherinfo, mode) __SetDitherMode((ditherinfo), (mode), CGXDitherBase)

BOOL __DitherMap(__reg("a0") struct BitMap	* sbm, __reg("a1") struct BitMap	* dbm, __reg("a2") DITHERINFO ditherinfo, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define DitherMap(sbm, dbm, ditherinfo) __DitherMap((sbm), (dbm), (ditherinfo), CGXDitherBase)

BOOL __ConvertMap(__reg("a0") struct BitMap	* sbm, __reg("a1") struct BitMap	* dbm, __reg("d0") long left, __reg("d1") long top, __reg("d2") long width, __reg("d3") long height, __reg("d4") unsigned long flags, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define ConvertMap(sbm, dbm, left, top, width, height, flags) __ConvertMap((sbm), (dbm), (left), (top), (width), (height), (flags), CGXDitherBase)

void __MapHistogram(__reg("a0") struct BitMap	* bm, __reg("a1") ULONG		* histogram, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define MapHistogram(bm, histogram) __MapHistogram((bm), (histogram), CGXDitherBase)

ULONG __RemapMapColours(__reg("a0") struct BitMap	* sbm, __reg("a1") struct BitMap	* dbm, __reg("a2") UBYTE		* remaparr1, __reg("a3") UBYTE		* remaparr2, __reg("a4") struct ColorMap	* remapcm, __reg("d0") ULONG flags, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define RemapMapColours(sbm, dbm, remaparr1, remaparr2, remapcm, flags) __RemapMapColours((sbm), (dbm), (remaparr1), (remaparr2), (remapcm), (flags), CGXDitherBase)

struct BitMap * __CreateMapMask(__reg("a0") struct BitMap	* sbm, __reg("d0") ULONG transcol, __reg("d1") ULONG flags, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define CreateMapMask(sbm, transcol, flags) __CreateMapMask((sbm), (transcol), (flags), CGXDitherBase)

void __FreeMapMask(__reg("a0") struct BitMap	* maskbm, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define FreeMapMask(maskbm) __FreeMapMask((maskbm), CGXDitherBase)

#endif /*  _VBCCINLINE_CGXDITHER_H  */
