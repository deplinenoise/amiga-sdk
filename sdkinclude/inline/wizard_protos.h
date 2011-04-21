#ifndef _VBCCINLINE_WIZARD_H
#define _VBCCINLINE_WIZARD_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

APTR __WZ_OpenSurfaceA(__reg("a0") STRPTR name, __reg("a1") APTR memaddr, __reg("a2") struct TagItem * tagptr, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define WZ_OpenSurfaceA(name, memaddr, tagptr) __WZ_OpenSurfaceA((name), (memaddr), (tagptr), WizardBase)

void __WZ_CloseSurface(__reg("a0") APTR surface, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define WZ_CloseSurface(surface) __WZ_CloseSurface((surface), WizardBase)

struct WizardWindowHandle * __WZ_AllocWindowHandleA(__reg("d0") struct Screen * screen, __reg("d1") ULONG user_sizeof, __reg("a0") APTR surface, __reg("a1") struct TagItem * tagptr, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define WZ_AllocWindowHandleA(screen, user_sizeof, surface, tagptr) __WZ_AllocWindowHandleA((screen), (user_sizeof), (surface), (tagptr), WizardBase)

struct NewWindow * __WZ_CreateWindowObjA(__reg("a0") struct WizardWindowHandle * winhandle, __reg("d0") ULONG id, __reg("a1") struct TagItem * tagptr, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define WZ_CreateWindowObjA(winhandle, id, tagptr) __WZ_CreateWindowObjA((winhandle), (id), (tagptr), WizardBase)

struct Window * __WZ_OpenWindowA(__reg("a0") struct WizardWindowHandle * winhandle, __reg("a1") struct NewWindow * newwin, __reg("a2") struct TagItem * tagptr, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define WZ_OpenWindowA(winhandle, newwin, tagptr) __WZ_OpenWindowA((winhandle), (newwin), (tagptr), WizardBase)

void __WZ_CloseWindow(__reg("a0") struct WizardWindowHandle * winhandle, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define WZ_CloseWindow(winhandle) __WZ_CloseWindow((winhandle), WizardBase)

void __WZ_FreeWindowHandle(__reg("a0") struct WizardWindowHandle * winhandle, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define WZ_FreeWindowHandle(winhandle) __WZ_FreeWindowHandle((winhandle), WizardBase)

void __WZ_LockWindow(__reg("a0") struct WizardWindowHandle * winhandle, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define WZ_LockWindow(winhandle) __WZ_LockWindow((winhandle), WizardBase)

ULONG __WZ_UnlockWindow(__reg("a0") struct WizardWindowHandle * winhandle, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define WZ_UnlockWindow(winhandle) __WZ_UnlockWindow((winhandle), WizardBase)

void __WZ_LockWindows(__reg("a0") APTR surface, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define WZ_LockWindows(surface) __WZ_LockWindows((surface), WizardBase)

void __WZ_UnlockWindows(__reg("a0") APTR surface, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define WZ_UnlockWindows(surface) __WZ_UnlockWindows((surface), WizardBase)

STRPTR __WZ_GadgetHelp(__reg("a0") struct WizardWindowHandle * windowhandle, __reg("a1") APTR sfgadget, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define WZ_GadgetHelp(windowhandle, sfgadget) __WZ_GadgetHelp((windowhandle), (sfgadget), WizardBase)

STRPTR __WZ_GadgetConfig(__reg("a0") struct WizardWindowHandle * windowhandle, __reg("a1") struct Gadget * sfgadget, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define WZ_GadgetConfig(windowhandle, sfgadget) __WZ_GadgetConfig((windowhandle), (sfgadget), WizardBase)

STRPTR __WZ_MenuHelp(__reg("a0") struct WizardWindowHandle * windowhandle, __reg("d0") ULONG menucode, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define WZ_MenuHelp(windowhandle, menucode) __WZ_MenuHelp((windowhandle), (menucode), WizardBase)

STRPTR __WZ_MenuConfig(__reg("a0") struct WizardWindowHandle * windowhandle, __reg("d0") ULONG menucode, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define WZ_MenuConfig(windowhandle, menucode) __WZ_MenuConfig((windowhandle), (menucode), WizardBase)

struct EasyStruct * __WZ_InitEasyStruct(__reg("a0") APTR surface, __reg("a1") struct EasyStruct * easystruct, __reg("d0") ULONG id, __reg("d1") ULONG size, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define WZ_InitEasyStruct(surface, easystruct, id, size) __WZ_InitEasyStruct((surface), (easystruct), (id), (size), WizardBase)

BOOL __WZ_SnapShotA(__reg("a0") APTR surface, __reg("a1") struct TagItem * tagptr, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define WZ_SnapShotA(surface, tagptr) __WZ_SnapShotA((surface), (tagptr), WizardBase)

BOOL __WZ_DrawVImageA(__reg("a0") struct WizardVImage * vimage, __reg("d0") WORD x, __reg("d1") WORD y, __reg("d2") WORD w, __reg("d3") WORD h, __reg("d4") WORD type, __reg("d5") struct RastPort * rp, __reg("d6") struct DrawInfo * drinfo, __reg("a1") struct TagItem * tagptr, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define WZ_DrawVImageA(vimage, x, y, w, h, type, rp, drinfo, tagptr) __WZ_DrawVImageA((vimage), (x), (y), (w), (h), (type), (rp), (drinfo), (tagptr), WizardBase)

LONG __WZ_EasyRequestArgs(__reg("a0") APTR surface, __reg("a1") struct Window * window, __reg("d0") ULONG id, __reg("a2") void * args, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define WZ_EasyRequestArgs(surface, window, id, args) __WZ_EasyRequestArgs((surface), (window), (id), (args), WizardBase)

struct WizardNode * __WZ_GetNode(__reg("a0") struct MinList * minlist, __reg("d0") ULONG nr, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define WZ_GetNode(minlist, nr) __WZ_GetNode((minlist), (nr), WizardBase)

ULONG __WZ_ListCount(__reg("a0") struct MinList * list, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define WZ_ListCount(list) __WZ_ListCount((list), WizardBase)

struct Gadget * __WZ_NewObjectA(__reg("a1") APTR surface, __reg("d0") ULONG Class d0arg, __reg("a0") struct TagItem * tagptr, __reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define WZ_NewObjectA(surface, d0arg, tagptr) __WZ_NewObjectA((surface), (d0arg), (tagptr), WizardBase)

BOOL __WZ_GadgetHelpMsg(__reg("a0") struct WizardWindowHandle * winhandle, __reg("a1") struct WizardWindowHandle ** winhaddress, __reg("a2") APTR * iaddress, __reg("d0") WORD MouseX, __reg("d1") WORD MouseY, __reg("d2") UWORD flags, __reg("a6") struct Library *)="\tjsr\t-168(a6)";
#define WZ_GadgetHelpMsg(winhandle, winhaddress, iaddress, MouseX, MouseY, flags) __WZ_GadgetHelpMsg((winhandle), (winhaddress), (iaddress), (MouseX), (MouseY), (flags), WizardBase)

BOOL __WZ_ObjectID(__reg("a0") APTR Surface, __reg("a2") ULONG * id, __reg("a1") STRPTR Objectname, __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define WZ_ObjectID(Surface, id, Objectname) __WZ_ObjectID((Surface), (id), (Objectname), WizardBase)

void __WZ_InitNodeA(__reg("a0") struct WizardNode * wizardnode, __reg("d0") ULONG entrys, __reg("a1") struct TagItem * tagptr, __reg("a6") struct Library *)="\tjsr\t-180(a6)";
#define WZ_InitNodeA(wizardnode, entrys, tagptr) __WZ_InitNodeA((wizardnode), (entrys), (tagptr), WizardBase)

void __WZ_InitNodeEntryA(__reg("a0") struct WizardNode * wizardnode, __reg("d0") ULONG entry, __reg("a1") struct TagItem * tagptr, __reg("a6") struct Library *)="\tjsr\t-186(a6)";
#define WZ_InitNodeEntryA(wizardnode, entry, tagptr) __WZ_InitNodeEntryA((wizardnode), (entry), (tagptr), WizardBase)

struct BitMap * __WZ_CreateImageBitMap(__reg("d0") UWORD TransPen, __reg("a0") struct DrawInfo * DrInfo, __reg("a1") struct WizardNewImage * newimage, __reg("a2") struct Screen * screen, __reg("a3") UBYTE * reg, __reg("a6") struct Library *)="\tjsr\t-192(a6)";
#define WZ_CreateImageBitMap(TransPen, DrInfo, newimage, screen, reg) __WZ_CreateImageBitMap((TransPen), (DrInfo), (newimage), (screen), (reg), WizardBase)

void __WZ_DeleteImageBitMap(__reg("a0") struct BitMap * bm, __reg("a1") struct WizardNewImage * newimage, __reg("a2") struct Screen * screen, __reg("a3") UBYTE * reg, __reg("a6") struct Library *)="\tjsr\t-198(a6)";
#define WZ_DeleteImageBitMap(bm, newimage, screen, reg) __WZ_DeleteImageBitMap((bm), (newimage), (screen), (reg), WizardBase)

APTR __WZ_GetDataAddress(__reg("a0") APTR surface, __reg("d0") ULONG Type, __reg("d1") ULONG ID, __reg("a6") struct Library *)="\tjsr\t-204(a6)";
#define WZ_GetDataAddress(surface, Type, ID) __WZ_GetDataAddress((surface), (Type), (ID), WizardBase)

#endif /*  _VBCCINLINE_WIZARD_H  */
