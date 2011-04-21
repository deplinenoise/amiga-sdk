#ifndef _VBCCINLINE_LISTBROWSER_H
#define _VBCCINLINE_LISTBROWSER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

Class * __LISTBROWSER_GetClass(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define LISTBROWSER_GetClass() __LISTBROWSER_GetClass(ListBrowserBase)

struct Node * __AllocListBrowserNodeA(__reg("d0") UWORD columns, __reg("a0") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define AllocListBrowserNodeA(columns, tags) __AllocListBrowserNodeA((columns), (tags), ListBrowserBase)

VOID __FreeListBrowserNode(__reg("a0") struct Node * node, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define FreeListBrowserNode(node) __FreeListBrowserNode((node), ListBrowserBase)

VOID __SetListBrowserNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define SetListBrowserNodeAttrsA(node, tags) __SetListBrowserNodeAttrsA((node), (tags), ListBrowserBase)

VOID __GetListBrowserNodeAttrsA(__reg("a0") struct Node * node, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define GetListBrowserNodeAttrsA(node, tags) __GetListBrowserNodeAttrsA((node), (tags), ListBrowserBase)

VOID __ListBrowserSelectAll(__reg("a0") struct List * list, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define ListBrowserSelectAll(list) __ListBrowserSelectAll((list), ListBrowserBase)

VOID __ShowListBrowserNodeChildren(__reg("a0") struct Node * node, __reg("d0") WORD depth, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define ShowListBrowserNodeChildren(node, depth) __ShowListBrowserNodeChildren((node), (depth), ListBrowserBase)

VOID __HideListBrowserNodeChildren(__reg("a0") struct Node * node, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define HideListBrowserNodeChildren(node) __HideListBrowserNodeChildren((node), ListBrowserBase)

VOID __ShowAllListBrowserChildren(__reg("a0") struct List * list, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define ShowAllListBrowserChildren(list) __ShowAllListBrowserChildren((list), ListBrowserBase)

VOID __HideAllListBrowserChildren(__reg("a0") struct List * list, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define HideAllListBrowserChildren(list) __HideAllListBrowserChildren((list), ListBrowserBase)

VOID __FreeListBrowserList(__reg("a0") struct List * list, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define FreeListBrowserList(list) __FreeListBrowserList((list), ListBrowserBase)

#endif /*  _VBCCINLINE_LISTBROWSER_H  */
