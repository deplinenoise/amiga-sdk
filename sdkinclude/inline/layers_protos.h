#ifndef _VBCCINLINE_LAYERS_H
#define _VBCCINLINE_LAYERS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

void __InitLayers(__reg("a0") struct Layer_Info * li, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define InitLayers(li) __InitLayers((li), LayersBase)

struct Layer * __CreateUpfrontLayer(__reg("a0") struct Layer_Info * li, __reg("a1") struct BitMap * bm, __reg("d0") long x0, __reg("d1") long y0, __reg("d2") long x1, __reg("d3") long y1, __reg("d4") long flags, __reg("a2") struct BitMap * bm2, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define CreateUpfrontLayer(li, bm, x0, y0, x1, y1, flags, bm2) __CreateUpfrontLayer((li), (bm), (x0), (y0), (x1), (y1), (flags), (bm2), LayersBase)

struct Layer * __CreateBehindLayer(__reg("a0") struct Layer_Info * li, __reg("a1") struct BitMap * bm, __reg("d0") long x0, __reg("d1") long y0, __reg("d2") long x1, __reg("d3") long y1, __reg("d4") long flags, __reg("a2") struct BitMap * bm2, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define CreateBehindLayer(li, bm, x0, y0, x1, y1, flags, bm2) __CreateBehindLayer((li), (bm), (x0), (y0), (x1), (y1), (flags), (bm2), LayersBase)

LONG __UpfrontLayer(__reg("a0") void * dummy, __reg("a1") struct Layer * layer, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define UpfrontLayer(dummy, layer) __UpfrontLayer((void *)(dummy), (layer), LayersBase)

LONG __BehindLayer(__reg("a0") void * dummy, __reg("a1") struct Layer * layer, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define BehindLayer(dummy, layer) __BehindLayer((void *)(dummy), (layer), LayersBase)

LONG __MoveLayer(__reg("a0") void * dummy, __reg("a1") struct Layer * layer, __reg("d0") long dx, __reg("d1") long dy, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define MoveLayer(dummy, layer, dx, dy) __MoveLayer((void *)(dummy), (layer), (dx), (dy), LayersBase)

LONG __SizeLayer(__reg("a0") void * dummy, __reg("a1") struct Layer * layer, __reg("d0") long dx, __reg("d1") long dy, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define SizeLayer(dummy, layer, dx, dy) __SizeLayer((void *)(dummy), (layer), (dx), (dy), LayersBase)

void __ScrollLayer(__reg("a0") void * dummy, __reg("a1") struct Layer * layer, __reg("d0") long dx, __reg("d1") long dy, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define ScrollLayer(dummy, layer, dx, dy) __ScrollLayer((void *)(dummy), (layer), (dx), (dy), LayersBase)

LONG __BeginUpdate(__reg("a0") struct Layer * l, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define BeginUpdate(l) __BeginUpdate((l), LayersBase)

void __EndUpdate(__reg("a0") struct Layer * layer, __reg("d0") unsigned long flag, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define EndUpdate(layer, flag) __EndUpdate((layer), (flag), LayersBase)

LONG __DeleteLayer(__reg("a0") void * dummy, __reg("a1") struct Layer * layer, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define DeleteLayer(dummy, layer) __DeleteLayer((void *)(dummy), (layer), LayersBase)

void __LockLayer(__reg("a0") void * dummy, __reg("a1") struct Layer * layer, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define LockLayer(dummy, layer) __LockLayer((void *)(dummy), (layer), LayersBase)

void __UnlockLayer(__reg("a0") struct Layer * layer, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define UnlockLayer(layer) __UnlockLayer((layer), LayersBase)

void __LockLayers(__reg("a0") struct Layer_Info * li, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define LockLayers(li) __LockLayers((li), LayersBase)

void __UnlockLayers(__reg("a0") struct Layer_Info * li, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define UnlockLayers(li) __UnlockLayers((li), LayersBase)

void __LockLayerInfo(__reg("a0") struct Layer_Info * li, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define LockLayerInfo(li) __LockLayerInfo((li), LayersBase)

void __SwapBitsRastPortClipRect(__reg("a0") struct RastPort * rp, __reg("a1") struct ClipRect * cr, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define SwapBitsRastPortClipRect(rp, cr) __SwapBitsRastPortClipRect((rp), (cr), LayersBase)

struct Layer * __WhichLayer(__reg("a0") struct Layer_Info * li, __reg("d0") long x, __reg("d1") long y, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define WhichLayer(li, x, y) __WhichLayer((li), (x), (y), LayersBase)

void __UnlockLayerInfo(__reg("a0") struct Layer_Info * li, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define UnlockLayerInfo(li) __UnlockLayerInfo((li), LayersBase)

struct Layer_Info * __NewLayerInfo(__reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define NewLayerInfo() __NewLayerInfo(LayersBase)

void __DisposeLayerInfo(__reg("a0") struct Layer_Info * li, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define DisposeLayerInfo(li) __DisposeLayerInfo((li), LayersBase)

LONG __FattenLayerInfo(__reg("a0") struct Layer_Info * li, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define FattenLayerInfo(li) __FattenLayerInfo((li), LayersBase)

void __ThinLayerInfo(__reg("a0") struct Layer_Info * li, __reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define ThinLayerInfo(li) __ThinLayerInfo((li), LayersBase)

LONG __MoveLayerInFrontOf(__reg("a0") struct Layer * layer_to_move, __reg("a1") struct Layer * other_layer, __reg("a6") struct Library *)="\tjsr\t-168(a6)";
#define MoveLayerInFrontOf(layer_to_move, other_layer) __MoveLayerInFrontOf((layer_to_move), (other_layer), LayersBase)

struct Region * __InstallClipRegion(__reg("a0") struct Layer * layer, __reg("a1") struct Region * region, __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define InstallClipRegion(layer, region) __InstallClipRegion((layer), (region), LayersBase)

LONG __MoveSizeLayer(__reg("a0") struct Layer * layer, __reg("d0") long dx, __reg("d1") long dy, __reg("d2") long dw, __reg("d3") long dh, __reg("a6") struct Library *)="\tjsr\t-180(a6)";
#define MoveSizeLayer(layer, dx, dy, dw, dh) __MoveSizeLayer((layer), (dx), (dy), (dw), (dh), LayersBase)

struct Layer * __CreateUpfrontHookLayer(__reg("a0") struct Layer_Info * li, __reg("a1") struct BitMap * bm, __reg("d0") long x0, __reg("d1") long y0, __reg("d2") long x1, __reg("d3") long y1, __reg("d4") long flags, __reg("a3") struct Hook * hook, __reg("a2") struct BitMap * bm2, __reg("a6") struct Library *)="\tjsr\t-186(a6)";
#define CreateUpfrontHookLayer(li, bm, x0, y0, x1, y1, flags, hook, bm2) __CreateUpfrontHookLayer((li), (bm), (x0), (y0), (x1), (y1), (flags), (hook), (bm2), LayersBase)

struct Layer * __CreateBehindHookLayer(__reg("a0") struct Layer_Info * li, __reg("a1") struct BitMap * bm, __reg("d0") long x0, __reg("d1") long y0, __reg("d2") long x1, __reg("d3") long y1, __reg("d4") long flags, __reg("a3") struct Hook * hook, __reg("a2") struct BitMap * bm2, __reg("a6") struct Library *)="\tjsr\t-192(a6)";
#define CreateBehindHookLayer(li, bm, x0, y0, x1, y1, flags, hook, bm2) __CreateBehindHookLayer((li), (bm), (x0), (y0), (x1), (y1), (flags), (hook), (bm2), LayersBase)

struct Hook * __InstallLayerHook(__reg("a0") struct Layer * layer, __reg("a1") struct Hook * hook, __reg("a6") struct Library *)="\tjsr\t-198(a6)";
#define InstallLayerHook(layer, hook) __InstallLayerHook((layer), (hook), LayersBase)

struct Hook * __InstallLayerInfoHook(__reg("a0") struct Layer_Info * li, __reg("a1") struct Hook * hook, __reg("a6") struct Library *)="\tjsr\t-204(a6)";
#define InstallLayerInfoHook(li, hook) __InstallLayerInfoHook((li), (hook), LayersBase)

void __SortLayerCR(__reg("a0") struct Layer * layer, __reg("d0") long dx, __reg("d1") long dy, __reg("a6") struct Library *)="\tjsr\t-210(a6)";
#define SortLayerCR(layer, dx, dy) __SortLayerCR((layer), (dx), (dy), LayersBase)

void __DoHookClipRects(__reg("a0") struct Hook * hook, __reg("a1") struct RastPort * rport, __reg("a2") struct Rectangle * rect, __reg("a6") struct Library *)="\tjsr\t-216(a6)";
#define DoHookClipRects(hook, rport, rect) __DoHookClipRects((hook), (rport), (rect), LayersBase)

#endif /*  _VBCCINLINE_LAYERS_H  */
