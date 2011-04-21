#ifndef _VBCCINLINE_GRAPHICS_H
#define _VBCCINLINE_GRAPHICS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

LONG __BltBitMap(__reg("a0") struct BitMap * srcBitMap, __reg("d0") long xSrc, __reg("d1") long ySrc, __reg("a1") struct BitMap * destBitMap, __reg("d2") long xDest, __reg("d3") long yDest, __reg("d4") long xSize, __reg("d5") long ySize, __reg("d6") unsigned long minterm, __reg("d7") unsigned long mask, __reg("a2") PLANEPTR tempA, __reg("a6") struct GfxBase *)="\tjsr\t-30(a6)";
#define BltBitMap(srcBitMap, xSrc, ySrc, destBitMap, xDest, yDest, xSize, ySize, minterm, mask, tempA) __BltBitMap((srcBitMap), (xSrc), (ySrc), (destBitMap), (xDest), (yDest), (xSize), (ySize), (minterm), (mask), (tempA), GfxBase)

void __BltTemplate(__reg("a0") PLANEPTR source, __reg("d0") long xSrc, __reg("d1") long srcMod, __reg("a1") struct RastPort * destRP, __reg("d2") long xDest, __reg("d3") long yDest, __reg("d4") long xSize, __reg("d5") long ySize, __reg("a6") struct GfxBase *)="\tjsr\t-36(a6)";
#define BltTemplate(source, xSrc, srcMod, destRP, xDest, yDest, xSize, ySize) __BltTemplate((source), (xSrc), (srcMod), (destRP), (xDest), (yDest), (xSize), (ySize), GfxBase)

void __ClearEOL(__reg("a1") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-42(a6)";
#define ClearEOL(rp) __ClearEOL((rp), GfxBase)

void __ClearScreen(__reg("a1") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-48(a6)";
#define ClearScreen(rp) __ClearScreen((rp), GfxBase)

WORD __TextLength(__reg("a1") struct RastPort * rp, __reg("a0") STRPTR string, __reg("d0") unsigned long count, __reg("a6") struct GfxBase *)="\tjsr\t-54(a6)";
#define TextLength(rp, string, count) __TextLength((rp), (string), (count), GfxBase)

LONG __Text(__reg("a1") struct RastPort * rp, __reg("a0") STRPTR string, __reg("d0") unsigned long count, __reg("a6") struct GfxBase *)="\tjsr\t-60(a6)";
#define Text(rp, string, count) __Text((rp), (string), (count), GfxBase)

LONG __SetFont(__reg("a1") struct RastPort * rp, __reg("a0") struct TextFont * textFont, __reg("a6") struct GfxBase *)="\tjsr\t-66(a6)";
#define SetFont(rp, textFont) __SetFont((rp), (textFont), GfxBase)

struct TextFont * __OpenFont(__reg("a0") struct TextAttr * textAttr, __reg("a6") struct GfxBase *)="\tjsr\t-72(a6)";
#define OpenFont(textAttr) __OpenFont((textAttr), GfxBase)

void __CloseFont(__reg("a1") struct TextFont * textFont, __reg("a6") struct GfxBase *)="\tjsr\t-78(a6)";
#define CloseFont(textFont) __CloseFont((textFont), GfxBase)

ULONG __AskSoftStyle(__reg("a1") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-84(a6)";
#define AskSoftStyle(rp) __AskSoftStyle((rp), GfxBase)

ULONG __SetSoftStyle(__reg("a1") struct RastPort * rp, __reg("d0") unsigned long style, __reg("d1") unsigned long enable, __reg("a6") struct GfxBase *)="\tjsr\t-90(a6)";
#define SetSoftStyle(rp, style, enable) __SetSoftStyle((rp), (style), (enable), GfxBase)

void __AddBob(__reg("a0") struct Bob * bob, __reg("a1") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-96(a6)";
#define AddBob(bob, rp) __AddBob((bob), (rp), GfxBase)

void __AddVSprite(__reg("a0") struct VSprite * vSprite, __reg("a1") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-102(a6)";
#define AddVSprite(vSprite, rp) __AddVSprite((vSprite), (rp), GfxBase)

void __DoCollision(__reg("a1") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-108(a6)";
#define DoCollision(rp) __DoCollision((rp), GfxBase)

void __DrawGList(__reg("a1") struct RastPort * rp, __reg("a0") struct ViewPort * vp, __reg("a6") struct GfxBase *)="\tjsr\t-114(a6)";
#define DrawGList(rp, vp) __DrawGList((rp), (vp), GfxBase)

void __InitGels(__reg("a0") struct VSprite * head, __reg("a1") struct VSprite * tail, __reg("a2") struct GelsInfo * gelsInfo, __reg("a6") struct GfxBase *)="\tjsr\t-120(a6)";
#define InitGels(head, tail, gelsInfo) __InitGels((head), (tail), (gelsInfo), GfxBase)

void __InitMasks(__reg("a0") struct VSprite * vSprite, __reg("a6") struct GfxBase *)="\tjsr\t-126(a6)";
#define InitMasks(vSprite) __InitMasks((vSprite), GfxBase)

void __RemIBob(__reg("a0") struct Bob * bob, __reg("a1") struct RastPort * rp, __reg("a2") struct ViewPort * vp, __reg("a6") struct GfxBase *)="\tjsr\t-132(a6)";
#define RemIBob(bob, rp, vp) __RemIBob((bob), (rp), (vp), GfxBase)

void __RemVSprite(__reg("a0") struct VSprite * vSprite, __reg("a6") struct GfxBase *)="\tjsr\t-138(a6)";
#define RemVSprite(vSprite) __RemVSprite((vSprite), GfxBase)

void __SetCollision(__reg("d0") unsigned long num, __reg("a0") void (*routine)(struct VSprite *vSprite, APTR), __reg("a1") struct GelsInfo * gelsInfo, __reg("a6") struct GfxBase *)="\tjsr\t-144(a6)";
#define SetCollision(num, routine, gelsInfo) __SetCollision((num), (routine), (gelsInfo), GfxBase)

void __SortGList(__reg("a1") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-150(a6)";
#define SortGList(rp) __SortGList((rp), GfxBase)

void __AddAnimOb(__reg("a0") struct AnimOb * anOb, __reg("a1") struct AnimOb ** anKey, __reg("a2") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-156(a6)";
#define AddAnimOb(anOb, anKey, rp) __AddAnimOb((anOb), (anKey), (rp), GfxBase)

void __Animate(__reg("a0") struct AnimOb ** anKey, __reg("a1") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-162(a6)";
#define Animate(anKey, rp) __Animate((anKey), (rp), GfxBase)

BOOL __GetGBuffers(__reg("a0") struct AnimOb * anOb, __reg("a1") struct RastPort * rp, __reg("d0") long flag, __reg("a6") struct GfxBase *)="\tjsr\t-168(a6)";
#define GetGBuffers(anOb, rp, flag) __GetGBuffers((anOb), (rp), (flag), GfxBase)

void __InitGMasks(__reg("a0") struct AnimOb * anOb, __reg("a6") struct GfxBase *)="\tjsr\t-174(a6)";
#define InitGMasks(anOb) __InitGMasks((anOb), GfxBase)

void __DrawEllipse(__reg("a1") struct RastPort * rp, __reg("d0") long xCenter, __reg("d1") long yCenter, __reg("d2") long a, __reg("d3") long b, __reg("a6") struct GfxBase *)="\tjsr\t-180(a6)";
#define DrawEllipse(rp, xCenter, yCenter, a, b) __DrawEllipse((rp), (xCenter), (yCenter), (a), (b), GfxBase)

LONG __AreaEllipse(__reg("a1") struct RastPort * rp, __reg("d0") long xCenter, __reg("d1") long yCenter, __reg("d2") long a, __reg("d3") long b, __reg("a6") struct GfxBase *)="\tjsr\t-186(a6)";
#define AreaEllipse(rp, xCenter, yCenter, a, b) __AreaEllipse((rp), (xCenter), (yCenter), (a), (b), GfxBase)

void __LoadRGB4(__reg("a0") struct ViewPort * vp, __reg("a1") UWORD * colors, __reg("d0") long count, __reg("a6") struct GfxBase *)="\tjsr\t-192(a6)";
#define LoadRGB4(vp, colors, count) __LoadRGB4((vp), (colors), (count), GfxBase)

void __InitRastPort(__reg("a1") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-198(a6)";
#define InitRastPort(rp) __InitRastPort((rp), GfxBase)

void __InitVPort(__reg("a0") struct ViewPort * vp, __reg("a6") struct GfxBase *)="\tjsr\t-204(a6)";
#define InitVPort(vp) __InitVPort((vp), GfxBase)

ULONG __MrgCop(__reg("a1") struct View * view, __reg("a6") struct GfxBase *)="\tjsr\t-210(a6)";
#define MrgCop(view) __MrgCop((view), GfxBase)

ULONG __MakeVPort(__reg("a0") struct View * view, __reg("a1") struct ViewPort * vp, __reg("a6") struct GfxBase *)="\tjsr\t-216(a6)";
#define MakeVPort(view, vp) __MakeVPort((view), (vp), GfxBase)

void __LoadView(__reg("a1") struct View * view, __reg("a6") struct GfxBase *)="\tjsr\t-222(a6)";
#define LoadView(view) __LoadView((view), GfxBase)

void __WaitBlit(__reg("a6") struct GfxBase *)="\tjsr\t-228(a6)";
#define WaitBlit() __WaitBlit(GfxBase)

void __SetRast(__reg("a1") struct RastPort * rp, __reg("d0") unsigned long pen, __reg("a6") struct GfxBase *)="\tjsr\t-234(a6)";
#define SetRast(rp, pen) __SetRast((rp), (pen), GfxBase)

void __Move(__reg("a1") struct RastPort * rp, __reg("d0") long x, __reg("d1") long y, __reg("a6") struct GfxBase *)="\tjsr\t-240(a6)";
#define Move(rp, x, y) __Move((rp), (x), (y), GfxBase)

void __Draw(__reg("a1") struct RastPort * rp, __reg("d0") long x, __reg("d1") long y, __reg("a6") struct GfxBase *)="\tjsr\t-246(a6)";
#define Draw(rp, x, y) __Draw((rp), (x), (y), GfxBase)

LONG __AreaMove(__reg("a1") struct RastPort * rp, __reg("d0") long x, __reg("d1") long y, __reg("a6") struct GfxBase *)="\tjsr\t-252(a6)";
#define AreaMove(rp, x, y) __AreaMove((rp), (x), (y), GfxBase)

LONG __AreaDraw(__reg("a1") struct RastPort * rp, __reg("d0") long x, __reg("d1") long y, __reg("a6") struct GfxBase *)="\tjsr\t-258(a6)";
#define AreaDraw(rp, x, y) __AreaDraw((rp), (x), (y), GfxBase)

LONG __AreaEnd(__reg("a1") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-264(a6)";
#define AreaEnd(rp) __AreaEnd((rp), GfxBase)

void __WaitTOF(__reg("a6") struct GfxBase *)="\tjsr\t-270(a6)";
#define WaitTOF() __WaitTOF(GfxBase)

void __QBlit(__reg("a1") struct bltnode * blit, __reg("a6") struct GfxBase *)="\tjsr\t-276(a6)";
#define QBlit(blit) __QBlit((blit), GfxBase)

void __InitArea(__reg("a0") struct AreaInfo * areaInfo, __reg("a1") APTR vectorBuffer, __reg("d0") long maxVectors, __reg("a6") struct GfxBase *)="\tjsr\t-282(a6)";
#define InitArea(areaInfo, vectorBuffer, maxVectors) __InitArea((areaInfo), (vectorBuffer), (maxVectors), GfxBase)

void __SetRGB4(__reg("a0") struct ViewPort * vp, __reg("d0") long index, __reg("d1") unsigned long red, __reg("d2") unsigned long green, __reg("d3") unsigned long blue, __reg("a6") struct GfxBase *)="\tjsr\t-288(a6)";
#define SetRGB4(vp, index, red, green, blue) __SetRGB4((vp), (index), (red), (green), (blue), GfxBase)

void __QBSBlit(__reg("a1") struct bltnode * blit, __reg("a6") struct GfxBase *)="\tjsr\t-294(a6)";
#define QBSBlit(blit) __QBSBlit((blit), GfxBase)

void __BltClear(__reg("a1") PLANEPTR memBlock, __reg("d0") unsigned long byteCount, __reg("d1") unsigned long flags, __reg("a6") struct GfxBase *)="\tjsr\t-300(a6)";
#define BltClear(memBlock, byteCount, flags) __BltClear((memBlock), (byteCount), (flags), GfxBase)

void __RectFill(__reg("a1") struct RastPort * rp, __reg("d0") long xMin, __reg("d1") long yMin, __reg("d2") long xMax, __reg("d3") long yMax, __reg("a6") struct GfxBase *)="\tjsr\t-306(a6)";
#define RectFill(rp, xMin, yMin, xMax, yMax) __RectFill((rp), (xMin), (yMin), (xMax), (yMax), GfxBase)

void __BltPattern(__reg("a1") struct RastPort * rp, __reg("a0") PLANEPTR mask, __reg("d0") long xMin, __reg("d1") long yMin, __reg("d2") long xMax, __reg("d3") long yMax, __reg("d4") unsigned long maskBPR, __reg("a6") struct GfxBase *)="\tjsr\t-312(a6)";
#define BltPattern(rp, mask, xMin, yMin, xMax, yMax, maskBPR) __BltPattern((rp), (mask), (xMin), (yMin), (xMax), (yMax), (maskBPR), GfxBase)

ULONG __ReadPixel(__reg("a1") struct RastPort * rp, __reg("d0") long x, __reg("d1") long y, __reg("a6") struct GfxBase *)="\tjsr\t-318(a6)";
#define ReadPixel(rp, x, y) __ReadPixel((rp), (x), (y), GfxBase)

LONG __WritePixel(__reg("a1") struct RastPort * rp, __reg("d0") long x, __reg("d1") long y, __reg("a6") struct GfxBase *)="\tjsr\t-324(a6)";
#define WritePixel(rp, x, y) __WritePixel((rp), (x), (y), GfxBase)

BOOL __Flood(__reg("a1") struct RastPort * rp, __reg("d2") unsigned long mode, __reg("d0") long x, __reg("d1") long y, __reg("a6") struct GfxBase *)="\tjsr\t-330(a6)";
#define Flood(rp, mode, x, y) __Flood((rp), (mode), (x), (y), GfxBase)

void __PolyDraw(__reg("a1") struct RastPort * rp, __reg("d0") long count, __reg("a0") WORD * polyTable, __reg("a6") struct GfxBase *)="\tjsr\t-336(a6)";
#define PolyDraw(rp, count, polyTable) __PolyDraw((rp), (count), (polyTable), GfxBase)

void __SetAPen(__reg("a1") struct RastPort * rp, __reg("d0") unsigned long pen, __reg("a6") struct GfxBase *)="\tjsr\t-342(a6)";
#define SetAPen(rp, pen) __SetAPen((rp), (pen), GfxBase)

void __SetBPen(__reg("a1") struct RastPort * rp, __reg("d0") unsigned long pen, __reg("a6") struct GfxBase *)="\tjsr\t-348(a6)";
#define SetBPen(rp, pen) __SetBPen((rp), (pen), GfxBase)

void __SetDrMd(__reg("a1") struct RastPort * rp, __reg("d0") unsigned long drawMode, __reg("a6") struct GfxBase *)="\tjsr\t-354(a6)";
#define SetDrMd(rp, drawMode) __SetDrMd((rp), (drawMode), GfxBase)

void __InitView(__reg("a1") struct View * view, __reg("a6") struct GfxBase *)="\tjsr\t-360(a6)";
#define InitView(view) __InitView((view), GfxBase)

void __CBump(__reg("a1") struct UCopList * copList, __reg("a6") struct GfxBase *)="\tjsr\t-366(a6)";
#define CBump(copList) __CBump((copList), GfxBase)

void __CMove(__reg("a1") struct UCopList * copList, __reg("d0") APTR destination, __reg("d1") long data, __reg("a6") struct GfxBase *)="\tjsr\t-372(a6)";
#define CMove(copList, destination, data) __CMove((copList), (destination), (data), GfxBase)

void __CWait(__reg("a1") struct UCopList * copList, __reg("d0") long v, __reg("d1") long h, __reg("a6") struct GfxBase *)="\tjsr\t-378(a6)";
#define CWait(copList, v, h) __CWait((copList), (v), (h), GfxBase)

LONG __VBeamPos(__reg("a6") struct GfxBase *)="\tjsr\t-384(a6)";
#define VBeamPos() __VBeamPos(GfxBase)

void __InitBitMap(__reg("a0") struct BitMap * bitMap, __reg("d0") long depth, __reg("d1") long width, __reg("d2") long height, __reg("a6") struct GfxBase *)="\tjsr\t-390(a6)";
#define InitBitMap(bitMap, depth, width, height) __InitBitMap((bitMap), (depth), (width), (height), GfxBase)

void __ScrollRaster(__reg("a1") struct RastPort * rp, __reg("d0") long dx, __reg("d1") long dy, __reg("d2") long xMin, __reg("d3") long yMin, __reg("d4") long xMax, __reg("d5") long yMax, __reg("a6") struct GfxBase *)="\tjsr\t-396(a6)";
#define ScrollRaster(rp, dx, dy, xMin, yMin, xMax, yMax) __ScrollRaster((rp), (dx), (dy), (xMin), (yMin), (xMax), (yMax), GfxBase)

void __WaitBOVP(__reg("a0") struct ViewPort * vp, __reg("a6") struct GfxBase *)="\tjsr\t-402(a6)";
#define WaitBOVP(vp) __WaitBOVP((vp), GfxBase)

WORD __GetSprite(__reg("a0") struct SimpleSprite * sprite, __reg("d0") long num, __reg("a6") struct GfxBase *)="\tjsr\t-408(a6)";
#define GetSprite(sprite, num) __GetSprite((sprite), (num), GfxBase)

void __FreeSprite(__reg("d0") long num, __reg("a6") struct GfxBase *)="\tjsr\t-414(a6)";
#define FreeSprite(num) __FreeSprite((num), GfxBase)

void __ChangeSprite(__reg("a0") struct ViewPort * vp, __reg("a1") struct SimpleSprite * sprite, __reg("a2") PLANEPTR newData, __reg("a6") struct GfxBase *)="\tjsr\t-420(a6)";
#define ChangeSprite(vp, sprite, newData) __ChangeSprite((vp), (sprite), (newData), GfxBase)

void __MoveSprite(__reg("a0") struct ViewPort * vp, __reg("a1") struct SimpleSprite * sprite, __reg("d0") long x, __reg("d1") long y, __reg("a6") struct GfxBase *)="\tjsr\t-426(a6)";
#define MoveSprite(vp, sprite, x, y) __MoveSprite((vp), (sprite), (x), (y), GfxBase)

void __LockLayerRom(__reg("a5") struct Layer * layer, __reg("a6") struct GfxBase *)="\tjsr\t-432(a6)";
#define LockLayerRom(layer) __LockLayerRom((layer), GfxBase)

void __UnlockLayerRom(__reg("a5") struct Layer * layer, __reg("a6") struct GfxBase *)="\tjsr\t-438(a6)";
#define UnlockLayerRom(layer) __UnlockLayerRom((layer), GfxBase)

void __SyncSBitMap(__reg("a0") struct Layer * layer, __reg("a6") struct GfxBase *)="\tjsr\t-444(a6)";
#define SyncSBitMap(layer) __SyncSBitMap((layer), GfxBase)

void __CopySBitMap(__reg("a0") struct Layer * layer, __reg("a6") struct GfxBase *)="\tjsr\t-450(a6)";
#define CopySBitMap(layer) __CopySBitMap((layer), GfxBase)

void __OwnBlitter(__reg("a6") struct GfxBase *)="\tjsr\t-456(a6)";
#define OwnBlitter() __OwnBlitter(GfxBase)

void __DisownBlitter(__reg("a6") struct GfxBase *)="\tjsr\t-462(a6)";
#define DisownBlitter() __DisownBlitter(GfxBase)

struct TmpRas * __InitTmpRas(__reg("a0") struct TmpRas * tmpRas, __reg("a1") PLANEPTR buffer, __reg("d0") long size, __reg("a6") struct GfxBase *)="\tjsr\t-468(a6)";
#define InitTmpRas(tmpRas, buffer, size) __InitTmpRas((tmpRas), (buffer), (size), GfxBase)

void __AskFont(__reg("a1") struct RastPort * rp, __reg("a0") struct TextAttr * textAttr, __reg("a6") struct GfxBase *)="\tjsr\t-474(a6)";
#define AskFont(rp, textAttr) __AskFont((rp), (textAttr), GfxBase)

void __AddFont(__reg("a1") struct TextFont * textFont, __reg("a6") struct GfxBase *)="\tjsr\t-480(a6)";
#define AddFont(textFont) __AddFont((textFont), GfxBase)

void __RemFont(__reg("a1") struct TextFont * textFont, __reg("a6") struct GfxBase *)="\tjsr\t-486(a6)";
#define RemFont(textFont) __RemFont((textFont), GfxBase)

PLANEPTR __AllocRaster(__reg("d0") unsigned long width, __reg("d1") unsigned long height, __reg("a6") struct GfxBase *)="\tjsr\t-492(a6)";
#define AllocRaster(width, height) __AllocRaster((width), (height), GfxBase)

void __FreeRaster(__reg("a0") PLANEPTR p, __reg("d0") unsigned long width, __reg("d1") unsigned long height, __reg("a6") struct GfxBase *)="\tjsr\t-498(a6)";
#define FreeRaster(p, width, height) __FreeRaster((p), (width), (height), GfxBase)

void __AndRectRegion(__reg("a0") struct Region * region, __reg("a1") struct Rectangle * rectangle, __reg("a6") struct GfxBase *)="\tjsr\t-504(a6)";
#define AndRectRegion(region, rectangle) __AndRectRegion((region), (rectangle), GfxBase)

BOOL __OrRectRegion(__reg("a0") struct Region * region, __reg("a1") struct Rectangle * rectangle, __reg("a6") struct GfxBase *)="\tjsr\t-510(a6)";
#define OrRectRegion(region, rectangle) __OrRectRegion((region), (rectangle), GfxBase)

struct Region * __NewRegion(__reg("a6") struct GfxBase *)="\tjsr\t-516(a6)";
#define NewRegion() __NewRegion(GfxBase)

BOOL __ClearRectRegion(__reg("a0") struct Region * region, __reg("a1") struct Rectangle * rectangle, __reg("a6") struct GfxBase *)="\tjsr\t-522(a6)";
#define ClearRectRegion(region, rectangle) __ClearRectRegion((region), (rectangle), GfxBase)

void __ClearRegion(__reg("a0") struct Region * region, __reg("a6") struct GfxBase *)="\tjsr\t-528(a6)";
#define ClearRegion(region) __ClearRegion((region), GfxBase)

void __DisposeRegion(__reg("a0") struct Region * region, __reg("a6") struct GfxBase *)="\tjsr\t-534(a6)";
#define DisposeRegion(region) __DisposeRegion((region), GfxBase)

void __FreeVPortCopLists(__reg("a0") struct ViewPort * vp, __reg("a6") struct GfxBase *)="\tjsr\t-540(a6)";
#define FreeVPortCopLists(vp) __FreeVPortCopLists((vp), GfxBase)

void __FreeCopList(__reg("a0") struct CopList * copList, __reg("a6") struct GfxBase *)="\tjsr\t-546(a6)";
#define FreeCopList(copList) __FreeCopList((copList), GfxBase)

void __ClipBlit(__reg("a0") struct RastPort * srcRP, __reg("d0") long xSrc, __reg("d1") long ySrc, __reg("a1") struct RastPort * destRP, __reg("d2") long xDest, __reg("d3") long yDest, __reg("d4") long xSize, __reg("d5") long ySize, __reg("d6") unsigned long minterm, __reg("a6") struct GfxBase *)="\tjsr\t-552(a6)";
#define ClipBlit(srcRP, xSrc, ySrc, destRP, xDest, yDest, xSize, ySize, minterm) __ClipBlit((srcRP), (xSrc), (ySrc), (destRP), (xDest), (yDest), (xSize), (ySize), (minterm), GfxBase)

BOOL __XorRectRegion(__reg("a0") struct Region * region, __reg("a1") struct Rectangle * rectangle, __reg("a6") struct GfxBase *)="\tjsr\t-558(a6)";
#define XorRectRegion(region, rectangle) __XorRectRegion((region), (rectangle), GfxBase)

void __FreeCprList(__reg("a0") struct cprlist * cprList, __reg("a6") struct GfxBase *)="\tjsr\t-564(a6)";
#define FreeCprList(cprList) __FreeCprList((cprList), GfxBase)

struct ColorMap * __GetColorMap(__reg("d0") long entries, __reg("a6") struct GfxBase *)="\tjsr\t-570(a6)";
#define GetColorMap(entries) __GetColorMap((entries), GfxBase)

void __FreeColorMap(__reg("a0") struct ColorMap * colorMap, __reg("a6") struct GfxBase *)="\tjsr\t-576(a6)";
#define FreeColorMap(colorMap) __FreeColorMap((colorMap), GfxBase)

ULONG __GetRGB4(__reg("a0") struct ColorMap * colorMap, __reg("d0") long entry, __reg("a6") struct GfxBase *)="\tjsr\t-582(a6)";
#define GetRGB4(colorMap, entry) __GetRGB4((colorMap), (entry), GfxBase)

void __ScrollVPort(__reg("a0") struct ViewPort * vp, __reg("a6") struct GfxBase *)="\tjsr\t-588(a6)";
#define ScrollVPort(vp) __ScrollVPort((vp), GfxBase)

struct CopList * __UCopperListInit(__reg("a0") struct UCopList * uCopList, __reg("d0") long n, __reg("a6") struct GfxBase *)="\tjsr\t-594(a6)";
#define UCopperListInit(uCopList, n) __UCopperListInit((uCopList), (n), GfxBase)

void __FreeGBuffers(__reg("a0") struct AnimOb * anOb, __reg("a1") struct RastPort * rp, __reg("d0") long flag, __reg("a6") struct GfxBase *)="\tjsr\t-600(a6)";
#define FreeGBuffers(anOb, rp, flag) __FreeGBuffers((anOb), (rp), (flag), GfxBase)

void __BltBitMapRastPort(__reg("a0") struct BitMap * srcBitMap, __reg("d0") long xSrc, __reg("d1") long ySrc, __reg("a1") struct RastPort * destRP, __reg("d2") long xDest, __reg("d3") long yDest, __reg("d4") long xSize, __reg("d5") long ySize, __reg("d6") unsigned long minterm, __reg("a6") struct GfxBase *)="\tjsr\t-606(a6)";
#define BltBitMapRastPort(srcBitMap, xSrc, ySrc, destRP, xDest, yDest, xSize, ySize, minterm) __BltBitMapRastPort((srcBitMap), (xSrc), (ySrc), (destRP), (xDest), (yDest), (xSize), (ySize), (minterm), GfxBase)

BOOL __OrRegionRegion(__reg("a0") struct Region * srcRegion, __reg("a1") struct Region * destRegion, __reg("a6") struct GfxBase *)="\tjsr\t-612(a6)";
#define OrRegionRegion(srcRegion, destRegion) __OrRegionRegion((srcRegion), (destRegion), GfxBase)

BOOL __XorRegionRegion(__reg("a0") struct Region * srcRegion, __reg("a1") struct Region * destRegion, __reg("a6") struct GfxBase *)="\tjsr\t-618(a6)";
#define XorRegionRegion(srcRegion, destRegion) __XorRegionRegion((srcRegion), (destRegion), GfxBase)

BOOL __AndRegionRegion(__reg("a0") struct Region * srcRegion, __reg("a1") struct Region * destRegion, __reg("a6") struct GfxBase *)="\tjsr\t-624(a6)";
#define AndRegionRegion(srcRegion, destRegion) __AndRegionRegion((srcRegion), (destRegion), GfxBase)

void __SetRGB4CM(__reg("a0") struct ColorMap * colorMap, __reg("d0") long index, __reg("d1") unsigned long red, __reg("d2") unsigned long green, __reg("d3") unsigned long blue, __reg("a6") struct GfxBase *)="\tjsr\t-630(a6)";
#define SetRGB4CM(colorMap, index, red, green, blue) __SetRGB4CM((colorMap), (index), (red), (green), (blue), GfxBase)

void __BltMaskBitMapRastPort(__reg("a0") struct BitMap * srcBitMap, __reg("d0") long xSrc, __reg("d1") long ySrc, __reg("a1") struct RastPort * destRP, __reg("d2") long xDest, __reg("d3") long yDest, __reg("d4") long xSize, __reg("d5") long ySize, __reg("d6") unsigned long minterm, __reg("a2") PLANEPTR bltMask, __reg("a6") struct GfxBase *)="\tjsr\t-636(a6)";
#define BltMaskBitMapRastPort(srcBitMap, xSrc, ySrc, destRP, xDest, yDest, xSize, ySize, minterm, bltMask) __BltMaskBitMapRastPort((srcBitMap), (xSrc), (ySrc), (destRP), (xDest), (yDest), (xSize), (ySize), (minterm), (bltMask), GfxBase)

BOOL __AttemptLockLayerRom(__reg("a5") struct Layer * layer, __reg("a6") struct GfxBase *)="\tjsr\t-654(a6)";
#define AttemptLockLayerRom(layer) __AttemptLockLayerRom((layer), GfxBase)

APTR __GfxNew(__reg("d0") unsigned long gfxNodeType, __reg("a6") struct GfxBase *)="\tjsr\t-660(a6)";
#define GfxNew(gfxNodeType) __GfxNew((gfxNodeType), GfxBase)

void __GfxFree(__reg("a0") APTR gfxNodePtr, __reg("a6") struct GfxBase *)="\tjsr\t-666(a6)";
#define GfxFree(gfxNodePtr) __GfxFree((gfxNodePtr), GfxBase)

void __GfxAssociate(__reg("a0") APTR associateNode, __reg("a1") APTR gfxNodePtr, __reg("a6") struct GfxBase *)="\tjsr\t-672(a6)";
#define GfxAssociate(associateNode, gfxNodePtr) __GfxAssociate((associateNode), (gfxNodePtr), GfxBase)

void __BitMapScale(__reg("a0") struct BitScaleArgs * bitScaleArgs, __reg("a6") struct GfxBase *)="\tjsr\t-678(a6)";
#define BitMapScale(bitScaleArgs) __BitMapScale((bitScaleArgs), GfxBase)

UWORD __ScalerDiv(__reg("d0") unsigned long factor, __reg("d1") unsigned long numerator, __reg("d2") unsigned long denominator, __reg("a6") struct GfxBase *)="\tjsr\t-684(a6)";
#define ScalerDiv(factor, numerator, denominator) __ScalerDiv((factor), (numerator), (denominator), GfxBase)

WORD __TextExtent(__reg("a1") struct RastPort * rp, __reg("a0") STRPTR string, __reg("d0") long count, __reg("a2") struct TextExtent * textExtent, __reg("a6") struct GfxBase *)="\tjsr\t-690(a6)";
#define TextExtent(rp, string, count, textExtent) __TextExtent((rp), (string), (count), (textExtent), GfxBase)

ULONG __TextFit(__reg("a1") struct RastPort * rp, __reg("a0") STRPTR string, __reg("d0") unsigned long strLen, __reg("a2") struct TextExtent * textExtent, __reg("a3") struct TextExtent * constrainingExtent, __reg("d1") long strDirection, __reg("d2") unsigned long constrainingBitWidth, __reg("d3") unsigned long constrainingBitHeight, __reg("a6") struct GfxBase *)="\tjsr\t-696(a6)";
#define TextFit(rp, string, strLen, textExtent, constrainingExtent, strDirection, constrainingBitWidth, constrainingBitHeight) __TextFit((rp), (string), (strLen), (textExtent), (constrainingExtent), (strDirection), (constrainingBitWidth), (constrainingBitHeight), GfxBase)

APTR __GfxLookUp(__reg("a0") APTR associateNode, __reg("a6") struct GfxBase *)="\tjsr\t-702(a6)";
#define GfxLookUp(associateNode) __GfxLookUp((associateNode), GfxBase)

BOOL __VideoControl(__reg("a0") struct ColorMap * colorMap, __reg("a1") struct TagItem * tagarray, __reg("a6") struct GfxBase *)="\tjsr\t-708(a6)";
#define VideoControl(colorMap, tagarray) __VideoControl((colorMap), (tagarray), GfxBase)

struct MonitorSpec * __OpenMonitor(__reg("a1") STRPTR monitorName, __reg("d0") unsigned long displayID, __reg("a6") struct GfxBase *)="\tjsr\t-714(a6)";
#define OpenMonitor(monitorName, displayID) __OpenMonitor((monitorName), (displayID), GfxBase)

BOOL __CloseMonitor(__reg("a0") struct MonitorSpec * monitorSpec, __reg("a6") struct GfxBase *)="\tjsr\t-720(a6)";
#define CloseMonitor(monitorSpec) __CloseMonitor((monitorSpec), GfxBase)

DisplayInfoHandle __FindDisplayInfo(__reg("d0") unsigned long displayID, __reg("a6") struct GfxBase *)="\tjsr\t-726(a6)";
#define FindDisplayInfo(displayID) __FindDisplayInfo((displayID), GfxBase)

ULONG __NextDisplayInfo(__reg("d0") unsigned long displayID, __reg("a6") struct GfxBase *)="\tjsr\t-732(a6)";
#define NextDisplayInfo(displayID) __NextDisplayInfo((displayID), GfxBase)

ULONG __GetDisplayInfoData(__reg("a0") DisplayInfoHandle handle, __reg("a1") UBYTE * buf, __reg("d0") unsigned long size, __reg("d1") unsigned long tagID, __reg("d2") unsigned long displayID, __reg("a6") struct GfxBase *)="\tjsr\t-756(a6)";
#define GetDisplayInfoData(handle, buf, size, tagID, displayID) __GetDisplayInfoData((handle), (buf), (size), (tagID), (displayID), GfxBase)

void __FontExtent(__reg("a0") struct TextFont * font, __reg("a1") struct TextExtent * fontExtent, __reg("a6") struct GfxBase *)="\tjsr\t-762(a6)";
#define FontExtent(font, fontExtent) __FontExtent((font), (fontExtent), GfxBase)

LONG __ReadPixelLine8(__reg("a0") struct RastPort * rp, __reg("d0") unsigned long xstart, __reg("d1") unsigned long ystart, __reg("d2") unsigned long width, __reg("a2") UBYTE * array, __reg("a1") struct RastPort * tempRP, __reg("a6") struct GfxBase *)="\tjsr\t-768(a6)";
#define ReadPixelLine8(rp, xstart, ystart, width, array, tempRP) __ReadPixelLine8((rp), (xstart), (ystart), (width), (array), (tempRP), GfxBase)

LONG __WritePixelLine8(__reg("a0") struct RastPort * rp, __reg("d0") unsigned long xstart, __reg("d1") unsigned long ystart, __reg("d2") unsigned long width, __reg("a2") UBYTE * array, __reg("a1") struct RastPort * tempRP, __reg("a6") struct GfxBase *)="\tjsr\t-774(a6)";
#define WritePixelLine8(rp, xstart, ystart, width, array, tempRP) __WritePixelLine8((rp), (xstart), (ystart), (width), (array), (tempRP), GfxBase)

LONG __ReadPixelArray8(__reg("a0") struct RastPort * rp, __reg("d0") unsigned long xstart, __reg("d1") unsigned long ystart, __reg("d2") unsigned long xstop, __reg("d3") unsigned long ystop, __reg("a2") UBYTE * array, __reg("a1") struct RastPort * temprp, __reg("a6") struct GfxBase *)="\tjsr\t-780(a6)";
#define ReadPixelArray8(rp, xstart, ystart, xstop, ystop, array, temprp) __ReadPixelArray8((rp), (xstart), (ystart), (xstop), (ystop), (array), (temprp), GfxBase)

LONG __WritePixelArray8(__reg("a0") struct RastPort * rp, __reg("d0") unsigned long xstart, __reg("d1") unsigned long ystart, __reg("d2") unsigned long xstop, __reg("d3") unsigned long ystop, __reg("a2") UBYTE * array, __reg("a1") struct RastPort * temprp, __reg("a6") struct GfxBase *)="\tjsr\t-786(a6)";
#define WritePixelArray8(rp, xstart, ystart, xstop, ystop, array, temprp) __WritePixelArray8((rp), (xstart), (ystart), (xstop), (ystop), (array), (temprp), GfxBase)

LONG __GetVPModeID(__reg("a0") struct ViewPort * vp, __reg("a6") struct GfxBase *)="\tjsr\t-792(a6)";
#define GetVPModeID(vp) __GetVPModeID((vp), GfxBase)

LONG __ModeNotAvailable(__reg("d0") unsigned long modeID, __reg("a6") struct GfxBase *)="\tjsr\t-798(a6)";
#define ModeNotAvailable(modeID) __ModeNotAvailable((modeID), GfxBase)

WORD __WeighTAMatch(__reg("a0") struct TextAttr * reqTextAttr, __reg("a1") struct TextAttr * targetTextAttr, __reg("a2") struct TagItem * targetTags, __reg("a6") struct GfxBase *)="\tjsr\t-804(a6)";
#define WeighTAMatch(reqTextAttr, targetTextAttr, targetTags) __WeighTAMatch((reqTextAttr), (targetTextAttr), (targetTags), GfxBase)

void __EraseRect(__reg("a1") struct RastPort * rp, __reg("d0") long xMin, __reg("d1") long yMin, __reg("d2") long xMax, __reg("d3") long yMax, __reg("a6") struct GfxBase *)="\tjsr\t-810(a6)";
#define EraseRect(rp, xMin, yMin, xMax, yMax) __EraseRect((rp), (xMin), (yMin), (xMax), (yMax), GfxBase)

ULONG __ExtendFont(__reg("a0") struct TextFont * font, __reg("a1") struct TagItem * fontTags, __reg("a6") struct GfxBase *)="\tjsr\t-816(a6)";
#define ExtendFont(font, fontTags) __ExtendFont((font), (fontTags), GfxBase)

void __StripFont(__reg("a0") struct TextFont * font, __reg("a6") struct GfxBase *)="\tjsr\t-822(a6)";
#define StripFont(font) __StripFont((font), GfxBase)

UWORD __CalcIVG(__reg("a0") struct View * v, __reg("a1") struct ViewPort * vp, __reg("a6") struct GfxBase *)="\tjsr\t-828(a6)";
#define CalcIVG(v, vp) __CalcIVG((v), (vp), GfxBase)

LONG __AttachPalExtra(__reg("a0") struct ColorMap * cm, __reg("a1") struct ViewPort * vp, __reg("a6") struct GfxBase *)="\tjsr\t-834(a6)";
#define AttachPalExtra(cm, vp) __AttachPalExtra((cm), (vp), GfxBase)

LONG __ObtainBestPenA(__reg("a0") struct ColorMap * cm, __reg("d1") unsigned long r, __reg("d2") unsigned long g, __reg("d3") unsigned long b, __reg("a1") struct TagItem * tags, __reg("a6") struct GfxBase *)="\tjsr\t-840(a6)";
#define ObtainBestPenA(cm, r, g, b, tags) __ObtainBestPenA((cm), (r), (g), (b), (tags), GfxBase)

void __SetRGB32(__reg("a0") struct ViewPort * vp, __reg("d0") unsigned long n, __reg("d1") unsigned long r, __reg("d2") unsigned long g, __reg("d3") unsigned long b, __reg("a6") struct GfxBase *)="\tjsr\t-852(a6)";
#define SetRGB32(vp, n, r, g, b) __SetRGB32((vp), (n), (r), (g), (b), GfxBase)

ULONG __GetAPen(__reg("a0") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-858(a6)";
#define GetAPen(rp) __GetAPen((rp), GfxBase)

ULONG __GetBPen(__reg("a0") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-864(a6)";
#define GetBPen(rp) __GetBPen((rp), GfxBase)

ULONG __GetDrMd(__reg("a0") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-870(a6)";
#define GetDrMd(rp) __GetDrMd((rp), GfxBase)

ULONG __GetOutlinePen(__reg("a0") struct RastPort * rp, __reg("a6") struct GfxBase *)="\tjsr\t-876(a6)";
#define GetOutlinePen(rp) __GetOutlinePen((rp), GfxBase)

void __LoadRGB32(__reg("a0") struct ViewPort * vp, __reg("a1") ULONG * table, __reg("a6") struct GfxBase *)="\tjsr\t-882(a6)";
#define LoadRGB32(vp, table) __LoadRGB32((vp), (table), GfxBase)

ULONG __SetChipRev(__reg("d0") unsigned long want, __reg("a6") struct GfxBase *)="\tjsr\t-888(a6)";
#define SetChipRev(want) __SetChipRev((want), GfxBase)

void __SetABPenDrMd(__reg("a1") struct RastPort * rp, __reg("d0") unsigned long apen, __reg("d1") unsigned long bpen, __reg("d2") unsigned long drawmode, __reg("a6") struct GfxBase *)="\tjsr\t-894(a6)";
#define SetABPenDrMd(rp, apen, bpen, drawmode) __SetABPenDrMd((rp), (apen), (bpen), (drawmode), GfxBase)

void __GetRGB32(__reg("a0") struct ColorMap * cm, __reg("d0") unsigned long firstcolor, __reg("d1") unsigned long ncolors, __reg("a1") ULONG * table, __reg("a6") struct GfxBase *)="\tjsr\t-900(a6)";
#define GetRGB32(cm, firstcolor, ncolors, table) __GetRGB32((cm), (firstcolor), (ncolors), (table), GfxBase)

struct BitMap * __AllocBitMap(__reg("d0") unsigned long sizex, __reg("d1") unsigned long sizey, __reg("d2") unsigned long depth, __reg("d3") unsigned long flags, __reg("a0") struct BitMap * friend_bitmap, __reg("a6") struct GfxBase *)="\tjsr\t-918(a6)";
#define AllocBitMap(sizex, sizey, depth, flags, friend_bitmap) __AllocBitMap((sizex), (sizey), (depth), (flags), (friend_bitmap), GfxBase)

void __FreeBitMap(__reg("a0") struct BitMap * bm, __reg("a6") struct GfxBase *)="\tjsr\t-924(a6)";
#define FreeBitMap(bm) __FreeBitMap((bm), GfxBase)

LONG __GetExtSpriteA(__reg("a2") struct ExtSprite * ss, __reg("a1") struct TagItem * tags, __reg("a6") struct GfxBase *)="\tjsr\t-930(a6)";
#define GetExtSpriteA(ss, tags) __GetExtSpriteA((ss), (tags), GfxBase)

ULONG __CoerceMode(__reg("a0") struct ViewPort * vp, __reg("d0") unsigned long monitorid, __reg("d1") unsigned long flags, __reg("a6") struct GfxBase *)="\tjsr\t-936(a6)";
#define CoerceMode(vp, monitorid, flags) __CoerceMode((vp), (monitorid), (flags), GfxBase)

void __ChangeVPBitMap(__reg("a0") struct ViewPort * vp, __reg("a1") struct BitMap * bm, __reg("a2") struct DBufInfo * db, __reg("a6") struct GfxBase *)="\tjsr\t-942(a6)";
#define ChangeVPBitMap(vp, bm, db) __ChangeVPBitMap((vp), (bm), (db), GfxBase)

void __ReleasePen(__reg("a0") struct ColorMap * cm, __reg("d0") unsigned long n, __reg("a6") struct GfxBase *)="\tjsr\t-948(a6)";
#define ReleasePen(cm, n) __ReleasePen((cm), (n), GfxBase)

ULONG __ObtainPen(__reg("a0") struct ColorMap * cm, __reg("d0") unsigned long n, __reg("d1") unsigned long r, __reg("d2") unsigned long g, __reg("d3") unsigned long b, __reg("d4") long f, __reg("a6") struct GfxBase *)="\tjsr\t-954(a6)";
#define ObtainPen(cm, n, r, g, b, f) __ObtainPen((cm), (n), (r), (g), (b), (f), GfxBase)

ULONG __GetBitMapAttr(__reg("a0") struct BitMap * bm, __reg("d1") unsigned long attrnum, __reg("a6") struct GfxBase *)="\tjsr\t-960(a6)";
#define GetBitMapAttr(bm, attrnum) __GetBitMapAttr((bm), (attrnum), GfxBase)

struct DBufInfo * __AllocDBufInfo(__reg("a0") struct ViewPort * vp, __reg("a6") struct GfxBase *)="\tjsr\t-966(a6)";
#define AllocDBufInfo(vp) __AllocDBufInfo((vp), GfxBase)

void __FreeDBufInfo(__reg("a1") struct DBufInfo * dbi, __reg("a6") struct GfxBase *)="\tjsr\t-972(a6)";
#define FreeDBufInfo(dbi) __FreeDBufInfo((dbi), GfxBase)

ULONG __SetOutlinePen(__reg("a0") struct RastPort * rp, __reg("d0") unsigned long pen, __reg("a6") struct GfxBase *)="\tjsr\t-978(a6)";
#define SetOutlinePen(rp, pen) __SetOutlinePen((rp), (pen), GfxBase)

ULONG __SetWriteMask(__reg("a0") struct RastPort * rp, __reg("d0") unsigned long msk, __reg("a6") struct GfxBase *)="\tjsr\t-984(a6)";
#define SetWriteMask(rp, msk) __SetWriteMask((rp), (msk), GfxBase)

void __SetMaxPen(__reg("a0") struct RastPort * rp, __reg("d0") unsigned long maxpen, __reg("a6") struct GfxBase *)="\tjsr\t-990(a6)";
#define SetMaxPen(rp, maxpen) __SetMaxPen((rp), (maxpen), GfxBase)

void __SetRGB32CM(__reg("a0") struct ColorMap * cm, __reg("d0") unsigned long n, __reg("d1") unsigned long r, __reg("d2") unsigned long g, __reg("d3") unsigned long b, __reg("a6") struct GfxBase *)="\tjsr\t-996(a6)";
#define SetRGB32CM(cm, n, r, g, b) __SetRGB32CM((cm), (n), (r), (g), (b), GfxBase)

void __ScrollRasterBF(__reg("a1") struct RastPort * rp, __reg("d0") long dx, __reg("d1") long dy, __reg("d2") long xMin, __reg("d3") long yMin, __reg("d4") long xMax, __reg("d5") long yMax, __reg("a6") struct GfxBase *)="\tjsr\t-1002(a6)";
#define ScrollRasterBF(rp, dx, dy, xMin, yMin, xMax, yMax) __ScrollRasterBF((rp), (dx), (dy), (xMin), (yMin), (xMax), (yMax), GfxBase)

LONG __FindColor(__reg("a3") struct ColorMap * cm, __reg("d1") unsigned long r, __reg("d2") unsigned long g, __reg("d3") unsigned long b, __reg("d4") long maxcolor, __reg("a6") struct GfxBase *)="\tjsr\t-1008(a6)";
#define FindColor(cm, r, g, b, maxcolor) __FindColor((cm), (r), (g), (b), (maxcolor), GfxBase)

struct ExtSprite * __AllocSpriteDataA(__reg("a2") struct BitMap * bm, __reg("a1") struct TagItem * tags, __reg("a6") struct GfxBase *)="\tjsr\t-1020(a6)";
#define AllocSpriteDataA(bm, tags) __AllocSpriteDataA((bm), (tags), GfxBase)

LONG __ChangeExtSpriteA(__reg("a0") struct ViewPort * vp, __reg("a1") struct ExtSprite * oldsprite, __reg("a2") struct ExtSprite * newsprite, __reg("a3") struct TagItem * tags, __reg("a6") struct GfxBase *)="\tjsr\t-1026(a6)";
#define ChangeExtSpriteA(vp, oldsprite, newsprite, tags) __ChangeExtSpriteA((vp), (oldsprite), (newsprite), (tags), GfxBase)

void __FreeSpriteData(__reg("a2") struct ExtSprite * sp, __reg("a6") struct GfxBase *)="\tjsr\t-1032(a6)";
#define FreeSpriteData(sp) __FreeSpriteData((sp), GfxBase)

void __SetRPAttrsA(__reg("a0") struct RastPort * rp, __reg("a1") struct TagItem * tags, __reg("a6") struct GfxBase *)="\tjsr\t-1038(a6)";
#define SetRPAttrsA(rp, tags) __SetRPAttrsA((rp), (tags), GfxBase)

void __GetRPAttrsA(__reg("a0") struct RastPort * rp, __reg("a1") struct TagItem * tags, __reg("a6") struct GfxBase *)="\tjsr\t-1044(a6)";
#define GetRPAttrsA(rp, tags) __GetRPAttrsA((rp), (tags), GfxBase)

ULONG __BestModeIDA(__reg("a0") struct TagItem * tags, __reg("a6") struct GfxBase *)="\tjsr\t-1050(a6)";
#define BestModeIDA(tags) __BestModeIDA((tags), GfxBase)

void __WriteChunkyPixels(__reg("a0") struct RastPort * rp, __reg("d0") unsigned long xstart, __reg("d1") unsigned long ystart, __reg("d2") unsigned long xstop, __reg("d3") unsigned long ystop, __reg("a2") UBYTE * array, __reg("d4") long bytesperrow, __reg("a6") struct GfxBase *)="\tjsr\t-1056(a6)";
#define WriteChunkyPixels(rp, xstart, ystart, xstop, ystop, array, bytesperrow) __WriteChunkyPixels((rp), (xstart), (ystart), (xstop), (ystop), (array), (bytesperrow), GfxBase)

#endif /*  _VBCCINLINE_GRAPHICS_H  */
