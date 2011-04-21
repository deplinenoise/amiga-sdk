#ifndef _VBCCINLINE_CHOOSER_H
#define _VBCCINLINE_CHOOSER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

Class * __CHOOSER_GetClass(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define CHOOSER_GetClass() __CHOOSER_GetClass(ChooserBase)

struct Node * __AllocChooserNodeA(__reg("a0") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define AllocChooserNodeA(tags) __AllocChooserNodeA((tags), ChooserBase)

VOID __FreeChooserNode(__reg("a0") struct Node * node, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define FreeChooserNode(node) __FreeChooserNode((node), ChooserBase)

VOID __SetChooserNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define SetChooserNodeAttrsA(node, tags) __SetChooserNodeAttrsA((node), (tags), ChooserBase)

VOID __GetChooserNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define GetChooserNodeAttrsA(node, tags) __GetChooserNodeAttrsA((node), (tags), ChooserBase)

ULONG __ShowChooser(__reg("a0") Object * obj, __reg("a1") struct Window * win, __reg("d0") ULONG xpos, __reg("d1") ULONG ypos, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define ShowChooser(obj, win, xpos, ypos) __ShowChooser((obj), (win), (xpos), (ypos), ChooserBase)

VOID __HideChooser(__reg("a0") Object * obj, __reg("a1") struct Window * win, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define HideChooser(obj, win) __HideChooser((obj), (win), ChooserBase)

#endif /*  _VBCCINLINE_CHOOSER_H  */
