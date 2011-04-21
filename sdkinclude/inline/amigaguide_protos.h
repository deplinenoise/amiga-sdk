#ifndef _VBCCINLINE_AMIGAGUIDE_H
#define _VBCCINLINE_AMIGAGUIDE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

LONG __LockAmigaGuideBase(__reg("a0") APTR handle, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define LockAmigaGuideBase(handle) __LockAmigaGuideBase((handle), AmigaGuideBase)

void __UnlockAmigaGuideBase(__reg("d0") long key, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define UnlockAmigaGuideBase(key) __UnlockAmigaGuideBase((key), AmigaGuideBase)

APTR __OpenAmigaGuideA(__reg("a0") struct NewAmigaGuide * nag, __reg("a1") struct TagItem * *, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define OpenAmigaGuideA(nag, *) __OpenAmigaGuideA((nag), (*), AmigaGuideBase)

APTR __OpenAmigaGuideAsyncA(__reg("a0") struct NewAmigaGuide * nag, __reg("d0") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define OpenAmigaGuideAsyncA(nag, attrs) __OpenAmigaGuideAsyncA((nag), (attrs), AmigaGuideBase)

void __CloseAmigaGuide(__reg("a0") APTR cl, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define CloseAmigaGuide(cl) __CloseAmigaGuide((cl), AmigaGuideBase)

ULONG __AmigaGuideSignal(__reg("a0") APTR cl, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define AmigaGuideSignal(cl) __AmigaGuideSignal((cl), AmigaGuideBase)

struct AmigaGuideMsg * __GetAmigaGuideMsg(__reg("a0") APTR cl, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define GetAmigaGuideMsg(cl) __GetAmigaGuideMsg((cl), AmigaGuideBase)

void __ReplyAmigaGuideMsg(__reg("a0") struct AmigaGuideMsg * amsg, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define ReplyAmigaGuideMsg(amsg) __ReplyAmigaGuideMsg((amsg), AmigaGuideBase)

LONG __SetAmigaGuideContextA(__reg("a0") APTR cl, __reg("d0") unsigned long id, __reg("d1") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define SetAmigaGuideContextA(cl, id, attrs) __SetAmigaGuideContextA((cl), (id), (attrs), AmigaGuideBase)

LONG __SendAmigaGuideContextA(__reg("a0") APTR cl, __reg("d0") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define SendAmigaGuideContextA(cl, attrs) __SendAmigaGuideContextA((cl), (attrs), AmigaGuideBase)

LONG __SendAmigaGuideCmdA(__reg("a0") APTR cl, __reg("d0") STRPTR cmd, __reg("d1") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define SendAmigaGuideCmdA(cl, cmd, attrs) __SendAmigaGuideCmdA((cl), (cmd), (attrs), AmigaGuideBase)

LONG __SetAmigaGuideAttrsA(__reg("a0") APTR cl, __reg("a1") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define SetAmigaGuideAttrsA(cl, attrs) __SetAmigaGuideAttrsA((cl), (attrs), AmigaGuideBase)

LONG __GetAmigaGuideAttr(__reg("d0") Tag tag, __reg("a0") APTR cl, __reg("a1") ULONG * storage, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define GetAmigaGuideAttr(tag, cl, storage) __GetAmigaGuideAttr((tag), (cl), (storage), AmigaGuideBase)

LONG __LoadXRef(__reg("a0") void * lock, __reg("a1") STRPTR name, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define LoadXRef(lock, name) __LoadXRef((void *)(lock), (name), AmigaGuideBase)

void __ExpungeXRef(__reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define ExpungeXRef() __ExpungeXRef(AmigaGuideBase)

APTR __AddAmigaGuideHostA(__reg("a0") struct Hook * h, __reg("d0") STRPTR name, __reg("a1") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define AddAmigaGuideHostA(h, name, attrs) __AddAmigaGuideHostA((h), (name), (attrs), AmigaGuideBase)

LONG __RemoveAmigaGuideHostA(__reg("a0") APTR hh, __reg("a1") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define RemoveAmigaGuideHostA(hh, attrs) __RemoveAmigaGuideHostA((hh), (attrs), AmigaGuideBase)

STRPTR __GetAmigaGuideString(__reg("d0") long id, __reg("a6") struct Library *)="\tjsr\t-210(a6)";
#define GetAmigaGuideString(id) __GetAmigaGuideString((id), AmigaGuideBase)

#endif /*  _VBCCINLINE_AMIGAGUIDE_H  */
