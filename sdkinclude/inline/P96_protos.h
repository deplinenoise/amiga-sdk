#ifndef _VBCCINLINE_P96_H
#define _VBCCINLINE_P96_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct BitMap * __p96AllocBitMap(__reg("d0") ULONG SizeX, __reg("d1") ULONG SizeY, __reg("d2") ULONG Depth, __reg("d3") ULONG Flags, __reg("a0") struct BitMap * a0arg, __reg("d7") RGBFTYPE RGBFormat, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define p96AllocBitMap(SizeX, SizeY, Depth, Flags, a0arg, RGBFormat) __p96AllocBitMap((SizeX), (SizeY), (Depth), (Flags), (a0arg), (RGBFormat), P96Base)

void __p96FreeBitMap(__reg("a0") struct BitMap * BitMap, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define p96FreeBitMap(BitMap) __p96FreeBitMap((BitMap), P96Base)

ULONG __p96GetBitMapAttr(__reg("a0") struct BitMap * BitMap, __reg("d0") ULONG Attribute, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define p96GetBitMapAttr(BitMap, Attribute) __p96GetBitMapAttr((BitMap), (Attribute), P96Base)

LONG __p96LockBitMap(__reg("a0") struct BitMap * BitMap, __reg("a1") UBYTE * Buffer, __reg("d0") ULONG Size, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define p96LockBitMap(BitMap, Buffer, Size) __p96LockBitMap((BitMap), (Buffer), (Size), P96Base)

void __p96UnlockBitMap(__reg("a0") struct BitMap * BitMap, __reg("d0") LONG Lock, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define p96UnlockBitMap(BitMap, Lock) __p96UnlockBitMap((BitMap), (Lock), P96Base)

ULONG __p96BestModeIDTagList(__reg("a0") struct TagItem * Tags, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define p96BestModeIDTagList(Tags) __p96BestModeIDTagList((Tags), P96Base)

ULONG __p96RequestModeIDTagList(__reg("a0") struct TagItem * Tags, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define p96RequestModeIDTagList(Tags) __p96RequestModeIDTagList((Tags), P96Base)

struct List * __p96AllocModeListTagList(__reg("a0") struct TagItem * Tags, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define p96AllocModeListTagList(Tags) __p96AllocModeListTagList((Tags), P96Base)

void __p96FreeModeList(__reg("a0") struct List * List, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define p96FreeModeList(List) __p96FreeModeList((List), P96Base)

ULONG __p96GetModeIDAttr(__reg("d0") ULONG Mode, __reg("d1") ULONG Attribute, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define p96GetModeIDAttr(Mode, Attribute) __p96GetModeIDAttr((Mode), (Attribute), P96Base)

struct Screen * __p96OpenScreenTagList(__reg("a0") struct TagItem * Tags, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define p96OpenScreenTagList(Tags) __p96OpenScreenTagList((Tags), P96Base)

BOOL __p96CloseScreen(__reg("a0") struct Screen * Screen, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define p96CloseScreen(Screen) __p96CloseScreen((Screen), P96Base)

void __p96WritePixelArray(__reg("a0") struct RenderInfo * ri, __reg("d0") UWORD SrcX, __reg("d1") UWORD SrcY, __reg("a1") struct RastPort * rp, __reg("d2") UWORD DestX, __reg("d3") UWORD DestY, __reg("d4") UWORD SizeX, __reg("d5") UWORD SizeY, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define p96WritePixelArray(ri, SrcX, SrcY, rp, DestX, DestY, SizeX, SizeY) __p96WritePixelArray((ri), (SrcX), (SrcY), (rp), (DestX), (DestY), (SizeX), (SizeY), P96Base)

void __p96ReadPixelArray(__reg("a0") struct RenderInfo * ri, __reg("d0") UWORD DestX, __reg("d1") UWORD DestY, __reg("a1") struct RastPort * rp, __reg("d2") UWORD SrcX, __reg("d3") UWORD SrcY, __reg("d4") UWORD SizeX, __reg("d5") UWORD SizeY, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define p96ReadPixelArray(ri, DestX, DestY, rp, SrcX, SrcY, SizeX, SizeY) __p96ReadPixelArray((ri), (DestX), (DestY), (rp), (SrcX), (SrcY), (SizeX), (SizeY), P96Base)

ULONG __p96WritePixel(__reg("a1") struct RastPort * rp, __reg("d0") UWORD x, __reg("d1") UWORD y, __reg("d2") ULONG color, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define p96WritePixel(rp, x, y, color) __p96WritePixel((rp), (x), (y), (color), P96Base)

ULONG __p96ReadPixel(__reg("a1") struct RastPort * rp, __reg("d0") UWORD x, __reg("d1") UWORD y, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define p96ReadPixel(rp, x, y) __p96ReadPixel((rp), (x), (y), P96Base)

void __p96RectFill(__reg("a1") struct RastPort * rp, __reg("d0") UWORD MinX, __reg("d1") UWORD MinY, __reg("d2") UWORD MaxX, __reg("d3") UWORD MaxY, __reg("d4") ULONG color, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define p96RectFill(rp, MinX, MinY, MaxX, MaxY, color) __p96RectFill((rp), (MinX), (MinY), (MaxX), (MaxY), (color), P96Base)

void __p96WriteTrueColorData(__reg("a0") struct TrueColorInfo * tci, __reg("d0") UWORD SrcX, __reg("d1") UWORD SrcY, __reg("a1") struct RastPort * rp, __reg("d2") UWORD DestX, __reg("d3") UWORD DestY, __reg("d4") UWORD SizeX, __reg("d5") UWORD SizeY, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define p96WriteTrueColorData(tci, SrcX, SrcY, rp, DestX, DestY, SizeX, SizeY) __p96WriteTrueColorData((tci), (SrcX), (SrcY), (rp), (DestX), (DestY), (SizeX), (SizeY), P96Base)

void __p96ReadTrueColorData(__reg("a0") struct TrueColorInfo * tci, __reg("d0") UWORD DestX, __reg("d1") UWORD DestY, __reg("a1") struct RastPort * rp, __reg("d2") UWORD SrcX, __reg("d3") UWORD SrcY, __reg("d4") UWORD SizeX, __reg("d5") UWORD SizeY, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define p96ReadTrueColorData(tci, DestX, DestY, rp, SrcX, SrcY, SizeX, SizeY) __p96ReadTrueColorData((tci), (DestX), (DestY), (rp), (SrcX), (SrcY), (SizeX), (SizeY), P96Base)

struct Window * __p96PIP_OpenTagList(__reg("a0") struct TagItem * x1, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define p96PIP_OpenTagList(x1) __p96PIP_OpenTagList((x1), P96Base)

BOOL __p96PIP_Close(__reg("a0") struct Window * x1, __reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define p96PIP_Close(x1) __p96PIP_Close((x1), P96Base)

LONG __p96PIP_SetTagList(__reg("a0") struct Window * x1, __reg("a1") struct TagItem * x2, __reg("a6") struct Library *)="\tjsr\t-168(a6)";
#define p96PIP_SetTagList(x1, x2) __p96PIP_SetTagList((x1), (x2), P96Base)

LONG __p96PIP_GetTagList(__reg("a0") struct Window * x1, __reg("a1") struct TagItem * x2, __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define p96PIP_GetTagList(x1, x2) __p96PIP_GetTagList((x1), (x2), P96Base)

#endif /*  _VBCCINLINE_P96_H  */
