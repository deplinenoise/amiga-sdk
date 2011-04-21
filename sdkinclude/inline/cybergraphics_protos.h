#ifndef _VBCCINLINE_CYBERGRAPHICS_H
#define _VBCCINLINE_CYBERGRAPHICS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

BOOL __IsCyberModeID(__reg("d0") ULONG displayID, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define IsCyberModeID(displayID) __IsCyberModeID((displayID), CyberGfxBase)

ULONG __BestCModeIDTagList(__reg("a0") struct TagItem * BestModeIDTags, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define BestCModeIDTagList(BestModeIDTags) __BestCModeIDTagList((BestModeIDTags), CyberGfxBase)

ULONG __CModeRequestTagList(__reg("a0") APTR ModeRequest, __reg("a1") struct TagItem * ModeRequestTags, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define CModeRequestTagList(ModeRequest, ModeRequestTags) __CModeRequestTagList((ModeRequest), (ModeRequestTags), CyberGfxBase)

struct List * __AllocCModeListTagList(__reg("a1") struct TagItem * ModeListTags, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define AllocCModeListTagList(ModeListTags) __AllocCModeListTagList((ModeListTags), CyberGfxBase)

void __FreeCModeList(__reg("a0") struct List * ModeList, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define FreeCModeList(ModeList) __FreeCModeList((ModeList), CyberGfxBase)

LONG __ScalePixelArray(__reg("a0") APTR srcRect, __reg("d0") UWORD SrcW, __reg("d1") UWORD SrcH, __reg("d2") UWORD SrcMod, __reg("a1") struct RastPort * RastPort, __reg("d3") UWORD DestX, __reg("d4") UWORD DestY, __reg("d5") UWORD DestW, __reg("d6") UWORD DestH, __reg("d7") UBYTE SrcFormat, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define ScalePixelArray(srcRect, SrcW, SrcH, SrcMod, RastPort, DestX, DestY, DestW, DestH, SrcFormat) __ScalePixelArray((srcRect), (SrcW), (SrcH), (SrcMod), (RastPort), (DestX), (DestY), (DestW), (DestH), (SrcFormat), CyberGfxBase)

ULONG __GetCyberMapAttr(__reg("a0") struct BitMap * CyberGfxBitmap, __reg("d0") ULONG CyberAttrTag, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define GetCyberMapAttr(CyberGfxBitmap, CyberAttrTag) __GetCyberMapAttr((CyberGfxBitmap), (CyberAttrTag), CyberGfxBase)

ULONG __GetCyberIDAttr(__reg("d0") ULONG CyberIDAttr, __reg("d1") ULONG CyberDisplayModeID, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define GetCyberIDAttr(CyberIDAttr, CyberDisplayModeID) __GetCyberIDAttr((CyberIDAttr), (CyberDisplayModeID), CyberGfxBase)

ULONG __ReadRGBPixel(__reg("a1") struct RastPort * RastPort, __reg("d0") UWORD x, __reg("d1") UWORD y, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define ReadRGBPixel(RastPort, x, y) __ReadRGBPixel((RastPort), (x), (y), CyberGfxBase)

LONG __WriteRGBPixel(__reg("a1") struct RastPort * RastPort, __reg("d0") UWORD x, __reg("d1") UWORD y, __reg("d2") ULONG argb, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define WriteRGBPixel(RastPort, x, y, argb) __WriteRGBPixel((RastPort), (x), (y), (argb), CyberGfxBase)

ULONG __ReadPixelArray(__reg("a0") APTR destRect, __reg("d0") UWORD destX, __reg("d1") UWORD destY, __reg("d2") UWORD destMod, __reg("a1") struct RastPort * RastPort, __reg("d3") UWORD SrcX, __reg("d4") UWORD SrcY, __reg("d5") UWORD SizeX, __reg("d6") UWORD SizeY, __reg("d7") UBYTE DestFormat, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define ReadPixelArray(destRect, destX, destY, destMod, RastPort, SrcX, SrcY, SizeX, SizeY, DestFormat) __ReadPixelArray((destRect), (destX), (destY), (destMod), (RastPort), (SrcX), (SrcY), (SizeX), (SizeY), (DestFormat), CyberGfxBase)

ULONG __WritePixelArray(__reg("a0") APTR srcRect, __reg("d0") UWORD SrcX, __reg("d1") UWORD SrcY, __reg("d2") UWORD SrcMod, __reg("a1") struct RastPort * RastPort, __reg("d3") UWORD DestX, __reg("d4") UWORD DestY, __reg("d5") UWORD SizeX, __reg("d6") UWORD SizeY, __reg("d7") UBYTE SrcFormat, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define WritePixelArray(srcRect, SrcX, SrcY, SrcMod, RastPort, DestX, DestY, SizeX, SizeY, SrcFormat) __WritePixelArray((srcRect), (SrcX), (SrcY), (SrcMod), (RastPort), (DestX), (DestY), (SizeX), (SizeY), (SrcFormat), CyberGfxBase)

ULONG __MovePixelArray(__reg("d0") UWORD SrcX, __reg("d1") UWORD SrcY, __reg("a1") struct RastPort * RastPort, __reg("d2") UWORD DestX, __reg("d3") UWORD DestY, __reg("d4") UWORD SizeX, __reg("d5") UWORD SizeY, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define MovePixelArray(SrcX, SrcY, RastPort, DestX, DestY, SizeX, SizeY) __MovePixelArray((SrcX), (SrcY), (RastPort), (DestX), (DestY), (SizeX), (SizeY), CyberGfxBase)

ULONG __InvertPixelArray(__reg("a1") struct RastPort * RastPort, __reg("d0") UWORD DestX, __reg("d1") UWORD DestY, __reg("d2") UWORD SizeX, __reg("d3") UWORD SizeY, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define InvertPixelArray(RastPort, DestX, DestY, SizeX, SizeY) __InvertPixelArray((RastPort), (DestX), (DestY), (SizeX), (SizeY), CyberGfxBase)

ULONG __FillPixelArray(__reg("a1") struct RastPort * RastPort, __reg("d0") UWORD DestX, __reg("d1") UWORD DestY, __reg("d2") UWORD SizeX, __reg("d3") UWORD SizeY, __reg("d4") ULONG ARGB, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define FillPixelArray(RastPort, DestX, DestY, SizeX, SizeY, ARGB) __FillPixelArray((RastPort), (DestX), (DestY), (SizeX), (SizeY), (ARGB), CyberGfxBase)

void __DoCDrawMethodTagList(__reg("a0") struct Hook * Hook, __reg("a1") struct RastPort * RastPort, __reg("a2") struct TagItem * TagList, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define DoCDrawMethodTagList(Hook, RastPort, TagList) __DoCDrawMethodTagList((Hook), (RastPort), (TagList), CyberGfxBase)

void __CVideoCtrlTagList(__reg("a0") struct ViewPort * ViewPort, __reg("a1") struct TagItem * TagList, __reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define CVideoCtrlTagList(ViewPort, TagList) __CVideoCtrlTagList((ViewPort), (TagList), CyberGfxBase)

APTR __LockBitMapTagList(__reg("a0") APTR BitMap, __reg("a1") struct TagItem * TagList, __reg("a6") struct Library *)="\tjsr\t-168(a6)";
#define LockBitMapTagList(BitMap, TagList) __LockBitMapTagList((BitMap), (TagList), CyberGfxBase)

void __UnLockBitMap(__reg("a0") APTR Handle, __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define UnLockBitMap(Handle) __UnLockBitMap((Handle), CyberGfxBase)

#endif /*  _VBCCINLINE_CYBERGRAPHICS_H  */
