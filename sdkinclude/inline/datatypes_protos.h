#ifndef _VBCCINLINE_DATATYPES_H
#define _VBCCINLINE_DATATYPES_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct DataType * __ObtainDataTypeA(__reg("d0") unsigned long type, __reg("a0") APTR handle, __reg("a1") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define ObtainDataTypeA(type, handle, attrs) __ObtainDataTypeA((type), (handle), (attrs), DataTypesBase)

void __ReleaseDataType(__reg("a0") struct DataType * dt, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define ReleaseDataType(dt) __ReleaseDataType((dt), DataTypesBase)

Object * __NewDTObjectA(__reg("d0") APTR name, __reg("a0") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define NewDTObjectA(name, attrs) __NewDTObjectA((name), (attrs), DataTypesBase)

void __DisposeDTObject(__reg("a0") Object * o, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define DisposeDTObject(o) __DisposeDTObject((o), DataTypesBase)

ULONG __SetDTAttrsA(__reg("a0") Object * o, __reg("a1") struct Window * win, __reg("a2") struct Requester * req, __reg("a3") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define SetDTAttrsA(o, win, req, attrs) __SetDTAttrsA((o), (win), (req), (attrs), DataTypesBase)

ULONG __GetDTAttrsA(__reg("a0") Object * o, __reg("a2") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define GetDTAttrsA(o, attrs) __GetDTAttrsA((o), (attrs), DataTypesBase)

LONG __AddDTObject(__reg("a0") struct Window * win, __reg("a1") struct Requester * req, __reg("a2") Object * o, __reg("d0") long pos, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define AddDTObject(win, req, o, pos) __AddDTObject((win), (req), (o), (pos), DataTypesBase)

void __RefreshDTObjectA(__reg("a0") Object * o, __reg("a1") struct Window * win, __reg("a2") struct Requester * req, __reg("a3") struct TagItem * attrs, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define RefreshDTObjectA(o, win, req, attrs) __RefreshDTObjectA((o), (win), (req), (attrs), DataTypesBase)

ULONG __DoAsyncLayout(__reg("a0") Object * o, __reg("a1") struct gpLayout * gpl, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define DoAsyncLayout(o, gpl) __DoAsyncLayout((o), (gpl), DataTypesBase)

ULONG __DoDTMethodA(__reg("a0") Object * o, __reg("a1") struct Window * win, __reg("a2") struct Requester * req, __reg("a3") Msg msg, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define DoDTMethodA(o, win, req, msg) __DoDTMethodA((o), (win), (req), (msg), DataTypesBase)

LONG __RemoveDTObject(__reg("a0") struct Window * win, __reg("a1") Object * o, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define RemoveDTObject(win, o) __RemoveDTObject((win), (o), DataTypesBase)

ULONG * __GetDTMethods(__reg("a0") Object * object, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define GetDTMethods(object) __GetDTMethods((object), DataTypesBase)

struct DTMethods * __GetDTTriggerMethods(__reg("a0") Object * object, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define GetDTTriggerMethods(object) __GetDTTriggerMethods((object), DataTypesBase)

ULONG __PrintDTObjectA(__reg("a0") Object * o, __reg("a1") struct Window * w, __reg("a2") struct Requester * r, __reg("a3") struct dtPrint * msg, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define PrintDTObjectA(o, w, r, msg) __PrintDTObjectA((o), (w), (r), (msg), DataTypesBase)

STRPTR __GetDTString(__reg("d0") unsigned long id, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define GetDTString(id) __GetDTString((id), DataTypesBase)

#endif /*  _VBCCINLINE_DATATYPES_H  */
