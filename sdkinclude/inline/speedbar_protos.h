#ifndef _VBCCINLINE_SPEEDBAR_H
#define _VBCCINLINE_SPEEDBAR_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

Class * __SPEEDBAR_GetClass(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define SPEEDBAR_GetClass() __SPEEDBAR_GetClass(SpeedBarBase)

struct Node * __AllocSpeedButtonNodeA(__reg("d0") UWORD number, __reg("a0") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define AllocSpeedButtonNodeA(number, tags) __AllocSpeedButtonNodeA((number), (tags), SpeedBarBase)

VOID __FreeSpeedButtonNode(__reg("a0") struct Node * node, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define FreeSpeedButtonNode(node) __FreeSpeedButtonNode((node), SpeedBarBase)

VOID __SetSpeedButtonNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define SetSpeedButtonNodeAttrsA(node, tags) __SetSpeedButtonNodeAttrsA((node), (tags), SpeedBarBase)

VOID __GetSpeedButtonNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define GetSpeedButtonNodeAttrsA(node, tags) __GetSpeedButtonNodeAttrsA((node), (tags), SpeedBarBase)

#endif /*  _VBCCINLINE_SPEEDBAR_H  */
