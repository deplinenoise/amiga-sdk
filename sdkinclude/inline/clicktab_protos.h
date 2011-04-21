#ifndef _VBCCINLINE_CLICKTAB_H
#define _VBCCINLINE_CLICKTAB_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

Class * __CLICKTAB_GetClass(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define CLICKTAB_GetClass() __CLICKTAB_GetClass(ClickTabBase)

struct Node * __AllocClickTabNodeA(__reg("a0") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define AllocClickTabNodeA(tags) __AllocClickTabNodeA((tags), ClickTabBase)

VOID __FreeClickTabNode(__reg("a0") struct Node * node, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define FreeClickTabNode(node) __FreeClickTabNode((node), ClickTabBase)

VOID __SetClickTabNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define SetClickTabNodeAttrsA(node, tags) __SetClickTabNodeAttrsA((node), (tags), ClickTabBase)

VOID __GetClickTabNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define GetClickTabNodeAttrsA(node, tags) __GetClickTabNodeAttrsA((node), (tags), ClickTabBase)

#endif /*  _VBCCINLINE_CLICKTAB_H  */
