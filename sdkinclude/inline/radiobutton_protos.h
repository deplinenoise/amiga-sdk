#ifndef _VBCCINLINE_RADIOBUTTON_H
#define _VBCCINLINE_RADIOBUTTON_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

Class * __RADIOBUTTON_GetClass(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define RADIOBUTTON_GetClass() __RADIOBUTTON_GetClass(RadioButtonBase)

struct Node * __AllocRadioButtonNodeA(__reg("d0") UWORD columns, __reg("a0") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define AllocRadioButtonNodeA(columns, tags) __AllocRadioButtonNodeA((columns), (tags), RadioButtonBase)

VOID __FreeRadioButtonNode(__reg("a0") struct Node * node, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define FreeRadioButtonNode(node) __FreeRadioButtonNode((node), RadioButtonBase)

VOID __SetRadioButtonNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define SetRadioButtonNodeAttrsA(node, tags) __SetRadioButtonNodeAttrsA((node), (tags), RadioButtonBase)

VOID __GetRadioButtonNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define GetRadioButtonNodeAttrsA(node, tags) __GetRadioButtonNodeAttrsA((node), (tags), RadioButtonBase)

#endif /*  _VBCCINLINE_RADIOBUTTON_H  */
