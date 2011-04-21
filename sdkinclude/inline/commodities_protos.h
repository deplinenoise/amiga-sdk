#ifndef _VBCCINLINE_COMMODITIES_H
#define _VBCCINLINE_COMMODITIES_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

CxObj * __CreateCxObj(__reg("d0") unsigned long type, __reg("a0") void * arg1, __reg("a1") void * arg2, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define CreateCxObj(type, arg1, arg2) __CreateCxObj((type), (void *)(arg1), (void *)(arg2), CxBase)

CxObj * __CxBroker(__reg("a0") struct NewBroker * nb, __reg("d0") LONG * error, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define CxBroker(nb, error) __CxBroker((nb), (error), CxBase)

LONG __ActivateCxObj(__reg("a0") CxObj * co, __reg("d0") long d0arg, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define ActivateCxObj(co, d0arg) __ActivateCxObj((co), (d0arg), CxBase)

void __DeleteCxObj(__reg("a0") CxObj * co, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define DeleteCxObj(co) __DeleteCxObj((co), CxBase)

void __DeleteCxObjAll(__reg("a0") CxObj * co, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define DeleteCxObjAll(co) __DeleteCxObjAll((co), CxBase)

ULONG __CxObjType(__reg("a0") CxObj * co, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define CxObjType(co) __CxObjType((co), CxBase)

LONG __CxObjError(__reg("a0") CxObj * co, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define CxObjError(co) __CxObjError((co), CxBase)

void __ClearCxObjError(__reg("a0") CxObj * co, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define ClearCxObjError(co) __ClearCxObjError((co), CxBase)

LONG __SetCxObjPri(__reg("a0") CxObj * co, __reg("d0") long pri, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define SetCxObjPri(co, pri) __SetCxObjPri((co), (pri), CxBase)

void __AttachCxObj(__reg("a0") CxObj * headObj, __reg("a1") CxObj * co, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define AttachCxObj(headObj, co) __AttachCxObj((headObj), (co), CxBase)

void __EnqueueCxObj(__reg("a0") CxObj * headObj, __reg("a1") CxObj * co, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define EnqueueCxObj(headObj, co) __EnqueueCxObj((headObj), (co), CxBase)

void __InsertCxObj(__reg("a0") CxObj * headObj, __reg("a1") CxObj * co, __reg("a2") CxObj * pred, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define InsertCxObj(headObj, co, pred) __InsertCxObj((headObj), (co), (pred), CxBase)

void __RemoveCxObj(__reg("a0") CxObj * co, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define RemoveCxObj(co) __RemoveCxObj((co), CxBase)

void __SetTranslate(__reg("a0") CxObj * translator, __reg("a1") struct InputEvent * events, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define SetTranslate(translator, events) __SetTranslate((translator), (events), CxBase)

void __SetFilter(__reg("a0") CxObj * filter, __reg("a1") STRPTR text, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define SetFilter(filter, text) __SetFilter((filter), (text), CxBase)

void __SetFilterIX(__reg("a0") CxObj * filter, __reg("a1") IX * ix, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define SetFilterIX(filter, ix) __SetFilterIX((filter), (ix), CxBase)

LONG __ParseIX(__reg("a0") STRPTR description, __reg("a1") IX * ix, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define ParseIX(description, ix) __ParseIX((description), (ix), CxBase)

ULONG __CxMsgType(__reg("a0") CxMsg * cxm, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define CxMsgType(cxm) __CxMsgType((cxm), CxBase)

APTR __CxMsgData(__reg("a0") CxMsg * cxm, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define CxMsgData(cxm) __CxMsgData((cxm), CxBase)

LONG __CxMsgID(__reg("a0") CxMsg * cxm, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define CxMsgID(cxm) __CxMsgID((cxm), CxBase)

void __DivertCxMsg(__reg("a0") CxMsg * cxm, __reg("a1") CxObj * headObj, __reg("a2") CxObj * returnObj, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define DivertCxMsg(cxm, headObj, returnObj) __DivertCxMsg((cxm), (headObj), (returnObj), CxBase)

void __RouteCxMsg(__reg("a0") CxMsg * cxm, __reg("a1") CxObj * co, __reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define RouteCxMsg(cxm, co) __RouteCxMsg((cxm), (co), CxBase)

void __DisposeCxMsg(__reg("a0") CxMsg * cxm, __reg("a6") struct Library *)="\tjsr\t-168(a6)";
#define DisposeCxMsg(cxm) __DisposeCxMsg((cxm), CxBase)

BOOL __InvertKeyMap(__reg("d0") unsigned long ansiCode, __reg("a0") struct InputEvent * event, __reg("a1") struct KeyMap * km, __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define InvertKeyMap(ansiCode, event, km) __InvertKeyMap((ansiCode), (event), (km), CxBase)

void __AddIEvents(__reg("a0") struct InputEvent * events, __reg("a6") struct Library *)="\tjsr\t-180(a6)";
#define AddIEvents(events) __AddIEvents((events), CxBase)

BOOL __MatchIX(__reg("a0") struct InputEvent * event, __reg("a1") IX * ix, __reg("a6") struct Library *)="\tjsr\t-204(a6)";
#define MatchIX(event, ix) __MatchIX((event), (ix), CxBase)

#endif /*  _VBCCINLINE_COMMODITIES_H  */
