#ifndef _VBCCINLINE_POWERPC_H
#define _VBCCINLINE_POWERPC_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

ULONG __RunPPC(__reg("a0") struct PPCArgs * PPStruct, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define RunPPC(PPStruct) __RunPPC((PPStruct), PowerPCBase)

ULONG __WaitForPPC(__reg("a0") struct PPCArgs * PPStruct, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define WaitForPPC(PPStruct) __WaitForPPC((PPStruct), PowerPCBase)

ULONG __GetCPU(__reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define GetCPU() __GetCPU(PowerPCBase)

VOID __PowerDebugMode(__reg("d0") ULONG debuglevel, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define PowerDebugMode(debuglevel) __PowerDebugMode((debuglevel), PowerPCBase)

APTR __AllocVec32(__reg("d0") ULONG memsize, __reg("d1") ULONG attributes, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define AllocVec32(memsize, attributes) __AllocVec32((memsize), (attributes), PowerPCBase)

VOID __FreeVec32(__reg("a1") APTR memblock, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define FreeVec32(memblock) __FreeVec32((memblock), PowerPCBase)

VOID __SPrintF68K(__reg("a0") STRPTR Formatstring, __reg("a1") APTR values, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define SPrintF68K(Formatstring, values) __SPrintF68K((Formatstring), (values), PowerPCBase)

struct Message * __AllocXMsg(__reg("d0") ULONG bodysize, __reg("a0") struct MsgPort * replyport, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define AllocXMsg(bodysize, replyport) __AllocXMsg((bodysize), (replyport), PowerPCBase)

VOID __FreeXMsg(__reg("a0") struct Message * message, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define FreeXMsg(message) __FreeXMsg((message), PowerPCBase)

VOID __PutXMsg(__reg("a0") struct MsgPortPPC * MsgPortPPC, __reg("a1") struct Message * message, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define PutXMsg(MsgPortPPC, message) __PutXMsg((MsgPortPPC), (message), PowerPCBase)

ULONG __GetPPCState(__reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define GetPPCState() __GetPPCState(PowerPCBase)

void __SetCache68K(__reg("d0") ULONG flags, __reg("a0") void * addr, __reg("d1") ULONG length, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define SetCache68K(flags, addr, length) __SetCache68K((flags), (addr), (length), PowerPCBase)

struct TaskPPC * __CreatePPCTask(__reg("a0") struct TagItem * taglist, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define CreatePPCTask(taglist) __CreatePPCTask((taglist), PowerPCBase)

void __CausePPCInterrupt(__reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define CausePPCInterrupt() __CausePPCInterrupt(PowerPCBase)

#endif /*  _VBCCINLINE_POWERPC_H  */
