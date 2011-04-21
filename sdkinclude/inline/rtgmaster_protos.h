#ifndef _VBCCINLINE_RTGMASTER_H
#define _VBCCINLINE_RTGMASTER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct RtgScreen * __OpenRtgScreen(__reg("a0") struct ScreenReq * ScreenReq, __reg("a1") struct TagItem * Tags, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define OpenRtgScreen(ScreenReq, Tags) __OpenRtgScreen((ScreenReq), (Tags), RTGMasterBase)

void __CloseRtgScreen(__reg("a0") struct RtgScreen * MyScreen, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define CloseRtgScreen(MyScreen) __CloseRtgScreen((MyScreen), RTGMasterBase)

void __SwitchScreens(__reg("a0") struct RtgScreen * MyScreen, __reg("d0") ULONG Buffer, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define SwitchScreens(MyScreen, Buffer) __SwitchScreens((MyScreen), (Buffer), RTGMasterBase)

void __LoadRGBRtg(__reg("a0") struct RtgScreen * RtgScreen, __reg("a1") void * Table, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define LoadRGBRtg(RtgScreen, Table) __LoadRGBRtg((RtgScreen), (Table), RTGMasterBase)

void   * __LockRtgScreen(__reg("a0") struct RtgScreen * RtgScreen, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define LockRtgScreen(RtgScreen) __LockRtgScreen((RtgScreen), RTGMasterBase)

void __UnlockRtgScreen(__reg("a0") struct RtgScreen * RtgScreen, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define UnlockRtgScreen(RtgScreen) __UnlockRtgScreen((RtgScreen), RTGMasterBase)

void   * __GetBufAdr(__reg("a0") struct RtgScreen * RtgScreen, __reg("d0") ULONG Buffer, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define GetBufAdr(RtgScreen, Buffer) __GetBufAdr((RtgScreen), (Buffer), RTGMasterBase)

void __GetRtgScreenData(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define GetRtgScreenData(MyScreen, taglist) __GetRtgScreenData((MyScreen), (taglist), RTGMasterBase)

struct ScreenReqList * __RtgAllocSRList(__reg("a0") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define RtgAllocSRList(tags) __RtgAllocSRList((tags), RTGMasterBase)

void __FreeRtgSRList(__reg("a0") struct ScreenReqList * req, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define FreeRtgSRList(req) __FreeRtgSRList((req), RTGMasterBase)

ULONG __RtgScreenAtFront(__reg("a0") struct RtgScreen * RtgScreen, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define RtgScreenAtFront(RtgScreen) __RtgScreenAtFront((RtgScreen), RTGMasterBase)

struct ScreenReq * __RtgScreenModeReq(__reg("a0") struct TagItem * Tags, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define RtgScreenModeReq(Tags) __RtgScreenModeReq((Tags), RTGMasterBase)

void __FreeRtgScreenModeReq(__reg("a0") struct ScreenReq * MyReq, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define FreeRtgScreenModeReq(MyReq) __FreeRtgScreenModeReq((MyReq), RTGMasterBase)

void __WriteRtgPixel(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") APTR BufferAdr, __reg("d0") ULONG XPos, __reg("d1") ULONG YPos, __reg("d2") UWORD Color, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define WriteRtgPixel(MyScreen, BufferAdr, XPos, YPos, Color) __WriteRtgPixel((MyScreen), (BufferAdr), (XPos), (YPos), (Color), RTGMasterBase)

void __WriteRtgPixelRGB(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") APTR BufferAdr, __reg("d0") ULONG XPos, __reg("d1") ULONG YPos, __reg("d2") ULONG Pixel, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define WriteRtgPixelRGB(MyScreen, BufferAdr, XPos, YPos, Pixel) __WriteRtgPixelRGB((MyScreen), (BufferAdr), (XPos), (YPos), (Pixel), RTGMasterBase)

void __FillRtgRect(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") APTR BufferAdr, __reg("d0") ULONG Color, __reg("d1") ULONG Left, __reg("d2") ULONG Top, __reg("d3") ULONG Width, __reg("d4") ULONG Height, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define FillRtgRect(MyScreen, BufferAdr, Color, Left, Top, Width, Height) __FillRtgRect((MyScreen), (BufferAdr), (Color), (Left), (Top), (Width), (Height), RTGMasterBase)

void __FillRtgRectRGB(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") APTR BufferAdr, __reg("d0") ULONG Color, __reg("d1") ULONG Left, __reg("d2") ULONG Top, __reg("d3") ULONG Width, __reg("d4") ULONG Height, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define FillRtgRectRGB(MyScreen, BufferAdr, Color, Left, Top, Width, Height) __FillRtgRectRGB((MyScreen), (BufferAdr), (Color), (Left), (Top), (Width), (Height), RTGMasterBase)

void __WriteRtgPixelArray(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") APTR BufferAdr, __reg("a2") APTR Array, __reg("d0") ULONG Left, __reg("d1") ULONG Top, __reg("d2") ULONG Width, __reg("d3") ULONG Height, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define WriteRtgPixelArray(MyScreen, BufferAdr, Array, Left, Top, Width, Height) __WriteRtgPixelArray((MyScreen), (BufferAdr), (Array), (Left), (Top), (Width), (Height), RTGMasterBase)

void __WriteRtgPixelRGBArray(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") APTR BufferAdr, __reg("a2") APTR Array, __reg("d0") ULONG Left, __reg("d1") ULONG Top, __reg("d2") ULONG Width, __reg("d3") ULONG Height, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define WriteRtgPixelRGBArray(MyScreen, BufferAdr, Array, Left, Top, Width, Height) __WriteRtgPixelRGBArray((MyScreen), (BufferAdr), (Array), (Left), (Top), (Width), (Height), RTGMasterBase)

void __CopyRtgPixelArray(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") APTR BufferAdr, __reg("a2") APTR Array, __reg("d0") ULONG Left, __reg("d1") ULONG Top, __reg("d2") ULONG Width, __reg("d3") ULONG Height, __reg("d4") ULONG SrcX, __reg("d5") ULONG SrcY, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define CopyRtgPixelArray(MyScreen, BufferAdr, Array, Left, Top, Width, Height, SrcX, SrcY) __CopyRtgPixelArray((MyScreen), (BufferAdr), (Array), (Left), (Top), (Width), (Height), (SrcX), (SrcY), RTGMasterBase)

void __CopyRtgBlit(__reg("a0") struct RtgScreen * RtgScreen, __reg("a1") APTR BufferAdr, __reg("a2") APTR Array, __reg("a3") void * Masked, __reg("d0") ULONG Left, __reg("d1") ULONG Top, __reg("d2") ULONG Width, __reg("d3") ULONG Height, __reg("d4") ULONG WidthSrc, __reg("d5") ULONG HeightSrc, __reg("d6") ULONG SrcX, __reg("d7") ULONG SrcY, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define CopyRtgBlit(RtgScreen, BufferAdr, Array, Masked, Left, Top, Width, Height, WidthSrc, HeightSrc, SrcX, SrcY) __CopyRtgBlit((RtgScreen), (BufferAdr), (Array), (void *)(Masked), (Left), (Top), (Width), (Height), (WidthSrc), (HeightSrc), (SrcX), (SrcY), RTGMasterBase)

void __DrawRtgLine(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") APTR BufferAdr, __reg("d0") ULONG Color, __reg("d1") ULONG X1, __reg("d2") ULONG Y1, __reg("d3") ULONG X2, __reg("d4") ULONG Y2, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define DrawRtgLine(MyScreen, BufferAdr, Color, X1, Y1, X2, Y2) __DrawRtgLine((MyScreen), (BufferAdr), (Color), (X1), (Y1), (X2), (Y2), RTGMasterBase)

void __DrawRtgLineRGB(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") APTR BufferAdr, __reg("d0") ULONG Color, __reg("d1") ULONG X1, __reg("d2") ULONG Y1, __reg("d3") ULONG X2, __reg("d4") ULONG Y2, __reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define DrawRtgLineRGB(MyScreen, BufferAdr, Color, X1, Y1, X2, Y2) __DrawRtgLineRGB((MyScreen), (BufferAdr), (Color), (X1), (Y1), (X2), (Y2), RTGMasterBase)

void __WaitRtgSwitch(__reg("a0") struct RtgScreen * MyScreen, __reg("a6") struct Library *)="\tjsr\t-168(a6)";
#define WaitRtgSwitch(MyScreen) __WaitRtgSwitch((MyScreen), RTGMasterBase)

void __WaitRtgBlit(__reg("a0") struct RtgScreen * MyScreen, __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define WaitRtgBlit(MyScreen) __WaitRtgBlit((MyScreen), RTGMasterBase)

void __RtgWaitTOF(__reg("a0") struct RtgScreen * MyScreen, __reg("a6") struct Library *)="\tjsr\t-180(a6)";
#define RtgWaitTOF(MyScreen) __RtgWaitTOF((MyScreen), RTGMasterBase)

void __RtgBlit(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") APTR SrcBuf, __reg("a2") APTR DstBuf, __reg("d0") ULONG SrcX, __reg("d1") ULONG SrcY, __reg("d2") ULONG DstX, __reg("d3") ULONG DstY, __reg("d4") ULONG Width, __reg("d5") ULONG Height, __reg("d6") UBYTE minterm, __reg("a6") struct Library *)="\tjsr\t-186(a6)";
#define RtgBlit(MyScreen, SrcBuf, DstBuf, SrcX, SrcY, DstX, DstY, Width, Height, minterm) __RtgBlit((MyScreen), (SrcBuf), (DstBuf), (SrcX), (SrcY), (DstX), (DstY), (Width), (Height), (minterm), RTGMasterBase)

void __RtgBltClear(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") void * BufNum, __reg("d0") ULONG xpos, __reg("d1") ULONG ypos, __reg("d2") ULONG width, __reg("d3") ULONG height, __reg("a6") struct Library *)="\tjsr\t-192(a6)";
#define RtgBltClear(MyScreen, BufNum, xpos, ypos, width, height) __RtgBltClear((MyScreen), (void *)(BufNum), (xpos), (ypos), (width), (height), RTGMasterBase)

int __CallRtgC2P(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") APTR BufAdr, __reg("a2") APTR Array, __reg("d0") ULONG signal, __reg("d1") ULONG xpos, __reg("d2") ULONG ypos, __reg("d3") ULONG width, __reg("d4") ULONG height, __reg("d5") ULONG mode, __reg("a6") struct Library *)="\tjsr\t-198(a6)";
#define CallRtgC2P(MyScreen, BufAdr, Array, signal, xpos, ypos, width, height, mode) __CallRtgC2P((MyScreen), (BufAdr), (Array), (signal), (xpos), (ypos), (width), (height), (mode), RTGMasterBase)

struct ScreenReq * __RtgBestSR(__reg("a0") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-204(a6)";
#define RtgBestSR(tags) __RtgBestSR((tags), RTGMasterBase)

int __RtgCheckVSync(__reg("a0") struct RtgScreen * RtgScreen, __reg("a6") struct Library *)="\tjsr\t-210(a6)";
#define RtgCheckVSync(RtgScreen) __RtgCheckVSync((RtgScreen), RTGMasterBase)

struct RtgBobHandle * __InitRtgBobSystem(__reg("a0") struct RtgScreen * RtgScreen, __reg("d0") ULONG maxnum, __reg("a6") struct Library *)="\tjsr\t-216(a6)";
#define InitRtgBobSystem(RtgScreen, maxnum) __InitRtgBobSystem((RtgScreen), (maxnum), RTGMasterBase)

int __CheckPPCCommand(__reg("a0") struct RtgScreen * RtgScreen, __reg("d0") ULONG Command, __reg("a6") struct Library *)="\tjsr\t-222(a6)";
#define CheckPPCCommand(RtgScreen, Command) __CheckPPCCommand((RtgScreen), (Command), RTGMasterBase)

void __CloseRtgBobSystem(__reg("a0") struct RtgBobHandle * RtgBobHandle, __reg("a6") struct Library *)="\tjsr\t-228(a6)";
#define CloseRtgBobSystem(RtgBobHandle) __CloseRtgBobSystem((RtgBobHandle), RTGMasterBase)

void __RtgText(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") void * map, __reg("a2") char * mytext, __reg("d0") WORD length, __reg("d1") SHORT xpos, __reg("d2") SHORT ypos, __reg("a6") struct Library *)="\tjsr\t-270(a6)";
#define RtgText(MyScreen, map, mytext, length, xpos, ypos) __RtgText((MyScreen), (map), (mytext), (length), (xpos), (ypos), RTGMasterBase)

void __RtgSetFont(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") void * myfont, __reg("a6") struct Library *)="\tjsr\t-276(a6)";
#define RtgSetFont(MyScreen, myfont) __RtgSetFont((MyScreen), (myfont), RTGMasterBase)

void __RtgClearPointer(__reg("a0") struct RtgScreen * MyScreen, __reg("a6") struct Library *)="\tjsr\t-282(a6)";
#define RtgClearPointer(MyScreen) __RtgClearPointer((MyScreen), RTGMasterBase)

void __RtgSetPointer(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") UWORD * pointer, __reg("d0") WORD xpos, __reg("d1") WORD ypos, __reg("d2") WORD width, __reg("d3") WORD height, __reg("a6") struct Library *)="\tjsr\t-288(a6)";
#define RtgSetPointer(MyScreen, pointer, xpos, ypos, width, height) __RtgSetPointer((MyScreen), (pointer), (xpos), (ypos), (width), (height), RTGMasterBase)

void __RtgSetTextMode(__reg("a0") struct RtgScreen * MyScreen, __reg("d0") UBYTE fgcolor, __reg("d1") UBYTE bgcolor, __reg("d2") UBYTE drmode, __reg("a6") struct Library *)="\tjsr\t-294(a6)";
#define RtgSetTextMode(MyScreen, fgcolor, bgcolor, drmode) __RtgSetTextMode((MyScreen), (fgcolor), (bgcolor), (drmode), RTGMasterBase)

void * __RtgOpenFont(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") struct TextAttr * myattr, __reg("a6") struct Library *)="\tjsr\t-300(a6)";
#define RtgOpenFont(MyScreen, myattr) __RtgOpenFont((MyScreen), (myattr), RTGMasterBase)

void __RtgCloseFont(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") void * myfont, __reg("a6") struct Library *)="\tjsr\t-306(a6)";
#define RtgCloseFont(MyScreen, myfont) __RtgCloseFont((MyScreen), (myfont), RTGMasterBase)

void __RtgSetTextModeRGB(__reg("a0") struct RtgScreen * MyScreen, __reg("d0") ULONG fgcolor, __reg("d1") ULONG bgcolor, __reg("d2") UBYTE drmode, __reg("a6") struct Library *)="\tjsr\t-312(a6)";
#define RtgSetTextModeRGB(MyScreen, fgcolor, bgcolor, drmode) __RtgSetTextModeRGB((MyScreen), (fgcolor), (bgcolor), (drmode), RTGMasterBase)

void * __RtgInitRDCMP(__reg("a0") struct RtgScreen * MyScreen, __reg("a6") struct Library *)="\tjsr\t-318(a6)";
#define RtgInitRDCMP(MyScreen) __RtgInitRDCMP((MyScreen), RTGMasterBase)

void __RtgWaitRDCMP(__reg("a0") struct RtgScreen * MyScreen, __reg("a6") struct Library *)="\tjsr\t-324(a6)";
#define RtgWaitRDCMP(MyScreen) __RtgWaitRDCMP((MyScreen), RTGMasterBase)

void * __RtgGetMsg(__reg("a0") struct RtgScreen * MyScreen, __reg("a6") struct Library *)="\tjsr\t-330(a6)";
#define RtgGetMsg(MyScreen) __RtgGetMsg((MyScreen), RTGMasterBase)

void __RtgReplyMsg(__reg("a0") struct RtgScreen * MyScreen, __reg("a1") void * msg, __reg("a6") struct Library *)="\tjsr\t-336(a6)";
#define RtgReplyMsg(MyScreen, msg) __RtgReplyMsg((MyScreen), (msg), RTGMasterBase)

#endif /*  _VBCCINLINE_RTGMASTER_H  */
