#ifndef _VBCCINLINE_POPCYCLE_H
#define _VBCCINLINE_POPCYCLE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

Class * __POPCYCLE_GetClass(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define POPCYCLE_GetClass() __POPCYCLE_GetClass(PopCycleBase)

struct Node * __AllocPopCycleNodeA(__reg("a0") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define AllocPopCycleNodeA(tags) __AllocPopCycleNodeA((tags), PopCycleBase)

VOID __FreePopCycleNode(__reg("a0") struct Node * node, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define FreePopCycleNode(node) __FreePopCycleNode((node), PopCycleBase)

VOID __SetPopCycleNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define SetPopCycleNodeAttrsA(node, tags) __SetPopCycleNodeAttrsA((node), (tags), PopCycleBase)

VOID __GetPopCycleNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define GetPopCycleNodeAttrsA(node, tags) __GetPopCycleNodeAttrsA((node), (tags), PopCycleBase)

#endif /*  _VBCCINLINE_POPCYCLE_H  */
