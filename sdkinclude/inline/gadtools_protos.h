#ifndef _VBCCINLINE_GADTOOLS_H
#define _VBCCINLINE_GADTOOLS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct Gadget * __CreateGadgetA(__reg("d0") unsigned long kind, __reg("a0") struct Gadget * gad, __reg("a1") struct NewGadget * ng, __reg("a2") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define CreateGadgetA(kind, gad, ng, taglist) __CreateGadgetA((kind), (gad), (ng), (taglist), GadToolsBase)

void __FreeGadgets(__reg("a0") struct Gadget * gad, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define FreeGadgets(gad) __FreeGadgets((gad), GadToolsBase)

void __GT_SetGadgetAttrsA(__reg("a0") struct Gadget * gad, __reg("a1") struct Window * win, __reg("a2") struct Requester * req, __reg("a3") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define GT_SetGadgetAttrsA(gad, win, req, taglist) __GT_SetGadgetAttrsA((gad), (win), (req), (taglist), GadToolsBase)

struct Menu * __CreateMenusA(__reg("a0") struct NewMenu * newmenu, __reg("a1") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define CreateMenusA(newmenu, taglist) __CreateMenusA((newmenu), (taglist), GadToolsBase)

void __FreeMenus(__reg("a0") struct Menu * menu, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define FreeMenus(menu) __FreeMenus((menu), GadToolsBase)

BOOL __LayoutMenuItemsA(__reg("a0") struct MenuItem * firstitem, __reg("a1") APTR vi, __reg("a2") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define LayoutMenuItemsA(firstitem, vi, taglist) __LayoutMenuItemsA((firstitem), (vi), (taglist), GadToolsBase)

BOOL __LayoutMenusA(__reg("a0") struct Menu * firstmenu, __reg("a1") APTR vi, __reg("a2") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define LayoutMenusA(firstmenu, vi, taglist) __LayoutMenusA((firstmenu), (vi), (taglist), GadToolsBase)

struct IntuiMessage * __GT_GetIMsg(__reg("a0") struct MsgPort * iport, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define GT_GetIMsg(iport) __GT_GetIMsg((iport), GadToolsBase)

void __GT_ReplyIMsg(__reg("a1") struct IntuiMessage * imsg, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define GT_ReplyIMsg(imsg) __GT_ReplyIMsg((imsg), GadToolsBase)

void __GT_RefreshWindow(__reg("a0") struct Window * win, __reg("a1") struct Requester * req, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define GT_RefreshWindow(win, req) __GT_RefreshWindow((win), (req), GadToolsBase)

void __GT_BeginRefresh(__reg("a0") struct Window * win, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define GT_BeginRefresh(win) __GT_BeginRefresh((win), GadToolsBase)

void __GT_EndRefresh(__reg("a0") struct Window * win, __reg("d0") long complete, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define GT_EndRefresh(win, complete) __GT_EndRefresh((win), (complete), GadToolsBase)

struct IntuiMessage * __GT_FilterIMsg(__reg("a1") struct IntuiMessage * imsg, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define GT_FilterIMsg(imsg) __GT_FilterIMsg((imsg), GadToolsBase)

struct IntuiMessage * __GT_PostFilterIMsg(__reg("a1") struct IntuiMessage * imsg, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define GT_PostFilterIMsg(imsg) __GT_PostFilterIMsg((imsg), GadToolsBase)

struct Gadget * __CreateContext(__reg("a0") struct Gadget ** glistptr, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define CreateContext(glistptr) __CreateContext((glistptr), GadToolsBase)

void __DrawBevelBoxA(__reg("a0") struct RastPort * rport, __reg("d0") long left, __reg("d1") long top, __reg("d2") long width, __reg("d3") long height, __reg("a1") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define DrawBevelBoxA(rport, left, top, width, height, taglist) __DrawBevelBoxA((rport), (left), (top), (width), (height), (taglist), GadToolsBase)

APTR __GetVisualInfoA(__reg("a0") struct Screen * screen, __reg("a1") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define GetVisualInfoA(screen, taglist) __GetVisualInfoA((screen), (taglist), GadToolsBase)

void __FreeVisualInfo(__reg("a0") APTR vi, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define FreeVisualInfo(vi) __FreeVisualInfo((vi), GadToolsBase)

LONG __GT_GetGadgetAttrsA(__reg("a0") struct Gadget * gad, __reg("a1") struct Window * win, __reg("a2") struct Requester * req, __reg("a3") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define GT_GetGadgetAttrsA(gad, win, req, taglist) __GT_GetGadgetAttrsA((gad), (win), (req), (taglist), GadToolsBase)

#endif /*  _VBCCINLINE_GADTOOLS_H  */
