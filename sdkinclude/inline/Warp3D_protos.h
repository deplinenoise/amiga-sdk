#ifndef _VBCCINLINE_WARP3D_H
#define _VBCCINLINE_WARP3D_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

W3D_Context    * __W3D_CreateContext(__reg("a0") ULONG * error, __reg("a1") struct TagItem * CCTags, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define W3D_CreateContext(error, CCTags) __W3D_CreateContext((error), (CCTags), Warp3DBase)

void __W3D_DestroyContext(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define W3D_DestroyContext(context) __W3D_DestroyContext((context), Warp3DBase)

ULONG __W3D_GetState(__reg("a0") W3D_Context * context, __reg("d1") ULONG state, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define W3D_GetState(context, state) __W3D_GetState((context), (state), Warp3DBase)

ULONG __W3D_SetState(__reg("a0") W3D_Context * context, __reg("d0") ULONG state, __reg("d1") ULONG action, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define W3D_SetState(context, state, action) __W3D_SetState((context), (state), (action), Warp3DBase)

ULONG __W3D_CheckDriver(__reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define W3D_CheckDriver() __W3D_CheckDriver(Warp3DBase)

ULONG __W3D_LockHardware(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define W3D_LockHardware(context) __W3D_LockHardware((context), Warp3DBase)

void __W3D_UnLockHardware(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define W3D_UnLockHardware(context) __W3D_UnLockHardware((context), Warp3DBase)

void __W3D_WaitIdle(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define W3D_WaitIdle(context) __W3D_WaitIdle((context), Warp3DBase)

ULONG __W3D_CheckIdle(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define W3D_CheckIdle(context) __W3D_CheckIdle((context), Warp3DBase)

ULONG __W3D_Query(__reg("a0") W3D_Context * context, __reg("d0") ULONG query, __reg("d1") ULONG destfmt, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define W3D_Query(context, query, destfmt) __W3D_Query((context), (query), (destfmt), Warp3DBase)

ULONG __W3D_GetTexFmtInfo(__reg("a0") W3D_Context * context, __reg("d0") ULONG format, __reg("d1") ULONG destfmt, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define W3D_GetTexFmtInfo(context, format, destfmt) __W3D_GetTexFmtInfo((context), (format), (destfmt), Warp3DBase)

W3D_Texture    * __W3D_AllocTexObj(__reg("a0") W3D_Context * context, __reg("a1") ULONG * error, __reg("a2") struct TagItem * ATOTags, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define W3D_AllocTexObj(context, error, ATOTags) __W3D_AllocTexObj((context), (error), (ATOTags), Warp3DBase)

void __W3D_FreeTexObj(__reg("a0") W3D_Context * context, __reg("a1") W3D_Texture * texture, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define W3D_FreeTexObj(context, texture) __W3D_FreeTexObj((context), (texture), Warp3DBase)

void __W3D_ReleaseTexture(__reg("a0") W3D_Context * context, __reg("a1") W3D_Texture * texture, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define W3D_ReleaseTexture(context, texture) __W3D_ReleaseTexture((context), (texture), Warp3DBase)

void __W3D_FlushTextures(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define W3D_FlushTextures(context) __W3D_FlushTextures((context), Warp3DBase)

ULONG __W3D_SetFilter(__reg("a0") W3D_Context * context, __reg("a1") W3D_Texture * texture, __reg("d0") ULONG min, __reg("d1") ULONG mag, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define W3D_SetFilter(context, texture, min, mag) __W3D_SetFilter((context), (texture), (min), (mag), Warp3DBase)

ULONG __W3D_SetTexEnv(__reg("a0") W3D_Context * context, __reg("a1") W3D_Texture * texture, __reg("d1") ULONG envparam, __reg("a2") W3D_Color * envcolor, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define W3D_SetTexEnv(context, texture, envparam, envcolor) __W3D_SetTexEnv((context), (texture), (envparam), (envcolor), Warp3DBase)

ULONG __W3D_SetWrapMode(__reg("a0") W3D_Context * context, __reg("a1") W3D_Texture * texture, __reg("d0") ULONG mode_s, __reg("d1") ULONG mode_t mode_t, __reg("a2") W3D_Color * bordercolor, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define W3D_SetWrapMode(context, texture, mode_s, mode_t, bordercolor) __W3D_SetWrapMode((context), (texture), (mode_s), (mode_t), (bordercolor), Warp3DBase)

ULONG __W3D_UpdateTexImage(__reg("a0") W3D_Context * context, __reg("a1") W3D_Texture * texture, __reg("a2") void * teximage, __reg("d1") int level, __reg("a3") ULONG * palette, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define W3D_UpdateTexImage(context, texture, teximage, level, palette) __W3D_UpdateTexImage((context), (texture), (teximage), (level), (palette), Warp3DBase)

ULONG __W3D_UploadTexture(__reg("a0") W3D_Context * context, __reg("a1") W3D_Texture * texture, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define W3D_UploadTexture(context, texture) __W3D_UploadTexture((context), (texture), Warp3DBase)

ULONG __W3D_DrawLine(__reg("a0") W3D_Context * context, __reg("a1") W3D_Line * line, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define W3D_DrawLine(context, line) __W3D_DrawLine((context), (line), Warp3DBase)

ULONG __W3D_DrawPoint(__reg("a0") W3D_Context * context, __reg("a1") W3D_Point * point, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define W3D_DrawPoint(context, point) __W3D_DrawPoint((context), (point), Warp3DBase)

ULONG __W3D_DrawTriangle(__reg("a0") W3D_Context * context, __reg("a1") W3D_Triangle * triangle, __reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define W3D_DrawTriangle(context, triangle) __W3D_DrawTriangle((context), (triangle), Warp3DBase)

ULONG __W3D_DrawTriFan(__reg("a0") W3D_Context * context, __reg("a1") W3D_Triangles * triangles, __reg("a6") struct Library *)="\tjsr\t-168(a6)";
#define W3D_DrawTriFan(context, triangles) __W3D_DrawTriFan((context), (triangles), Warp3DBase)

ULONG __W3D_DrawTriStrip(__reg("a0") W3D_Context * context, __reg("a1") W3D_Triangles * triangles, __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define W3D_DrawTriStrip(context, triangles) __W3D_DrawTriStrip((context), (triangles), Warp3DBase)

ULONG __W3D_SetAlphaMode(__reg("a0") W3D_Context * context, __reg("d1") ULONG mode, __reg("a1") W3D_Float * refval, __reg("a6") struct Library *)="\tjsr\t-180(a6)";
#define W3D_SetAlphaMode(context, mode, refval) __W3D_SetAlphaMode((context), (mode), (refval), Warp3DBase)

ULONG __W3D_SetBlendMode(__reg("a0") W3D_Context * context, __reg("d0") ULONG srcfunc, __reg("d1") ULONG dstfunc, __reg("a6") struct Library *)="\tjsr\t-186(a6)";
#define W3D_SetBlendMode(context, srcfunc, dstfunc) __W3D_SetBlendMode((context), (srcfunc), (dstfunc), Warp3DBase)

ULONG __W3D_SetDrawRegion(__reg("a0") W3D_Context * context, __reg("a1") struct BitMap * bm, __reg("d1") int yoffset, __reg("a2") W3D_Scissor * scissor, __reg("a6") struct Library *)="\tjsr\t-192(a6)";
#define W3D_SetDrawRegion(context, bm, yoffset, scissor) __W3D_SetDrawRegion((context), (bm), (yoffset), (scissor), Warp3DBase)

ULONG __W3D_SetFogParams(__reg("a0") W3D_Context * context, __reg("a1") W3D_Fog * fogparams, __reg("d1") ULONG fogmode, __reg("a6") struct Library *)="\tjsr\t-198(a6)";
#define W3D_SetFogParams(context, fogparams, fogmode) __W3D_SetFogParams((context), (fogparams), (fogmode), Warp3DBase)

ULONG __W3D_SetColorMask(__reg("a0") W3D_Context * context, __reg("d0") W3D_Bool red, __reg("d1") W3D_Bool green, __reg("d2") W3D_Bool blue, __reg("d3") W3D_Bool alpha, __reg("a6") struct Library *)="\tjsr\t-204(a6)";
#define W3D_SetColorMask(context, red, green, blue, alpha) __W3D_SetColorMask((context), (red), (green), (blue), (alpha), Warp3DBase)

ULONG __W3D_SetStencilFunc(__reg("a0") W3D_Context * context, __reg("d0") ULONG func, __reg("d1") ULONG refvalue, __reg("d2") ULONG mask, __reg("a6") struct Library *)="\tjsr\t-210(a6)";
#define W3D_SetStencilFunc(context, func, refvalue, mask) __W3D_SetStencilFunc((context), (func), (refvalue), (mask), Warp3DBase)

ULONG __W3D_AllocZBuffer(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-216(a6)";
#define W3D_AllocZBuffer(context) __W3D_AllocZBuffer((context), Warp3DBase)

ULONG __W3D_FreeZBuffer(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-222(a6)";
#define W3D_FreeZBuffer(context) __W3D_FreeZBuffer((context), Warp3DBase)

ULONG __W3D_ClearZBuffer(__reg("a0") W3D_Context * context, __reg("a1") W3D_Double * clearvalue, __reg("a6") struct Library *)="\tjsr\t-228(a6)";
#define W3D_ClearZBuffer(context, clearvalue) __W3D_ClearZBuffer((context), (clearvalue), Warp3DBase)

ULONG __W3D_ReadZPixel(__reg("a0") W3D_Context * context, __reg("d0") ULONG x, __reg("d1") ULONG y, __reg("a1") W3D_Double * z, __reg("a6") struct Library *)="\tjsr\t-234(a6)";
#define W3D_ReadZPixel(context, x, y, z) __W3D_ReadZPixel((context), (x), (y), (z), Warp3DBase)

ULONG __W3D_ReadZSpan(__reg("a0") W3D_Context * context, __reg("d0") ULONG x, __reg("d1") ULONG y, __reg("d2") ULONG n, __reg("a1") void * z, __reg("a6") struct Library *)="\tjsr\t-240(a6)";
#define W3D_ReadZSpan(context, x, y, n, z) __W3D_ReadZSpan((context), (x), (y), (n), (void *)(z), Warp3DBase)

ULONG __W3D_SetZCompareMode(__reg("a0") W3D_Context * context, __reg("d1") ULONG mode, __reg("a6") struct Library *)="\tjsr\t-246(a6)";
#define W3D_SetZCompareMode(context, mode) __W3D_SetZCompareMode((context), (mode), Warp3DBase)

ULONG __W3D_AllocStencilBuffer(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-252(a6)";
#define W3D_AllocStencilBuffer(context) __W3D_AllocStencilBuffer((context), Warp3DBase)

ULONG __W3D_ClearStencilBuffer(__reg("a0") W3D_Context * context, __reg("a1") ULONG * clearval, __reg("a6") struct Library *)="\tjsr\t-258(a6)";
#define W3D_ClearStencilBuffer(context, clearval) __W3D_ClearStencilBuffer((context), (clearval), Warp3DBase)

ULONG __W3D_FillStencilBuffer(__reg("a0") W3D_Context * context, __reg("d0") ULONG x, __reg("d1") ULONG y, __reg("d2") ULONG width, __reg("d3") ULONG height, __reg("d4") ULONG depth, __reg("a1") void * data, __reg("a6") struct Library *)="\tjsr\t-264(a6)";
#define W3D_FillStencilBuffer(context, x, y, width, height, depth, data) __W3D_FillStencilBuffer((context), (x), (y), (width), (height), (depth), (data), Warp3DBase)

ULONG __W3D_FreeStencilBuffer(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-270(a6)";
#define W3D_FreeStencilBuffer(context) __W3D_FreeStencilBuffer((context), Warp3DBase)

ULONG __W3D_ReadStencilPixel(__reg("a0") W3D_Context * context, __reg("d0") ULONG x, __reg("d1") ULONG y, __reg("a1") ULONG * st, __reg("a6") struct Library *)="\tjsr\t-276(a6)";
#define W3D_ReadStencilPixel(context, x, y, st) __W3D_ReadStencilPixel((context), (x), (y), (st), Warp3DBase)

ULONG __W3D_ReadStencilSpan(__reg("a0") W3D_Context * context, __reg("d0") ULONG x, __reg("d1") ULONG y, __reg("d2") ULONG n, __reg("a1") void * st, __reg("a6") struct Library *)="\tjsr\t-282(a6)";
#define W3D_ReadStencilSpan(context, x, y, n, st) __W3D_ReadStencilSpan((context), (x), (y), (n), (void *)(st), Warp3DBase)

ULONG __W3D_SetLogicOp(__reg("a0") W3D_Context * context, __reg("d1") ULONG operation, __reg("a6") struct Library *)="\tjsr\t-288(a6)";
#define W3D_SetLogicOp(context, operation) __W3D_SetLogicOp((context), (operation), Warp3DBase)

ULONG __W3D_Hint(__reg("a0") W3D_Context * context, __reg("d0") ULONG mode, __reg("d1") ULONG quality, __reg("a6") struct Library *)="\tjsr\t-294(a6)";
#define W3D_Hint(context, mode, quality) __W3D_Hint((context), (mode), (quality), Warp3DBase)

ULONG __W3D_SetDrawRegionWBM(__reg("a0") W3D_Context * context, __reg("a1") W3D_Bitmap * bitmap, __reg("a2") W3D_Scissor * scissor, __reg("a6") struct Library *)="\tjsr\t-300(a6)";
#define W3D_SetDrawRegionWBM(context, bitmap, scissor) __W3D_SetDrawRegionWBM((context), (bitmap), (scissor), Warp3DBase)

ULONG __W3D_GetDriverState(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-306(a6)";
#define W3D_GetDriverState(context) __W3D_GetDriverState((context), Warp3DBase)

ULONG __W3D_Flush(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-312(a6)";
#define W3D_Flush(context) __W3D_Flush((context), Warp3DBase)

ULONG __W3D_SetPenMask(__reg("a0") W3D_Context * context, __reg("d1") ULONG pen, __reg("a6") struct Library *)="\tjsr\t-318(a6)";
#define W3D_SetPenMask(context, pen) __W3D_SetPenMask((context), (pen), Warp3DBase)

ULONG __W3D_SetStencilOp(__reg("a0") W3D_Context * context, __reg("d0") ULONG sfail, __reg("d1") ULONG dpfail, __reg("d2") ULONG dppass, __reg("a6") struct Library *)="\tjsr\t-324(a6)";
#define W3D_SetStencilOp(context, sfail, dpfail, dppass) __W3D_SetStencilOp((context), (sfail), (dpfail), (dppass), Warp3DBase)

ULONG __W3D_SetWriteMask(__reg("a0") W3D_Context * context, __reg("d1") ULONG mask, __reg("a6") struct Library *)="\tjsr\t-330(a6)";
#define W3D_SetWriteMask(context, mask) __W3D_SetWriteMask((context), (mask), Warp3DBase)

ULONG __W3D_WriteStencilPixel(__reg("a0") W3D_Context * context, __reg("d0") ULONG x, __reg("d1") ULONG y, __reg("d2") ULONG st, __reg("a6") struct Library *)="\tjsr\t-336(a6)";
#define W3D_WriteStencilPixel(context, x, y, st) __W3D_WriteStencilPixel((context), (x), (y), (st), Warp3DBase)

ULONG __W3D_WriteStencilSpan(__reg("a0") W3D_Context * context, __reg("d0") ULONG x, __reg("d1") ULONG y, __reg("d2") ULONG n, __reg("a1") void * st, __reg("a2") void * mask, __reg("a6") struct Library *)="\tjsr\t-342(a6)";
#define W3D_WriteStencilSpan(context, x, y, n, st, mask) __W3D_WriteStencilSpan((context), (x), (y), (n), (void *)(st), (void *)(mask), Warp3DBase)

void __W3D_WriteZPixel(__reg("a0") W3D_Context * context, __reg("d0") ULONG x, __reg("d1") ULONG y, __reg("a1") W3D_Double * z, __reg("a6") struct Library *)="\tjsr\t-348(a6)";
#define W3D_WriteZPixel(context, x, y, z) __W3D_WriteZPixel((context), (x), (y), (z), Warp3DBase)

void __W3D_WriteZSpan(__reg("a0") W3D_Context * context, __reg("d0") ULONG x, __reg("d1") ULONG y, __reg("d2") ULONG n, __reg("a1") void * z, __reg("a2") void * maks, __reg("a6") struct Library *)="\tjsr\t-354(a6)";
#define W3D_WriteZSpan(context, x, y, n, z, maks) __W3D_WriteZSpan((context), (x), (y), (n), (void *)(z), (void *)(maks), Warp3DBase)

ULONG __W3D_SetCurrentColor(__reg("a0") W3D_Context * context, __reg("a1") W3D_Color * color, __reg("a6") struct Library *)="\tjsr\t-360(a6)";
#define W3D_SetCurrentColor(context, color) __W3D_SetCurrentColor((context), (color), Warp3DBase)

ULONG __W3D_SetCurrentPen(__reg("a0") W3D_Context * context, __reg("d1") ULONG pen, __reg("a6") struct Library *)="\tjsr\t-366(a6)";
#define W3D_SetCurrentPen(context, pen) __W3D_SetCurrentPen((context), (pen), Warp3DBase)

ULONG __W3D_UpdateTexSubImage(__reg("a0") W3D_Context * context, __reg("a1") W3D_Texture * texture, __reg("a2") void * teximage, __reg("d1") ULONG lev, __reg("a3") ULONG * palette, __reg("a4") W3D_Scissor* scissor, __reg("d0") ULONG srcbpr, __reg("a6") struct Library *)="\tjsr\t-372(a6)";
#define W3D_UpdateTexSubImage(context, texture, teximage, lev, palette, scissor, srcbpr) __W3D_UpdateTexSubImage((context), (texture), (teximage), (lev), (palette), (scissor), (srcbpr), Warp3DBase)

ULONG __W3D_FreeAllTexObj(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-378(a6)";
#define W3D_FreeAllTexObj(context) __W3D_FreeAllTexObj((context), Warp3DBase)

ULONG __W3D_GetDestFmt(__reg("a6") struct Library *)="\tjsr\t-384(a6)";
#define W3D_GetDestFmt() __W3D_GetDestFmt(Warp3DBase)

ULONG __W3D_DrawLineStrip(__reg("a0") W3D_Context * context, __reg("a1") W3D_Lines * lines, __reg("a6") struct Library *)="\tjsr\t-390(a6)";
#define W3D_DrawLineStrip(context, lines) __W3D_DrawLineStrip((context), (lines), Warp3DBase)

ULONG __W3D_DrawLineLoop(__reg("a0") W3D_Context * context, __reg("a1") W3D_Lines * lines, __reg("a6") struct Library *)="\tjsr\t-396(a6)";
#define W3D_DrawLineLoop(context, lines) __W3D_DrawLineLoop((context), (lines), Warp3DBase)

W3D_Driver ** __W3D_GetDrivers(__reg("a6") struct Library *)="\tjsr\t-402(a6)";
#define W3D_GetDrivers() __W3D_GetDrivers(Warp3DBase)

ULONG __W3D_QueryDriver(__reg("a0") W3D_Driver* driver, __reg("d0") ULONG query, __reg("d1") ULONG destfmt, __reg("a6") struct Library *)="\tjsr\t-408(a6)";
#define W3D_QueryDriver(driver, query, destfmt) __W3D_QueryDriver((driver), (query), (destfmt), Warp3DBase)

ULONG __W3D_GetDriverTexFmtInfo(__reg("a0") W3D_Driver* driver, __reg("d0") ULONG format, __reg("d1") ULONG destfmt, __reg("a6") struct Library *)="\tjsr\t-414(a6)";
#define W3D_GetDriverTexFmtInfo(driver, format, destfmt) __W3D_GetDriverTexFmtInfo((driver), (format), (destfmt), Warp3DBase)

ULONG __W3D_RequestMode(__reg("a0") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-420(a6)";
#define W3D_RequestMode(taglist) __W3D_RequestMode((taglist), Warp3DBase)

void __W3D_SetScissor(__reg("a0") W3D_Context * context, __reg("a1") W3D_Scissor * scissor, __reg("a6") struct Library *)="\tjsr\t-426(a6)";
#define W3D_SetScissor(context, scissor) __W3D_SetScissor((context), (scissor), Warp3DBase)

void __W3D_FlushFrame(__reg("a0") W3D_Context * context, __reg("a6") struct Library *)="\tjsr\t-432(a6)";
#define W3D_FlushFrame(context) __W3D_FlushFrame((context), Warp3DBase)

W3D_Driver * __W3D_TestMode(__reg("d0") ULONG modeid, __reg("a6") struct Library *)="\tjsr\t-438(a6)";
#define W3D_TestMode(modeid) __W3D_TestMode((modeid), Warp3DBase)

#endif /*  _VBCCINLINE_WARP3D_H  */
