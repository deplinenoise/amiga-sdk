#ifndef _VBCCINLINE_INTUITION_H
#define _VBCCINLINE_INTUITION_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

void __OpenIntuition(__reg("a6") struct IntuitionBase *)="\tjsr\t-30(a6)";
#define OpenIntuition() __OpenIntuition(IntuitionBase)

void __Intuition(__reg("a0") struct InputEvent * iEvent, __reg("a6") struct IntuitionBase *)="\tjsr\t-36(a6)";
#define Intuition(iEvent) __Intuition((iEvent), IntuitionBase)

UWORD __AddGadget(__reg("a0") struct Window * window, __reg("a1") struct Gadget * gadget, __reg("d0") unsigned long position, __reg("a6") struct IntuitionBase *)="\tjsr\t-42(a6)";
#define AddGadget(window, gadget, position) __AddGadget((window), (gadget), (position), IntuitionBase)

BOOL __ClearDMRequest(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-48(a6)";
#define ClearDMRequest(window) __ClearDMRequest((window), IntuitionBase)

void __ClearMenuStrip(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-54(a6)";
#define ClearMenuStrip(window) __ClearMenuStrip((window), IntuitionBase)

void __ClearPointer(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-60(a6)";
#define ClearPointer(window) __ClearPointer((window), IntuitionBase)

BOOL __CloseScreen(__reg("a0") struct Screen * screen, __reg("a6") struct IntuitionBase *)="\tjsr\t-66(a6)";
#define CloseScreen(screen) __CloseScreen((screen), IntuitionBase)

void __CloseWindow(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-72(a6)";
#define CloseWindow(window) __CloseWindow((window), IntuitionBase)

LONG __CloseWorkBench(__reg("a6") struct IntuitionBase *)="\tjsr\t-78(a6)";
#define CloseWorkBench() __CloseWorkBench(IntuitionBase)

void __CurrentTime(__reg("a0") ULONG * seconds, __reg("a1") ULONG * micros, __reg("a6") struct IntuitionBase *)="\tjsr\t-84(a6)";
#define CurrentTime(seconds, micros) __CurrentTime((seconds), (micros), IntuitionBase)

BOOL __DisplayAlert(__reg("d0") unsigned long alertNumber, __reg("a0") UBYTE * string, __reg("d1") unsigned long height, __reg("a6") struct IntuitionBase *)="\tjsr\t-90(a6)";
#define DisplayAlert(alertNumber, string, height) __DisplayAlert((alertNumber), (string), (height), IntuitionBase)

void __DisplayBeep(__reg("a0") struct Screen * screen, __reg("a6") struct IntuitionBase *)="\tjsr\t-96(a6)";
#define DisplayBeep(screen) __DisplayBeep((screen), IntuitionBase)

BOOL __DoubleClick(__reg("d0") unsigned long sSeconds, __reg("d1") unsigned long sMicros, __reg("d2") unsigned long cSeconds, __reg("d3") unsigned long cMicros, __reg("a6") struct IntuitionBase *)="\tjsr\t-102(a6)";
#define DoubleClick(sSeconds, sMicros, cSeconds, cMicros) __DoubleClick((sSeconds), (sMicros), (cSeconds), (cMicros), IntuitionBase)

void __DrawBorder(__reg("a0") struct RastPort * rp, __reg("a1") struct Border * border, __reg("d0") long leftOffset, __reg("d1") long topOffset, __reg("a6") struct IntuitionBase *)="\tjsr\t-108(a6)";
#define DrawBorder(rp, border, leftOffset, topOffset) __DrawBorder((rp), (border), (leftOffset), (topOffset), IntuitionBase)

void __DrawImage(__reg("a0") struct RastPort * rp, __reg("a1") struct Image * image, __reg("d0") long leftOffset, __reg("d1") long topOffset, __reg("a6") struct IntuitionBase *)="\tjsr\t-114(a6)";
#define DrawImage(rp, image, leftOffset, topOffset) __DrawImage((rp), (image), (leftOffset), (topOffset), IntuitionBase)

void __EndRequest(__reg("a0") struct Requester * requester, __reg("a1") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-120(a6)";
#define EndRequest(requester, window) __EndRequest((requester), (window), IntuitionBase)

struct Preferences * __GetDefPrefs(__reg("a0") struct Preferences * preferences, __reg("d0") long size, __reg("a6") struct IntuitionBase *)="\tjsr\t-126(a6)";
#define GetDefPrefs(preferences, size) __GetDefPrefs((preferences), (size), IntuitionBase)

struct Preferences * __GetPrefs(__reg("a0") struct Preferences * preferences, __reg("d0") long size, __reg("a6") struct IntuitionBase *)="\tjsr\t-132(a6)";
#define GetPrefs(preferences, size) __GetPrefs((preferences), (size), IntuitionBase)

void __InitRequester(__reg("a0") struct Requester * requester, __reg("a6") struct IntuitionBase *)="\tjsr\t-138(a6)";
#define InitRequester(requester) __InitRequester((requester), IntuitionBase)

struct MenuItem * __ItemAddress(__reg("a0") struct Menu * menuStrip, __reg("d0") unsigned long menuNumber, __reg("a6") struct IntuitionBase *)="\tjsr\t-144(a6)";
#define ItemAddress(menuStrip, menuNumber) __ItemAddress((menuStrip), (menuNumber), IntuitionBase)

BOOL __ModifyIDCMP(__reg("a0") struct Window * window, __reg("d0") unsigned long flags, __reg("a6") struct IntuitionBase *)="\tjsr\t-150(a6)";
#define ModifyIDCMP(window, flags) __ModifyIDCMP((window), (flags), IntuitionBase)

void __ModifyProp(__reg("a0") struct Gadget * gadget, __reg("a1") struct Window * window, __reg("a2") struct Requester * requester, __reg("d0") unsigned long flags, __reg("d1") unsigned long horizPot, __reg("d2") unsigned long vertPot, __reg("d3") unsigned long horizBody, __reg("d4") unsigned long vertBody, __reg("a6") struct IntuitionBase *)="\tjsr\t-156(a6)";
#define ModifyProp(gadget, window, requester, flags, horizPot, vertPot, horizBody, vertBody) __ModifyProp((gadget), (window), (requester), (flags), (horizPot), (vertPot), (horizBody), (vertBody), IntuitionBase)

void __MoveScreen(__reg("a0") struct Screen * screen, __reg("d0") long dx, __reg("d1") long dy, __reg("a6") struct IntuitionBase *)="\tjsr\t-162(a6)";
#define MoveScreen(screen, dx, dy) __MoveScreen((screen), (dx), (dy), IntuitionBase)

void __MoveWindow(__reg("a0") struct Window * window, __reg("d0") long dx, __reg("d1") long dy, __reg("a6") struct IntuitionBase *)="\tjsr\t-168(a6)";
#define MoveWindow(window, dx, dy) __MoveWindow((window), (dx), (dy), IntuitionBase)

void __OffGadget(__reg("a0") struct Gadget * gadget, __reg("a1") struct Window * window, __reg("a2") struct Requester * requester, __reg("a6") struct IntuitionBase *)="\tjsr\t-174(a6)";
#define OffGadget(gadget, window, requester) __OffGadget((gadget), (window), (requester), IntuitionBase)

void __OffMenu(__reg("a0") struct Window * window, __reg("d0") unsigned long menuNumber, __reg("a6") struct IntuitionBase *)="\tjsr\t-180(a6)";
#define OffMenu(window, menuNumber) __OffMenu((window), (menuNumber), IntuitionBase)

void __OnGadget(__reg("a0") struct Gadget * gadget, __reg("a1") struct Window * window, __reg("a2") struct Requester * requester, __reg("a6") struct IntuitionBase *)="\tjsr\t-186(a6)";
#define OnGadget(gadget, window, requester) __OnGadget((gadget), (window), (requester), IntuitionBase)

void __OnMenu(__reg("a0") struct Window * window, __reg("d0") unsigned long menuNumber, __reg("a6") struct IntuitionBase *)="\tjsr\t-192(a6)";
#define OnMenu(window, menuNumber) __OnMenu((window), (menuNumber), IntuitionBase)

struct Screen * __OpenScreen(__reg("a0") struct NewScreen * newScreen, __reg("a6") struct IntuitionBase *)="\tjsr\t-198(a6)";
#define OpenScreen(newScreen) __OpenScreen((newScreen), IntuitionBase)

struct Window * __OpenWindow(__reg("a0") struct NewWindow * newWindow, __reg("a6") struct IntuitionBase *)="\tjsr\t-204(a6)";
#define OpenWindow(newWindow) __OpenWindow((newWindow), IntuitionBase)

ULONG __OpenWorkBench(__reg("a6") struct IntuitionBase *)="\tjsr\t-210(a6)";
#define OpenWorkBench() __OpenWorkBench(IntuitionBase)

void __PrintIText(__reg("a0") struct RastPort * rp, __reg("a1") struct IntuiText * iText, __reg("d0") long left, __reg("d1") long top, __reg("a6") struct IntuitionBase *)="\tjsr\t-216(a6)";
#define PrintIText(rp, iText, left, top) __PrintIText((rp), (iText), (left), (top), IntuitionBase)

void __RefreshGadgets(__reg("a0") struct Gadget * gadgets, __reg("a1") struct Window * window, __reg("a2") struct Requester * requester, __reg("a6") struct IntuitionBase *)="\tjsr\t-222(a6)";
#define RefreshGadgets(gadgets, window, requester) __RefreshGadgets((gadgets), (window), (requester), IntuitionBase)

UWORD __RemoveGadget(__reg("a0") struct Window * window, __reg("a1") struct Gadget * gadget, __reg("a6") struct IntuitionBase *)="\tjsr\t-228(a6)";
#define RemoveGadget(window, gadget) __RemoveGadget((window), (gadget), IntuitionBase)

void __ReportMouse(__reg("d0") long flag, __reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-234(a6)";
#define ReportMouse(flag, window) __ReportMouse((flag), (window), IntuitionBase)

BOOL __Request(__reg("a0") struct Requester * requester, __reg("a1") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-240(a6)";
#define Request(requester, window) __Request((requester), (window), IntuitionBase)

void __ScreenToBack(__reg("a0") struct Screen * screen, __reg("a6") struct IntuitionBase *)="\tjsr\t-246(a6)";
#define ScreenToBack(screen) __ScreenToBack((screen), IntuitionBase)

void __ScreenToFront(__reg("a0") struct Screen * screen, __reg("a6") struct IntuitionBase *)="\tjsr\t-252(a6)";
#define ScreenToFront(screen) __ScreenToFront((screen), IntuitionBase)

BOOL __SetDMRequest(__reg("a0") struct Window * window, __reg("a1") struct Requester * requester, __reg("a6") struct IntuitionBase *)="\tjsr\t-258(a6)";
#define SetDMRequest(window, requester) __SetDMRequest((window), (requester), IntuitionBase)

BOOL __SetMenuStrip(__reg("a0") struct Window * window, __reg("a1") struct Menu * menu, __reg("a6") struct IntuitionBase *)="\tjsr\t-264(a6)";
#define SetMenuStrip(window, menu) __SetMenuStrip((window), (menu), IntuitionBase)

void __SetPointer(__reg("a0") struct Window * window, __reg("a1") UWORD * pointer, __reg("d0") long height, __reg("d1") long width, __reg("d2") long xOffset, __reg("d3") long yOffset, __reg("a6") struct IntuitionBase *)="\tjsr\t-270(a6)";
#define SetPointer(window, pointer, height, width, xOffset, yOffset) __SetPointer((window), (pointer), (height), (width), (xOffset), (yOffset), IntuitionBase)

void __SetWindowTitles(__reg("a0") struct Window * window, __reg("a1") UBYTE * windowTitle, __reg("a2") UBYTE * screenTitle, __reg("a6") struct IntuitionBase *)="\tjsr\t-276(a6)";
#define SetWindowTitles(window, windowTitle, screenTitle) __SetWindowTitles((window), (windowTitle), (screenTitle), IntuitionBase)

void __ShowTitle(__reg("a0") struct Screen * screen, __reg("d0") long showIt, __reg("a6") struct IntuitionBase *)="\tjsr\t-282(a6)";
#define ShowTitle(screen, showIt) __ShowTitle((screen), (showIt), IntuitionBase)

void __SizeWindow(__reg("a0") struct Window * window, __reg("d0") long dx, __reg("d1") long dy, __reg("a6") struct IntuitionBase *)="\tjsr\t-288(a6)";
#define SizeWindow(window, dx, dy) __SizeWindow((window), (dx), (dy), IntuitionBase)

struct View * __ViewAddress(__reg("a6") struct IntuitionBase *)="\tjsr\t-294(a6)";
#define ViewAddress() __ViewAddress(IntuitionBase)

struct ViewPort * __ViewPortAddress(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-300(a6)";
#define ViewPortAddress(window) __ViewPortAddress((window), IntuitionBase)

void __WindowToBack(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-306(a6)";
#define WindowToBack(window) __WindowToBack((window), IntuitionBase)

void __WindowToFront(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-312(a6)";
#define WindowToFront(window) __WindowToFront((window), IntuitionBase)

BOOL __WindowLimits(__reg("a0") struct Window * window, __reg("d0") long widthMin, __reg("d1") long heightMin, __reg("d2") unsigned long widthMax, __reg("d3") unsigned long heightMax, __reg("a6") struct IntuitionBase *)="\tjsr\t-318(a6)";
#define WindowLimits(window, widthMin, heightMin, widthMax, heightMax) __WindowLimits((window), (widthMin), (heightMin), (widthMax), (heightMax), IntuitionBase)

struct Preferences * __SetPrefs(__reg("a0") struct Preferences * preferences, __reg("d0") long size, __reg("d1") long inform, __reg("a6") struct IntuitionBase *)="\tjsr\t-324(a6)";
#define SetPrefs(preferences, size, inform) __SetPrefs((preferences), (size), (inform), IntuitionBase)

LONG __IntuiTextLength(__reg("a0") struct IntuiText * iText, __reg("a6") struct IntuitionBase *)="\tjsr\t-330(a6)";
#define IntuiTextLength(iText) __IntuiTextLength((iText), IntuitionBase)

BOOL __WBenchToBack(__reg("a6") struct IntuitionBase *)="\tjsr\t-336(a6)";
#define WBenchToBack() __WBenchToBack(IntuitionBase)

BOOL __WBenchToFront(__reg("a6") struct IntuitionBase *)="\tjsr\t-342(a6)";
#define WBenchToFront() __WBenchToFront(IntuitionBase)

BOOL __AutoRequest(__reg("a0") struct Window * window, __reg("a1") struct IntuiText * body, __reg("a2") struct IntuiText * posText, __reg("a3") struct IntuiText * negText, __reg("d0") unsigned long pFlag, __reg("d1") unsigned long nFlag, __reg("d2") unsigned long width, __reg("d3") unsigned long height, __reg("a6") struct IntuitionBase *)="\tjsr\t-348(a6)";
#define AutoRequest(window, body, posText, negText, pFlag, nFlag, width, height) __AutoRequest((window), (body), (posText), (negText), (pFlag), (nFlag), (width), (height), IntuitionBase)

void __BeginRefresh(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-354(a6)";
#define BeginRefresh(window) __BeginRefresh((window), IntuitionBase)

struct Window * __BuildSysRequest(__reg("a0") struct Window * window, __reg("a1") struct IntuiText * body, __reg("a2") struct IntuiText * posText, __reg("a3") struct IntuiText * negText, __reg("d0") unsigned long flags, __reg("d1") unsigned long width, __reg("d2") unsigned long height, __reg("a6") struct IntuitionBase *)="\tjsr\t-360(a6)";
#define BuildSysRequest(window, body, posText, negText, flags, width, height) __BuildSysRequest((window), (body), (posText), (negText), (flags), (width), (height), IntuitionBase)

void __EndRefresh(__reg("a0") struct Window * window, __reg("d0") long complete, __reg("a6") struct IntuitionBase *)="\tjsr\t-366(a6)";
#define EndRefresh(window, complete) __EndRefresh((window), (complete), IntuitionBase)

void __FreeSysRequest(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-372(a6)";
#define FreeSysRequest(window) __FreeSysRequest((window), IntuitionBase)

LONG __MakeScreen(__reg("a0") struct Screen * screen, __reg("a6") struct IntuitionBase *)="\tjsr\t-378(a6)";
#define MakeScreen(screen) __MakeScreen((screen), IntuitionBase)

LONG __RemakeDisplay(__reg("a6") struct IntuitionBase *)="\tjsr\t-384(a6)";
#define RemakeDisplay() __RemakeDisplay(IntuitionBase)

LONG __RethinkDisplay(__reg("a6") struct IntuitionBase *)="\tjsr\t-390(a6)";
#define RethinkDisplay() __RethinkDisplay(IntuitionBase)

APTR __AllocRemember(__reg("a0") struct Remember ** rememberKey, __reg("d0") unsigned long size, __reg("d1") unsigned long flags, __reg("a6") struct IntuitionBase *)="\tjsr\t-396(a6)";
#define AllocRemember(rememberKey, size, flags) __AllocRemember((rememberKey), (size), (flags), IntuitionBase)

void __AlohaWorkbench(__reg("a0") void * wbport, __reg("a6") struct IntuitionBase *)="\tjsr\t-402(a6)";
#define AlohaWorkbench(wbport) __AlohaWorkbench((void *)(wbport), IntuitionBase)

void __FreeRemember(__reg("a0") struct Remember ** rememberKey, __reg("d0") long reallyForget, __reg("a6") struct IntuitionBase *)="\tjsr\t-408(a6)";
#define FreeRemember(rememberKey, reallyForget) __FreeRemember((rememberKey), (reallyForget), IntuitionBase)

ULONG __LockIBase(__reg("d0") unsigned long dontknow, __reg("a6") struct IntuitionBase *)="\tjsr\t-414(a6)";
#define LockIBase(dontknow) __LockIBase((dontknow), IntuitionBase)

void __UnlockIBase(__reg("a0") void * ibLock, __reg("a6") struct IntuitionBase *)="\tjsr\t-420(a6)";
#define UnlockIBase(ibLock) __UnlockIBase((void *)(ibLock), IntuitionBase)

LONG __GetScreenData(__reg("a0") APTR buffer, __reg("d0") unsigned long size, __reg("d1") unsigned long type, __reg("a1") struct Screen * screen, __reg("a6") struct IntuitionBase *)="\tjsr\t-426(a6)";
#define GetScreenData(buffer, size, type, screen) __GetScreenData((buffer), (size), (type), (screen), IntuitionBase)

void __RefreshGList(__reg("a0") struct Gadget * gadgets, __reg("a1") struct Window * window, __reg("a2") struct Requester * requester, __reg("d0") long numGad, __reg("a6") struct IntuitionBase *)="\tjsr\t-432(a6)";
#define RefreshGList(gadgets, window, requester, numGad) __RefreshGList((gadgets), (window), (requester), (numGad), IntuitionBase)

UWORD __AddGList(__reg("a0") struct Window * window, __reg("a1") struct Gadget * gadget, __reg("d0") unsigned long position, __reg("d1") long numGad, __reg("a2") struct Requester * requester, __reg("a6") struct IntuitionBase *)="\tjsr\t-438(a6)";
#define AddGList(window, gadget, position, numGad, requester) __AddGList((window), (gadget), (position), (numGad), (requester), IntuitionBase)

UWORD __RemoveGList(__reg("a0") struct Window * remPtr, __reg("a1") struct Gadget * gadget, __reg("d0") long numGad, __reg("a6") struct IntuitionBase *)="\tjsr\t-444(a6)";
#define RemoveGList(remPtr, gadget, numGad) __RemoveGList((remPtr), (gadget), (numGad), IntuitionBase)

void __ActivateWindow(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-450(a6)";
#define ActivateWindow(window) __ActivateWindow((window), IntuitionBase)

void __RefreshWindowFrame(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-456(a6)";
#define RefreshWindowFrame(window) __RefreshWindowFrame((window), IntuitionBase)

BOOL __ActivateGadget(__reg("a0") struct Gadget * gadgets, __reg("a1") struct Window * window, __reg("a2") struct Requester * requester, __reg("a6") struct IntuitionBase *)="\tjsr\t-462(a6)";
#define ActivateGadget(gadgets, window, requester) __ActivateGadget((gadgets), (window), (requester), IntuitionBase)

void __NewModifyProp(__reg("a0") struct Gadget * gadget, __reg("a1") struct Window * window, __reg("a2") struct Requester * requester, __reg("d0") unsigned long flags, __reg("d1") unsigned long horizPot, __reg("d2") unsigned long vertPot, __reg("d3") unsigned long horizBody, __reg("d4") unsigned long vertBody, __reg("d5") long numGad, __reg("a6") struct IntuitionBase *)="\tjsr\t-468(a6)";
#define NewModifyProp(gadget, window, requester, flags, horizPot, vertPot, horizBody, vertBody, numGad) __NewModifyProp((gadget), (window), (requester), (flags), (horizPot), (vertPot), (horizBody), (vertBody), (numGad), IntuitionBase)

LONG __QueryOverscan(__reg("a0") void * displayID, __reg("a1") struct Rectangle * rect, __reg("d0") long oScanType, __reg("a6") struct IntuitionBase *)="\tjsr\t-474(a6)";
#define QueryOverscan(displayID, rect, oScanType) __QueryOverscan((void *)(displayID), (rect), (oScanType), IntuitionBase)

void __MoveWindowInFrontOf(__reg("a0") struct Window * window, __reg("a1") struct Window * behindWindow, __reg("a6") struct IntuitionBase *)="\tjsr\t-480(a6)";
#define MoveWindowInFrontOf(window, behindWindow) __MoveWindowInFrontOf((window), (behindWindow), IntuitionBase)

void __ChangeWindowBox(__reg("a0") struct Window * window, __reg("d0") long left, __reg("d1") long top, __reg("d2") long width, __reg("d3") long height, __reg("a6") struct IntuitionBase *)="\tjsr\t-486(a6)";
#define ChangeWindowBox(window, left, top, width, height) __ChangeWindowBox((window), (left), (top), (width), (height), IntuitionBase)

struct Hook * __SetEditHook(__reg("a0") struct Hook * hook, __reg("a6") struct IntuitionBase *)="\tjsr\t-492(a6)";
#define SetEditHook(hook) __SetEditHook((hook), IntuitionBase)

LONG __SetMouseQueue(__reg("a0") struct Window * window, __reg("d0") unsigned long queueLength, __reg("a6") struct IntuitionBase *)="\tjsr\t-498(a6)";
#define SetMouseQueue(window, queueLength) __SetMouseQueue((window), (queueLength), IntuitionBase)

void __ZipWindow(__reg("a0") struct Window * window, __reg("a6") struct IntuitionBase *)="\tjsr\t-504(a6)";
#define ZipWindow(window) __ZipWindow((window), IntuitionBase)

struct Screen * __LockPubScreen(__reg("a0") UBYTE * name, __reg("a6") struct IntuitionBase *)="\tjsr\t-510(a6)";
#define LockPubScreen(name) __LockPubScreen((name), IntuitionBase)

void __UnlockPubScreen(__reg("a0") UBYTE * name, __reg("a1") struct Screen * screen, __reg("a6") struct IntuitionBase *)="\tjsr\t-516(a6)";
#define UnlockPubScreen(name, screen) __UnlockPubScreen((name), (screen), IntuitionBase)

struct List * __LockPubScreenList(__reg("a6") struct IntuitionBase *)="\tjsr\t-522(a6)";
#define LockPubScreenList() __LockPubScreenList(IntuitionBase)

void __UnlockPubScreenList(__reg("a6") struct IntuitionBase *)="\tjsr\t-528(a6)";
#define UnlockPubScreenList() __UnlockPubScreenList(IntuitionBase)

UBYTE * __NextPubScreen(__reg("a0") struct Screen * screen, __reg("a1") UBYTE * namebuf, __reg("a6") struct IntuitionBase *)="\tjsr\t-534(a6)";
#define NextPubScreen(screen, namebuf) __NextPubScreen((screen), (namebuf), IntuitionBase)

void __SetDefaultPubScreen(__reg("a0") UBYTE * name, __reg("a6") struct IntuitionBase *)="\tjsr\t-540(a6)";
#define SetDefaultPubScreen(name) __SetDefaultPubScreen((name), IntuitionBase)

UWORD __SetPubScreenModes(__reg("d0") unsigned long modes, __reg("a6") struct IntuitionBase *)="\tjsr\t-546(a6)";
#define SetPubScreenModes(modes) __SetPubScreenModes((modes), IntuitionBase)

UWORD __PubScreenStatus(__reg("a0") struct Screen * screen, __reg("d0") unsigned long statusFlags, __reg("a6") struct IntuitionBase *)="\tjsr\t-552(a6)";
#define PubScreenStatus(screen, statusFlags) __PubScreenStatus((screen), (statusFlags), IntuitionBase)

struct RastPort * __ObtainGIRPort(__reg("a0") struct GadgetInfo * gInfo, __reg("a6") struct IntuitionBase *)="\tjsr\t-558(a6)";
#define ObtainGIRPort(gInfo) __ObtainGIRPort((gInfo), IntuitionBase)

void __ReleaseGIRPort(__reg("a0") struct RastPort * rp, __reg("a6") struct IntuitionBase *)="\tjsr\t-564(a6)";
#define ReleaseGIRPort(rp) __ReleaseGIRPort((rp), IntuitionBase)

void __GadgetMouse(__reg("a0") struct Gadget * gadget, __reg("a1") struct GadgetInfo * gInfo, __reg("a2") WORD * mousePoint, __reg("a6") struct IntuitionBase *)="\tjsr\t-570(a6)";
#define GadgetMouse(gadget, gInfo, mousePoint) __GadgetMouse((gadget), (gInfo), (mousePoint), IntuitionBase)

void __GetDefaultPubScreen(__reg("a0") UBYTE * nameBuffer, __reg("a6") struct IntuitionBase *)="\tjsr\t-582(a6)";
#define GetDefaultPubScreen(nameBuffer) __GetDefaultPubScreen((nameBuffer), IntuitionBase)

LONG __EasyRequestArgs(__reg("a0") struct Window * window, __reg("a1") struct EasyStruct * easyStruct, __reg("a2") ULONG * idcmpPtr, __reg("a3") APTR args, __reg("a6") struct IntuitionBase *)="\tjsr\t-588(a6)";
#define EasyRequestArgs(window, easyStruct, idcmpPtr, args) __EasyRequestArgs((window), (easyStruct), (idcmpPtr), (args), IntuitionBase)

struct Window * __BuildEasyRequestArgs(__reg("a0") struct Window * window, __reg("a1") struct EasyStruct * easyStruct, __reg("d0") unsigned long idcmp, __reg("a3") APTR args, __reg("a6") struct IntuitionBase *)="\tjsr\t-594(a6)";
#define BuildEasyRequestArgs(window, easyStruct, idcmp, args) __BuildEasyRequestArgs((window), (easyStruct), (idcmp), (args), IntuitionBase)

LONG __SysReqHandler(__reg("a0") struct Window * window, __reg("a1") ULONG * idcmpPtr, __reg("d0") long waitInput, __reg("a6") struct IntuitionBase *)="\tjsr\t-600(a6)";
#define SysReqHandler(window, idcmpPtr, waitInput) __SysReqHandler((window), (idcmpPtr), (waitInput), IntuitionBase)

struct Window * __OpenWindowTagList(__reg("a0") struct NewWindow * newWindow, __reg("a1") struct TagItem * tagList, __reg("a6") struct IntuitionBase *)="\tjsr\t-606(a6)";
#define OpenWindowTagList(newWindow, tagList) __OpenWindowTagList((newWindow), (tagList), IntuitionBase)

struct Screen * __OpenScreenTagList(__reg("a0") struct NewScreen * newScreen, __reg("a1") struct TagItem * tagList, __reg("a6") struct IntuitionBase *)="\tjsr\t-612(a6)";
#define OpenScreenTagList(newScreen, tagList) __OpenScreenTagList((newScreen), (tagList), IntuitionBase)

void __DrawImageState(__reg("a0") struct RastPort * rp, __reg("a1") struct Image * image, __reg("d0") long leftOffset, __reg("d1") long topOffset, __reg("d2") unsigned long state, __reg("a2") struct DrawInfo * drawInfo, __reg("a6") struct IntuitionBase *)="\tjsr\t-618(a6)";
#define DrawImageState(rp, image, leftOffset, topOffset, state, drawInfo) __DrawImageState((rp), (image), (leftOffset), (topOffset), (state), (drawInfo), IntuitionBase)

BOOL __PointInImage(__reg("d0") unsigned long point, __reg("a0") struct Image * image, __reg("a6") struct IntuitionBase *)="\tjsr\t-624(a6)";
#define PointInImage(point, image) __PointInImage((point), (image), IntuitionBase)

void __EraseImage(__reg("a0") struct RastPort * rp, __reg("a1") struct Image * image, __reg("d0") long leftOffset, __reg("d1") long topOffset, __reg("a6") struct IntuitionBase *)="\tjsr\t-630(a6)";
#define EraseImage(rp, image, leftOffset, topOffset) __EraseImage((rp), (image), (leftOffset), (topOffset), IntuitionBase)

APTR __NewObjectA(__reg("a0") struct IClass * classPtr, __reg("a1") UBYTE * classID, __reg("a2") struct TagItem * tagList, __reg("a6") struct IntuitionBase *)="\tjsr\t-636(a6)";
#define NewObjectA(classPtr, classID, tagList) __NewObjectA((classPtr), (classID), (tagList), IntuitionBase)

void __DisposeObject(__reg("a0") APTR object, __reg("a6") struct IntuitionBase *)="\tjsr\t-642(a6)";
#define DisposeObject(object) __DisposeObject((object), IntuitionBase)

ULONG __SetAttrsA(__reg("a0") APTR object, __reg("a1") struct TagItem * tagList, __reg("a6") struct IntuitionBase *)="\tjsr\t-648(a6)";
#define SetAttrsA(object, tagList) __SetAttrsA((object), (tagList), IntuitionBase)

ULONG __GetAttr(__reg("d0") unsigned long attrID, __reg("a0") APTR object, __reg("a1") ULONG * storagePtr, __reg("a6") struct IntuitionBase *)="\tjsr\t-654(a6)";
#define GetAttr(attrID, object, storagePtr) __GetAttr((attrID), (object), (storagePtr), IntuitionBase)

ULONG __SetGadgetAttrsA(__reg("a0") struct Gadget * gadget, __reg("a1") struct Window * window, __reg("a2") struct Requester * requester, __reg("a3") struct TagItem * tagList, __reg("a6") struct IntuitionBase *)="\tjsr\t-660(a6)";
#define SetGadgetAttrsA(gadget, window, requester, tagList) __SetGadgetAttrsA((gadget), (window), (requester), (tagList), IntuitionBase)

APTR __NextObject(__reg("a0") APTR objectPtrPtr, __reg("a6") struct IntuitionBase *)="\tjsr\t-666(a6)";
#define NextObject(objectPtrPtr) __NextObject((objectPtrPtr), IntuitionBase)

struct IClass * __MakeClass(__reg("a0") UBYTE * classID, __reg("a1") UBYTE * superClassID, __reg("a2") struct IClass * superClassPtr, __reg("d0") unsigned long instanceSize, __reg("d1") unsigned long flags, __reg("a6") struct IntuitionBase *)="\tjsr\t-678(a6)";
#define MakeClass(classID, superClassID, superClassPtr, instanceSize, flags) __MakeClass((classID), (superClassID), (superClassPtr), (instanceSize), (flags), IntuitionBase)

void __AddClass(__reg("a0") struct IClass * classPtr, __reg("a6") struct IntuitionBase *)="\tjsr\t-684(a6)";
#define AddClass(classPtr) __AddClass((classPtr), IntuitionBase)

struct DrawInfo * __GetScreenDrawInfo(__reg("a0") struct Screen * screen, __reg("a6") struct IntuitionBase *)="\tjsr\t-690(a6)";
#define GetScreenDrawInfo(screen) __GetScreenDrawInfo((screen), IntuitionBase)

void __FreeScreenDrawInfo(__reg("a0") struct Screen * screen, __reg("a1") struct DrawInfo * drawInfo, __reg("a6") struct IntuitionBase *)="\tjsr\t-696(a6)";
#define FreeScreenDrawInfo(screen, drawInfo) __FreeScreenDrawInfo((screen), (drawInfo), IntuitionBase)

BOOL __ResetMenuStrip(__reg("a0") struct Window * window, __reg("a1") struct Menu * menu, __reg("a6") struct IntuitionBase *)="\tjsr\t-702(a6)";
#define ResetMenuStrip(window, menu) __ResetMenuStrip((window), (menu), IntuitionBase)

void __RemoveClass(__reg("a0") struct IClass * classPtr, __reg("a6") struct IntuitionBase *)="\tjsr\t-708(a6)";
#define RemoveClass(classPtr) __RemoveClass((classPtr), IntuitionBase)

BOOL __FreeClass(__reg("a0") struct IClass * classPtr, __reg("a6") struct IntuitionBase *)="\tjsr\t-714(a6)";
#define FreeClass(classPtr) __FreeClass((classPtr), IntuitionBase)

struct ScreenBuffer * __AllocScreenBuffer(__reg("a0") struct Screen * sc, __reg("a1") struct BitMap * bm, __reg("d0") unsigned long flags, __reg("a6") struct IntuitionBase *)="\tjsr\t-768(a6)";
#define AllocScreenBuffer(sc, bm, flags) __AllocScreenBuffer((sc), (bm), (flags), IntuitionBase)

void __FreeScreenBuffer(__reg("a0") struct Screen * sc, __reg("a1") struct ScreenBuffer * sb, __reg("a6") struct IntuitionBase *)="\tjsr\t-774(a6)";
#define FreeScreenBuffer(sc, sb) __FreeScreenBuffer((sc), (sb), IntuitionBase)

ULONG __ChangeScreenBuffer(__reg("a0") struct Screen * sc, __reg("a1") struct ScreenBuffer * sb, __reg("a6") struct IntuitionBase *)="\tjsr\t-780(a6)";
#define ChangeScreenBuffer(sc, sb) __ChangeScreenBuffer((sc), (sb), IntuitionBase)

void __ScreenDepth(__reg("a0") struct Screen * screen, __reg("d0") unsigned long flags, __reg("a1") APTR reserved, __reg("a6") struct IntuitionBase *)="\tjsr\t-786(a6)";
#define ScreenDepth(screen, flags, reserved) __ScreenDepth((screen), (flags), (reserved), IntuitionBase)

void __ScreenPosition(__reg("a0") struct Screen * screen, __reg("d0") unsigned long flags, __reg("d1") long x1, __reg("d2") long y1, __reg("d3") long x2, __reg("d4") long y2, __reg("a6") struct IntuitionBase *)="\tjsr\t-792(a6)";
#define ScreenPosition(screen, flags, x1, y1, x2, y2) __ScreenPosition((screen), (flags), (x1), (y1), (x2), (y2), IntuitionBase)

void __ScrollWindowRaster(__reg("a1") struct Window * win, __reg("d0") long dx, __reg("d1") long dy, __reg("d2") long xMin, __reg("d3") long yMin, __reg("d4") long xMax, __reg("d5") long yMax, __reg("a6") struct IntuitionBase *)="\tjsr\t-798(a6)";
#define ScrollWindowRaster(win, dx, dy, xMin, yMin, xMax, yMax) __ScrollWindowRaster((win), (dx), (dy), (xMin), (yMin), (xMax), (yMax), IntuitionBase)

void __LendMenus(__reg("a0") struct Window * fromwindow, __reg("a1") struct Window * towindow, __reg("a6") struct IntuitionBase *)="\tjsr\t-804(a6)";
#define LendMenus(fromwindow, towindow) __LendMenus((fromwindow), (towindow), IntuitionBase)

ULONG __DoGadgetMethodA(__reg("a0") struct Gadget * gad, __reg("a1") struct Window * win, __reg("a2") struct Requester * req, __reg("a3") Msg message, __reg("a6") struct IntuitionBase *)="\tjsr\t-810(a6)";
#define DoGadgetMethodA(gad, win, req, message) __DoGadgetMethodA((gad), (win), (req), (message), IntuitionBase)

void __SetWindowPointerA(__reg("a0") struct Window * win, __reg("a1") struct TagItem * taglist, __reg("a6") struct IntuitionBase *)="\tjsr\t-816(a6)";
#define SetWindowPointerA(win, taglist) __SetWindowPointerA((win), (taglist), IntuitionBase)

BOOL __TimedDisplayAlert(__reg("d0") unsigned long alertNumber, __reg("a0") UBYTE * string, __reg("d1") unsigned long height, __reg("a1") void * time, __reg("a6") struct IntuitionBase *)="\tjsr\t-822(a6)";
#define TimedDisplayAlert(alertNumber, string, height, time) __TimedDisplayAlert((alertNumber), (string), (height), (void *)(time), IntuitionBase)

void __HelpControl(__reg("a0") struct Window * win, __reg("d0") unsigned long flags, __reg("a6") struct IntuitionBase *)="\tjsr\t-828(a6)";
#define HelpControl(win, flags) __HelpControl((win), (flags), IntuitionBase)

#endif /*  _VBCCINLINE_INTUITION_H  */
