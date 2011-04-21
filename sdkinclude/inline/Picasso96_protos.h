struct BitMap * __p96AllocBitMap(__reg("d0") ULONG SizeX,__reg("d1") ULONG SizeY,__reg("d2") ULONG Depth,__reg("d3") ULONG Flags,__reg("a0") struct BitMap *friend_bitmap,__reg("d7") RGBFTYPE RGBFormat,__reg("a6") void *)="\tjsr\t-30(a6)";
#define p96AllocBitMap(x1,x2,x3,x4,x5,x6) __p96AllocBitMap((x1),(x2),(x3),(x4),(x5),(x6),P96Base)
void  __p96FreeBitMap(__reg("a0") struct BitMap *bm,__reg("a6") void *)="\tjsr\t-36(a6)";
#define p96FreeBitMap(x1) __p96FreeBitMap((x1),P96Base)
ULONG  __p96GetBitMapAttr(__reg("a0") struct BitMap *bm,__reg("d0") ULONG attribute_number,__reg("a6") void *)="\tjsr\t-42(a6)";
#define p96GetBitMapAttr(x1,x2) __p96GetBitMapAttr((x1),(x2),P96Base)
LONG  __p96LockBitMap(__reg("a0") struct BitMap *bm,__reg("a1") UBYTE *buf,__reg("d0") ULONG size,__reg("a6") void *)="\tjsr\t-48(a6)";
#define p96LockBitMap(x1,x2,x3) __p96LockBitMap((x1),(x2),(x3),P96Base)
void  __p96UnlockBitMap(__reg("a0") struct BitMap *bm,__reg("d0") LONG Lock,__reg("a6") void *)="\tjsr\t-54(a6)";
#define p96UnlockBitMap(x1,x2) __p96UnlockBitMap((x1),(x2),P96Base)
ULONG  __p96BestModeIDTagList(__reg("a0") struct TagItem *Tags,__reg("a6") void *)="\tjsr\t-60(a6)";
#define p96BestModeIDTagList(x1) __p96BestModeIDTagList((x1),P96Base)
ULONG  __p96RequestModeIDTagList(__reg("a0") struct TagItem *Tags,__reg("a6") void *)="\tjsr\t-66(a6)";
#define p96RequestModeIDTagList(x1) __p96RequestModeIDTagList((x1),P96Base)
struct List * __p96AllocModeListTagList(__reg("a0") struct TagItem *Tags,__reg("a6") void *)="\tjsr\t-72(a6)";
#define p96AllocModeListTagList(x1) __p96AllocModeListTagList((x1),P96Base)
void  __p96FreeModeList(__reg("a0") struct List *ModeList,__reg("a6") void *)="\tjsr\t-78(a6)";
#define p96FreeModeList(x1) __p96FreeModeList((x1),P96Base)
ULONG  __p96GetModeIDAttr(__reg("d0") ULONG DisplayID,__reg("d1") ULONG attribute_number,__reg("a6") void *)="\tjsr\t-84(a6)";
#define p96GetModeIDAttr(x1,x2) __p96GetModeIDAttr((x1),(x2),P96Base)
struct Screen * __p96OpenScreenTagList(__reg("a0") struct TagItem *Tags,__reg("a6") void *)="\tjsr\t-90(a6)";
#define p96OpenScreenTagList(x1) __p96OpenScreenTagList((x1),P96Base)
BOOL  __p96CloseScreen(__reg("a0") struct Screen *screen,__reg("a6") void *)="\tjsr\t-96(a6)";
#define p96CloseScreen(x1) __p96CloseScreen((x1),P96Base)
void  __p96WritePixelArray(__reg("a0") struct RenderInfo *ri,__reg("d0") UWORD SrcX,__reg("d1") UWORD SrcY,__reg("a1") struct RastPort *rp,__reg("d2") UWORD DestX,__reg("d3") UWORD DestY,__reg("d4") UWORD SizeX,__reg("d5") UWORD SizeY,__reg("a6") void *)="\tjsr\t-102(a6)";
#define p96WritePixelArray(x1,x2,x3,x4,x5,x6,x7,x8) __p96WritePixelArray((x1),(x2),(x3),(x4),(x5),(x6),(x7),(x8),P96Base)
void  __p96ReadPixelArray(__reg("a0") struct RenderInfo *ri,__reg("d0") UWORD DestX,__reg("d1") UWORD DestY,__reg("a1") struct RastPort *rp,__reg("d2") UWORD SrcX,__reg("d3") UWORD SrcY,__reg("d4") UWORD SizeX,__reg("d5") UWORD SizeY,__reg("a6") void *)="\tjsr\t-108(a6)";
#define p96ReadPixelArray(x1,x2,x3,x4,x5,x6,x7,x8) __p96ReadPixelArray((x1),(x2),(x3),(x4),(x5),(x6),(x7),(x8),P96Base)
ULONG  __p96WritePixel(__reg("a1") struct RastPort *rp,__reg("d0") UWORD x,__reg("d1") UWORD y,__reg("d2") ULONG color,__reg("a6") void *)="\tjsr\t-114(a6)";
#define p96WritePixel(x1,x2,x3,x4) __p96WritePixel((x1),(x2),(x3),(x4),P96Base)
ULONG  __p96ReadPixel(__reg("a1") struct RastPort *rp,__reg("d0") UWORD x,__reg("d1") UWORD y,__reg("a6") void *)="\tjsr\t-120(a6)";
#define p96ReadPixel(x1,x2,x3) __p96ReadPixel((x1),(x2),(x3),P96Base)
void  __p96RectFill(__reg("a1") struct RastPort *rp,__reg("d0") UWORD MinX,__reg("d1") UWORD MinY,__reg("d2") UWORD MaxX,__reg("d3") UWORD MaxY,__reg("d4") ULONG ARGB,__reg("a6") void *)="\tjsr\t-126(a6)";
#define p96RectFill(x1,x2,x3,x4,x5,x6) __p96RectFill((x1),(x2),(x3),(x4),(x5),(x6),P96Base)
void  __p96WriteTrueColorData(__reg("a0") struct TrueColorInfo *tci,__reg("d0") UWORD SrcX,__reg("d1") UWORD SrcY,__reg("a1") struct RastPort *rp,__reg("d2") UWORD DestX,__reg("d3") UWORD DestY,__reg("d4") UWORD SizeX,__reg("d5") UWORD SizeY,__reg("a6") void *)="\tjsr\t-132(a6)";
#define p96WriteTrueColorData(x1,x2,x3,x4,x5,x6,x7,x8) __p96WriteTrueColorData((x1),(x2),(x3),(x4),(x5),(x6),(x7),(x8),P96Base)
void  __p96ReadTrueColorData(__reg("a0") struct TrueColorInfo *tci,__reg("d0") UWORD DestX,__reg("d1") UWORD DestY,__reg("a1") struct RastPort *rp,__reg("d2") UWORD SrcX,__reg("d3") UWORD SrcY,__reg("d4") UWORD SizeX,__reg("d5") UWORD SizeY,__reg("a6") void *)="\tjsr\t-138(a6)";
#define p96ReadTrueColorData(x1,x2,x3,x4,x5,x6,x7,x8) __p96ReadTrueColorData((x1),(x2),(x3),(x4),(x5),(x6),(x7),(x8),P96Base)
struct Window * __p96PIP_OpenTagList(__reg("a0") struct TagItem *Tags,__reg("a6") void *)="\tjsr\t-156(a6)";
#define p96PIP_OpenTagList(x1) __p96PIP_OpenTagList((x1),P96Base)
BOOL  __p96PIP_Close(__reg("a0") struct Window *Window,__reg("a6") void *)="\tjsr\t-162(a6)";
#define p96PIP_Close(x1) __p96PIP_Close((x1),P96Base)
LONG  __p96PIP_SetTagList(__reg("a0") struct Window *Window,__reg("a1") struct TagItem *Tags,__reg("a6") void *)="\tjsr\t-168(a6)";
#define p96PIP_SetTagList(x1,x2) __p96PIP_SetTagList((x1),(x2),P96Base)
LONG  __p96PIP_GetTagList(__reg("a0") struct Window *Window,__reg("a1") struct TagItem *Tags,__reg("a6") void *)="\tjsr\t-174(a6)";
#define p96PIP_GetTagList(x1,x2) __p96PIP_GetTagList((x1),(x2),P96Base)
