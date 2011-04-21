#ifndef _VBCCINLINE_PPC_H
#define _VBCCINLINE_PPC_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

void* __PPCLoadObject(__reg("a0") char* a, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define PPCLoadObject(a) __PPCLoadObject((a), PPCLibBase)

void __PPCUnLoadObject(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define PPCUnLoadObject(a) __PPCUnLoadObject((a), PPCLibBase)

ULONG __PPCRunObject(__reg("a0") void* a, __reg("a1") void* b, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define PPCRunObject(a, b) __PPCRunObject((a), (b), PPCLibBase)

void* __PPCAllocMem(__reg("d0") ULONG a, __reg("d1") ULONG b, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define PPCAllocMem(a, b) __PPCAllocMem((a), (b), PPCLibBase)

void __PPCFreeMem(__reg("a1") void* a, __reg("d0") ULONG b, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define PPCFreeMem(a, b) __PPCFreeMem((a), (b), PPCLibBase)

void* __PPCAllocVec(__reg("d0") ULONG a, __reg("d1") ULONG b, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define PPCAllocVec(a, b) __PPCAllocVec((a), (b), PPCLibBase)

void* __PPCFreeVec(__reg("a1") void* a, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define PPCFreeVec(a) __PPCFreeVec((a), PPCLibBase)

void	* __PPCCreateTask(__reg("a0") void* a, __reg("a1") struct TagItem* b, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define PPCCreateTask(a, b) __PPCCreateTask((a), (b), PPCLibBase)

BOOL __PPCDeleteTask(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define PPCDeleteTask(a) __PPCDeleteTask((a), PPCLibBase)

void __PPCSignalTask(__reg("a0") void* a, __reg("d0") ULONG b, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define PPCSignalTask(a, b) __PPCSignalTask((a), (b), PPCLibBase)

void	* __PPCFindTask(__reg("a0") char	* a, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define PPCFindTask(a) __PPCFindTask((a), PPCLibBase)

ULONG __PPCRunKernelObject(__reg("a0") void* a, __reg("a1") struct ModuleArgs* b, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define PPCRunKernelObject(a, b) __PPCRunKernelObject((a), (b), PPCLibBase)

ULONG __PPCGetTaskAttrs(__reg("a0") void* a, __reg("a1") struct TagItem* b, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define PPCGetTaskAttrs(a, b) __PPCGetTaskAttrs((a), (b), PPCLibBase)

ULONG __PPCGetAttrs(__reg("a0") struct TagItem* a, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define PPCGetAttrs(a) __PPCGetAttrs((a), PPCLibBase)

void	* __PPCFindTaskObject(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define PPCFindTaskObject(a) __PPCFindTaskObject((a), PPCLibBase)

DOUBLE __PPCRunKernelObjectFPU(__reg("a0") void* a, __reg("a1") struct ModuleArgs* b, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define PPCRunKernelObjectFPU(a, b) __PPCRunKernelObjectFPU((a), (b), PPCLibBase)

ULONG __PPCReadLong(__reg("a0") ULONG* a, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define PPCReadLong(a) __PPCReadLong((a), PPCLibBase)

void __PPCWriteLong(__reg("a0") ULONG* a, __reg("d0") ULONG b, __reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define PPCWriteLong(a, b) __PPCWriteLong((a), (b), PPCLibBase)

BOOL __PPCStartTask(__reg("a0") void* a, __reg("a1") struct TagItem* b, __reg("a6") struct Library *)="\tjsr\t-180(a6)";
#define PPCStartTask(a, b) __PPCStartTask((a), (b), PPCLibBase)

BOOL __PPCStopTask(__reg("a0") void* a, __reg("a1") struct TagItem* b, __reg("a6") struct Library *)="\tjsr\t-186(a6)";
#define PPCStopTask(a, b) __PPCStopTask((a), (b), PPCLibBase)

ULONG __PPCSetTaskAttrs(__reg("a0") void* a, __reg("a1") struct TagItem* b, __reg("a6") struct Library *)="\tjsr\t-192(a6)";
#define PPCSetTaskAttrs(a, b) __PPCSetTaskAttrs((a), (b), PPCLibBase)

void __PPCWriteLongFlush(__reg("a0") ULONG* a, __reg("d0") ULONG b, __reg("a6") struct Library *)="\tjsr\t-204(a6)";
#define PPCWriteLongFlush(a, b) __PPCWriteLongFlush((a), (b), PPCLibBase)

UWORD __PPCReadWord(__reg("a0") UWORD* a, __reg("a6") struct Library *)="\tjsr\t-210(a6)";
#define PPCReadWord(a) __PPCReadWord((a), PPCLibBase)

void __PPCWriteWord(__reg("a0") UWORD* a, __reg("d0") UWORD b, __reg("a6") struct Library *)="\tjsr\t-216(a6)";
#define PPCWriteWord(a, b) __PPCWriteWord((a), (b), PPCLibBase)

UBYTE __PPCReadByte(__reg("a0") UBYTE* a, __reg("a6") struct Library *)="\tjsr\t-222(a6)";
#define PPCReadByte(a) __PPCReadByte((a), PPCLibBase)

void __PPCWriteByte(__reg("a0") UBYTE* a, __reg("d0") UBYTE b, __reg("a6") struct Library *)="\tjsr\t-228(a6)";
#define PPCWriteByte(a, b) __PPCWriteByte((a), (b), PPCLibBase)

void* __PPCCreatePool(__reg("d0") ULONG a, __reg("d1") ULONG b, __reg("d2") ULONG c, __reg("a6") struct Library *)="\tjsr\t-234(a6)";
#define PPCCreatePool(a, b, c) __PPCCreatePool((a), (b), (c), PPCLibBase)

BOOL __PPCDeletePool(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-240(a6)";
#define PPCDeletePool(a) __PPCDeletePool((a), PPCLibBase)

void* __PPCAllocPooled(__reg("a0") void* a, __reg("d0") ULONG b, __reg("a6") struct Library *)="\tjsr\t-246(a6)";
#define PPCAllocPooled(a, b) __PPCAllocPooled((a), (b), PPCLibBase)

void __PPCFreePooled(__reg("a0") void* a, __reg("a1") void* b, __reg("d0") ULONG c, __reg("a6") struct Library *)="\tjsr\t-252(a6)";
#define PPCFreePooled(a, b, c) __PPCFreePooled((a), (b), (c), PPCLibBase)

void* __PPCAllocVecPooled(__reg("a0") void* a, __reg("d0") ULONG b, __reg("a6") struct Library *)="\tjsr\t-258(a6)";
#define PPCAllocVecPooled(a, b) __PPCAllocVecPooled((a), (b), PPCLibBase)

void __PPCFreeVecPooled(__reg("a0") void* a, __reg("a1") void* b, __reg("a6") struct Library *)="\tjsr\t-264(a6)";
#define PPCFreeVecPooled(a, b) __PPCFreeVecPooled((a), (b), PPCLibBase)

void* __PPCCreatePort(__reg("a0") struct TagItem* a, __reg("a6") struct Library *)="\tjsr\t-270(a6)";
#define PPCCreatePort(a) __PPCCreatePort((a), PPCLibBase)

BOOL __PPCDeletePort(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-276(a6)";
#define PPCDeletePort(a) __PPCDeletePort((a), PPCLibBase)

void* __PPCObtainPort(__reg("a0") struct TagItem* a, __reg("a6") struct Library *)="\tjsr\t-282(a6)";
#define PPCObtainPort(a) __PPCObtainPort((a), PPCLibBase)

BOOL __PPCReleasePort(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-288(a6)";
#define PPCReleasePort(a) __PPCReleasePort((a), PPCLibBase)

void* __PPCCreateMessage(__reg("a0") void* a, __reg("d0") ULONG b, __reg("a6") struct Library *)="\tjsr\t-294(a6)";
#define PPCCreateMessage(a, b) __PPCCreateMessage((a), (b), PPCLibBase)

void __PPCDeleteMessage(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-300(a6)";
#define PPCDeleteMessage(a) __PPCDeleteMessage((a), PPCLibBase)

ULONG __PPCGetMessageAttr(__reg("a0") void* a, __reg("d0") ULONG b, __reg("a6") struct Library *)="\tjsr\t-306(a6)";
#define PPCGetMessageAttr(a, b) __PPCGetMessageAttr((a), (b), PPCLibBase)

void* __PPCGetMessage(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-312(a6)";
#define PPCGetMessage(a) __PPCGetMessage((a), PPCLibBase)

BOOL __PPCReplyMessage(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-324(a6)";
#define PPCReplyMessage(a) __PPCReplyMessage((a), PPCLibBase)

BOOL __PPCSendMessage(__reg("a0") void* a, __reg("a1") void* b, __reg("a2") void* c, __reg("d0") ULONG d, __reg("d1") ULONG e, __reg("a6") struct Library *)="\tjsr\t-330(a6)";
#define PPCSendMessage(a, b, c, d, e) __PPCSendMessage((a), (b), (c), (d), (e), PPCLibBase)

void* __PPCWaitPort(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-336(a6)";
#define PPCWaitPort(a) __PPCWaitPort((a), PPCLibBase)

void __PPCCacheClearE(__reg("a0") void* a, __reg("d0") ULONG b, __reg("d1") ULONG c, __reg("a6") struct Library *)="\tjsr\t-342(a6)";
#define PPCCacheClearE(a, b, c) __PPCCacheClearE((a), (b), (c), PPCLibBase)

void __PPCCacheInvalidE(__reg("a0") void* a, __reg("d0") ULONG b, __reg("d1") ULONG c, __reg("a6") struct Library *)="\tjsr\t-348(a6)";
#define PPCCacheInvalidE(a, b, c) __PPCCacheInvalidE((a), (b), (c), PPCLibBase)

void* __PPCCreatePortList(__reg("a0") void** a, __reg("d0") ULONG b, __reg("a6") struct Library *)="\tjsr\t-366(a6)";
#define PPCCreatePortList(a, b) __PPCCreatePortList((a), (b), PPCLibBase)

void __PPCDeletePortList(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-372(a6)";
#define PPCDeletePortList(a) __PPCDeletePortList((a), PPCLibBase)

BOOL __PPCAddPortList(__reg("a0") void* a, __reg("a1") void* b, __reg("a6") struct Library *)="\tjsr\t-378(a6)";
#define PPCAddPortList(a, b) __PPCAddPortList((a), (b), PPCLibBase)

void __PPCRemPortList(__reg("a0") void* a, __reg("a1") void* b, __reg("a6") struct Library *)="\tjsr\t-384(a6)";
#define PPCRemPortList(a, b) __PPCRemPortList((a), (b), PPCLibBase)

void* __PPCWaitPortList(__reg("a0") void* a, __reg("a6") struct Library *)="\tjsr\t-390(a6)";
#define PPCWaitPortList(a) __PPCWaitPortList((a), PPCLibBase)

ULONG __PPCGetPortListAttr(__reg("a0") void* a, __reg("d0") ULONG b, __reg("a6") struct Library *)="\tjsr\t-396(a6)";
#define PPCGetPortListAttr(a, b) __PPCGetPortListAttr((a), (b), PPCLibBase)

void __PPCSetPortListAttr(__reg("a0") void* a, __reg("d0") ULONG b, __reg("d1") ULONG c, __reg("a6") struct Library *)="\tjsr\t-402(a6)";
#define PPCSetPortListAttr(a, b, c) __PPCSetPortListAttr((a), (b), (c), PPCLibBase)

void* __PPCLoadObjectTagList(__reg("a0") struct TagItem* a, __reg("a6") struct Library *)="\tjsr\t-408(a6)";
#define PPCLoadObjectTagList(a) __PPCLoadObjectTagList((a), PPCLibBase)

BOOL __PPCSetAttrs(__reg("a0") struct TagItem* a, __reg("a6") struct Library *)="\tjsr\t-414(a6)";
#define PPCSetAttrs(a) __PPCSetAttrs((a), PPCLibBase)

void __PPCCacheTrashE(__reg("a0") void* a, __reg("d0") ULONG b, __reg("d1") ULONG c, __reg("a6") struct Library *)="\tjsr\t-432(a6)";
#define PPCCacheTrashE(a, b, c) __PPCCacheTrashE((a), (b), (c), PPCLibBase)

#endif /*  _VBCCINLINE_PPC_H  */
