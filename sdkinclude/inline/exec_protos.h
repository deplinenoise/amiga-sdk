#ifndef _VBCCINLINE_EXEC_H
#define _VBCCINLINE_EXEC_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

ULONG __Supervisor(__reg("a5") unsigned long (*userFunction)(), __reg("a6") struct ExecBase *)="\tjsr\t-30(a6)";
#define Supervisor(userFunction) __Supervisor((userFunction), SysBase)

void __InitCode(__reg("d0") unsigned long startClass, __reg("d1") unsigned long version, __reg("a6") struct ExecBase *)="\tjsr\t-72(a6)";
#define InitCode(startClass, version) __InitCode((startClass), (version), SysBase)

void __InitStruct(__reg("a1") APTR initTable, __reg("a2") APTR memory, __reg("d0") unsigned long size, __reg("a6") struct ExecBase *)="\tjsr\t-78(a6)";
#define InitStruct(initTable, memory, size) __InitStruct((initTable), (memory), (size), SysBase)

struct Library * __MakeLibrary(__reg("a0") APTR funcInit, __reg("a1") APTR structInit, __reg("a2") unsigned long (*libInit)(), __reg("d0") unsigned long dataSize, __reg("d1") unsigned long segList, __reg("a6") struct ExecBase *)="\tjsr\t-84(a6)";
#define MakeLibrary(funcInit, structInit, libInit, dataSize, segList) __MakeLibrary((funcInit), (structInit), (libInit), (dataSize), (segList), SysBase)

void __MakeFunctions(__reg("a0") APTR target, __reg("a1") APTR functionArray, __reg("a2") void * funcDispBase, __reg("a6") struct ExecBase *)="\tjsr\t-90(a6)";
#define MakeFunctions(target, functionArray, funcDispBase) __MakeFunctions((target), (functionArray), (void *)(funcDispBase), SysBase)

struct Resident * __FindResident(__reg("a1") UBYTE * name, __reg("a6") struct ExecBase *)="\tjsr\t-96(a6)";
#define FindResident(name) __FindResident((name), SysBase)

APTR __InitResident(__reg("a1") struct Resident * resident, __reg("d1") unsigned long segList, __reg("a6") struct ExecBase *)="\tjsr\t-102(a6)";
#define InitResident(resident, segList) __InitResident((resident), (segList), SysBase)

void __Alert(__reg("d7") unsigned long alertNum, __reg("a6") struct ExecBase *)="\tjsr\t-108(a6)";
#define Alert(alertNum) __Alert((alertNum), SysBase)

void __Debug(__reg("d0") unsigned long flags, __reg("a6") struct ExecBase *)="\tjsr\t-114(a6)";
#define Debug(flags) __Debug((flags), SysBase)

void __Disable(__reg("a6") struct ExecBase *)="\tjsr\t-120(a6)";
#define Disable() __Disable(SysBase)

void __Enable(__reg("a6") struct ExecBase *)="\tjsr\t-126(a6)";
#define Enable() __Enable(SysBase)

void __Forbid(__reg("a6") struct ExecBase *)="\tjsr\t-132(a6)";
#define Forbid() __Forbid(SysBase)

void __Permit(__reg("a6") struct ExecBase *)="\tjsr\t-138(a6)";
#define Permit() __Permit(SysBase)

ULONG __SetSR(__reg("d0") unsigned long newSR, __reg("d1") unsigned long mask, __reg("a6") struct ExecBase *)="\tjsr\t-144(a6)";
#define SetSR(newSR, mask) __SetSR((newSR), (mask), SysBase)

APTR __SuperState(__reg("a6") struct ExecBase *)="\tjsr\t-150(a6)";
#define SuperState() __SuperState(SysBase)

void __UserState(__reg("d0") APTR sysStack, __reg("a6") struct ExecBase *)="\tjsr\t-156(a6)";
#define UserState(sysStack) __UserState((sysStack), SysBase)

struct Interrupt * __SetIntVector(__reg("d0") long intNumber, __reg("a1") struct Interrupt * interrupt, __reg("a6") struct ExecBase *)="\tjsr\t-162(a6)";
#define SetIntVector(intNumber, interrupt) __SetIntVector((intNumber), (interrupt), SysBase)

void __AddIntServer(__reg("d0") long intNumber, __reg("a1") struct Interrupt * interrupt, __reg("a6") struct ExecBase *)="\tjsr\t-168(a6)";
#define AddIntServer(intNumber, interrupt) __AddIntServer((intNumber), (interrupt), SysBase)

void __RemIntServer(__reg("d0") long intNumber, __reg("a1") struct Interrupt * interrupt, __reg("a6") struct ExecBase *)="\tjsr\t-174(a6)";
#define RemIntServer(intNumber, interrupt) __RemIntServer((intNumber), (interrupt), SysBase)

void __Cause(__reg("a1") struct Interrupt * interrupt, __reg("a6") struct ExecBase *)="\tjsr\t-180(a6)";
#define Cause(interrupt) __Cause((interrupt), SysBase)

APTR __Allocate(__reg("a0") struct MemHeader * freeList, __reg("d0") unsigned long byteSize, __reg("a6") struct ExecBase *)="\tjsr\t-186(a6)";
#define Allocate(freeList, byteSize) __Allocate((freeList), (byteSize), SysBase)

void __Deallocate(__reg("a0") struct MemHeader * freeList, __reg("a1") APTR memoryBlock, __reg("d0") unsigned long byteSize, __reg("a6") struct ExecBase *)="\tjsr\t-192(a6)";
#define Deallocate(freeList, memoryBlock, byteSize) __Deallocate((freeList), (memoryBlock), (byteSize), SysBase)

APTR __AllocMem(__reg("d0") unsigned long byteSize, __reg("d1") unsigned long requirements, __reg("a6") struct ExecBase *)="\tjsr\t-198(a6)";
#define AllocMem(byteSize, requirements) __AllocMem((byteSize), (requirements), SysBase)

APTR __AllocAbs(__reg("d0") unsigned long byteSize, __reg("a1") APTR location, __reg("a6") struct ExecBase *)="\tjsr\t-204(a6)";
#define AllocAbs(byteSize, location) __AllocAbs((byteSize), (location), SysBase)

void __FreeMem(__reg("a1") APTR memoryBlock, __reg("d0") unsigned long byteSize, __reg("a6") struct ExecBase *)="\tjsr\t-210(a6)";
#define FreeMem(memoryBlock, byteSize) __FreeMem((memoryBlock), (byteSize), SysBase)

ULONG __AvailMem(__reg("d1") unsigned long requirements, __reg("a6") struct ExecBase *)="\tjsr\t-216(a6)";
#define AvailMem(requirements) __AvailMem((requirements), SysBase)

struct MemList * __AllocEntry(__reg("a0") struct MemList * entry, __reg("a6") struct ExecBase *)="\tjsr\t-222(a6)";
#define AllocEntry(entry) __AllocEntry((entry), SysBase)

void __FreeEntry(__reg("a0") struct MemList * entry, __reg("a6") struct ExecBase *)="\tjsr\t-228(a6)";
#define FreeEntry(entry) __FreeEntry((entry), SysBase)

void __Insert(__reg("a0") struct List * list, __reg("a1") struct Node * node, __reg("a2") struct Node * pred, __reg("a6") struct ExecBase *)="\tjsr\t-234(a6)";
#define Insert(list, node, pred) __Insert((list), (node), (pred), SysBase)

void __AddHead(__reg("a0") struct List * list, __reg("a1") struct Node * node, __reg("a6") struct ExecBase *)="\tjsr\t-240(a6)";
#define AddHead(list, node) __AddHead((list), (node), SysBase)

void __AddTail(__reg("a0") struct List * list, __reg("a1") struct Node * node, __reg("a6") struct ExecBase *)="\tjsr\t-246(a6)";
#define AddTail(list, node) __AddTail((list), (node), SysBase)

void __Remove(__reg("a1") struct Node * node, __reg("a6") struct ExecBase *)="\tjsr\t-252(a6)";
#define Remove(node) __Remove((node), SysBase)

struct Node * __RemHead(__reg("a0") struct List * list, __reg("a6") struct ExecBase *)="\tjsr\t-258(a6)";
#define RemHead(list) __RemHead((list), SysBase)

struct Node * __RemTail(__reg("a0") struct List * list, __reg("a6") struct ExecBase *)="\tjsr\t-264(a6)";
#define RemTail(list) __RemTail((list), SysBase)

void __Enqueue(__reg("a0") struct List * list, __reg("a1") struct Node * node, __reg("a6") struct ExecBase *)="\tjsr\t-270(a6)";
#define Enqueue(list, node) __Enqueue((list), (node), SysBase)

struct Node * __FindName(__reg("a0") struct List * list, __reg("a1") UBYTE * name, __reg("a6") struct ExecBase *)="\tjsr\t-276(a6)";
#define FindName(list, name) __FindName((list), (name), SysBase)

APTR __AddTask(__reg("a1") struct Task * task, __reg("a2") APTR initPC, __reg("a3") APTR finalPC, __reg("a6") struct ExecBase *)="\tjsr\t-282(a6)";
#define AddTask(task, initPC, finalPC) __AddTask((task), (initPC), (finalPC), SysBase)

void __RemTask(__reg("a1") struct Task * task, __reg("a6") struct ExecBase *)="\tjsr\t-288(a6)";
#define RemTask(task) __RemTask((task), SysBase)

struct Task * __FindTask(__reg("a1") UBYTE * name, __reg("a6") struct ExecBase *)="\tjsr\t-294(a6)";
#define FindTask(name) __FindTask((name), SysBase)

BYTE __SetTaskPri(__reg("a1") struct Task * task, __reg("d0") long priority, __reg("a6") struct ExecBase *)="\tjsr\t-300(a6)";
#define SetTaskPri(task, priority) __SetTaskPri((task), (priority), SysBase)

ULONG __SetSignal(__reg("d0") unsigned long newSignals, __reg("d1") unsigned long signalSet, __reg("a6") struct ExecBase *)="\tjsr\t-306(a6)";
#define SetSignal(newSignals, signalSet) __SetSignal((newSignals), (signalSet), SysBase)

ULONG __SetExcept(__reg("d0") unsigned long newSignals, __reg("d1") unsigned long signalSet, __reg("a6") struct ExecBase *)="\tjsr\t-312(a6)";
#define SetExcept(newSignals, signalSet) __SetExcept((newSignals), (signalSet), SysBase)

ULONG __Wait(__reg("d0") unsigned long signalSet, __reg("a6") struct ExecBase *)="\tjsr\t-318(a6)";
#define Wait(signalSet) __Wait((signalSet), SysBase)

void __Signal(__reg("a1") struct Task * task, __reg("d0") unsigned long signalSet, __reg("a6") struct ExecBase *)="\tjsr\t-324(a6)";
#define Signal(task, signalSet) __Signal((task), (signalSet), SysBase)

BYTE __AllocSignal(__reg("d0") long signalNum, __reg("a6") struct ExecBase *)="\tjsr\t-330(a6)";
#define AllocSignal(signalNum) __AllocSignal((signalNum), SysBase)

void __FreeSignal(__reg("d0") long signalNum, __reg("a6") struct ExecBase *)="\tjsr\t-336(a6)";
#define FreeSignal(signalNum) __FreeSignal((signalNum), SysBase)

LONG __AllocTrap(__reg("d0") long trapNum, __reg("a6") struct ExecBase *)="\tjsr\t-342(a6)";
#define AllocTrap(trapNum) __AllocTrap((trapNum), SysBase)

void __FreeTrap(__reg("d0") long trapNum, __reg("a6") struct ExecBase *)="\tjsr\t-348(a6)";
#define FreeTrap(trapNum) __FreeTrap((trapNum), SysBase)

void __AddPort(__reg("a1") struct MsgPort * port, __reg("a6") struct ExecBase *)="\tjsr\t-354(a6)";
#define AddPort(port) __AddPort((port), SysBase)

void __RemPort(__reg("a1") struct MsgPort * port, __reg("a6") struct ExecBase *)="\tjsr\t-360(a6)";
#define RemPort(port) __RemPort((port), SysBase)

void __PutMsg(__reg("a0") struct MsgPort * port, __reg("a1") struct Message * message, __reg("a6") struct ExecBase *)="\tjsr\t-366(a6)";
#define PutMsg(port, message) __PutMsg((port), (message), SysBase)

struct Message * __GetMsg(__reg("a0") struct MsgPort * port, __reg("a6") struct ExecBase *)="\tjsr\t-372(a6)";
#define GetMsg(port) __GetMsg((port), SysBase)

void __ReplyMsg(__reg("a1") struct Message * message, __reg("a6") struct ExecBase *)="\tjsr\t-378(a6)";
#define ReplyMsg(message) __ReplyMsg((message), SysBase)

struct Message * __WaitPort(__reg("a0") struct MsgPort * port, __reg("a6") struct ExecBase *)="\tjsr\t-384(a6)";
#define WaitPort(port) __WaitPort((port), SysBase)

struct MsgPort * __FindPort(__reg("a1") UBYTE * name, __reg("a6") struct ExecBase *)="\tjsr\t-390(a6)";
#define FindPort(name) __FindPort((name), SysBase)

void __AddLibrary(__reg("a1") struct Library * library, __reg("a6") struct ExecBase *)="\tjsr\t-396(a6)";
#define AddLibrary(library) __AddLibrary((library), SysBase)

void __RemLibrary(__reg("a1") struct Library * library, __reg("a6") struct ExecBase *)="\tjsr\t-402(a6)";
#define RemLibrary(library) __RemLibrary((library), SysBase)

struct Library * __OldOpenLibrary(__reg("a1") UBYTE * libName, __reg("a6") struct ExecBase *)="\tjsr\t-408(a6)";
#define OldOpenLibrary(libName) __OldOpenLibrary((libName), SysBase)

void __CloseLibrary(__reg("a1") struct Library * library, __reg("a6") struct ExecBase *)="\tjsr\t-414(a6)";
#define CloseLibrary(library) __CloseLibrary((library), SysBase)

APTR __SetFunction(__reg("a1") struct Library * library, __reg("a0") void * funcOffset, __reg("d0") unsigned long (*newFunction)(), __reg("a6") struct ExecBase *)="\tjsr\t-420(a6)";
#define SetFunction(library, funcOffset, newFunction) __SetFunction((library), (void *)(funcOffset), (newFunction), SysBase)

void __SumLibrary(__reg("a1") struct Library * library, __reg("a6") struct ExecBase *)="\tjsr\t-426(a6)";
#define SumLibrary(library) __SumLibrary((library), SysBase)

void __AddDevice(__reg("a1") struct Device * device, __reg("a6") struct ExecBase *)="\tjsr\t-432(a6)";
#define AddDevice(device) __AddDevice((device), SysBase)

void __RemDevice(__reg("a1") struct Device * device, __reg("a6") struct ExecBase *)="\tjsr\t-438(a6)";
#define RemDevice(device) __RemDevice((device), SysBase)

BYTE __OpenDevice(__reg("a0") UBYTE * devName, __reg("d0") unsigned long unit, __reg("a1") struct IORequest * ioRequest, __reg("d1") unsigned long flags, __reg("a6") struct ExecBase *)="\tjsr\t-444(a6)";
#define OpenDevice(devName, unit, ioRequest, flags) __OpenDevice((devName), (unit), (ioRequest), (flags), SysBase)

void __CloseDevice(__reg("a1") struct IORequest * ioRequest, __reg("a6") struct ExecBase *)="\tjsr\t-450(a6)";
#define CloseDevice(ioRequest) __CloseDevice((ioRequest), SysBase)

BYTE __DoIO(__reg("a1") struct IORequest * ioRequest, __reg("a6") struct ExecBase *)="\tjsr\t-456(a6)";
#define DoIO(ioRequest) __DoIO((ioRequest), SysBase)

void __SendIO(__reg("a1") struct IORequest * ioRequest, __reg("a6") struct ExecBase *)="\tjsr\t-462(a6)";
#define SendIO(ioRequest) __SendIO((ioRequest), SysBase)

struct IORequest * __CheckIO(__reg("a1") struct IORequest * ioRequest, __reg("a6") struct ExecBase *)="\tjsr\t-468(a6)";
#define CheckIO(ioRequest) __CheckIO((ioRequest), SysBase)

BYTE __WaitIO(__reg("a1") struct IORequest * ioRequest, __reg("a6") struct ExecBase *)="\tjsr\t-474(a6)";
#define WaitIO(ioRequest) __WaitIO((ioRequest), SysBase)

void __AbortIO(__reg("a1") struct IORequest * ioRequest, __reg("a6") struct ExecBase *)="\tjsr\t-480(a6)";
#define AbortIO(ioRequest) __AbortIO((ioRequest), SysBase)

void __AddResource(__reg("a1") APTR resource, __reg("a6") struct ExecBase *)="\tjsr\t-486(a6)";
#define AddResource(resource) __AddResource((resource), SysBase)

void __RemResource(__reg("a1") APTR resource, __reg("a6") struct ExecBase *)="\tjsr\t-492(a6)";
#define RemResource(resource) __RemResource((resource), SysBase)

APTR __OpenResource(__reg("a1") UBYTE * resName, __reg("a6") struct ExecBase *)="\tjsr\t-498(a6)";
#define OpenResource(resName) __OpenResource((resName), SysBase)

APTR __RawDoFmt(__reg("a0") UBYTE * formatString, __reg("a1") APTR dataStream, __reg("a2") void (*putChProc)(), __reg("a3") APTR putChData, __reg("a6") struct ExecBase *)="\tjsr\t-522(a6)";
#define RawDoFmt(formatString, dataStream, putChProc, putChData) __RawDoFmt((formatString), (dataStream), (putChProc), (putChData), SysBase)

ULONG __GetCC(__reg("a6") struct ExecBase *)="\tjsr\t-528(a6)";
#define GetCC() __GetCC(SysBase)

ULONG __TypeOfMem(__reg("a1") APTR address, __reg("a6") struct ExecBase *)="\tjsr\t-534(a6)";
#define TypeOfMem(address) __TypeOfMem((address), SysBase)

ULONG __Procure(__reg("a0") struct SignalSemaphore * sigSem, __reg("a1") struct SemaphoreMessage * bidMsg, __reg("a6") struct ExecBase *)="\tjsr\t-540(a6)";
#define Procure(sigSem, bidMsg) __Procure((sigSem), (bidMsg), SysBase)

void __Vacate(__reg("a0") struct SignalSemaphore * sigSem, __reg("a1") struct SemaphoreMessage * bidMsg, __reg("a6") struct ExecBase *)="\tjsr\t-546(a6)";
#define Vacate(sigSem, bidMsg) __Vacate((sigSem), (bidMsg), SysBase)

struct Library * __OpenLibrary(__reg("a1") UBYTE * libName, __reg("d0") unsigned long version, __reg("a6") struct ExecBase *)="\tjsr\t-552(a6)";
#define OpenLibrary(libName, version) __OpenLibrary((libName), (version), SysBase)

void __InitSemaphore(__reg("a0") struct SignalSemaphore * sigSem, __reg("a6") struct ExecBase *)="\tjsr\t-558(a6)";
#define InitSemaphore(sigSem) __InitSemaphore((sigSem), SysBase)

void __ObtainSemaphore(__reg("a0") struct SignalSemaphore * sigSem, __reg("a6") struct ExecBase *)="\tjsr\t-564(a6)";
#define ObtainSemaphore(sigSem) __ObtainSemaphore((sigSem), SysBase)

void __ReleaseSemaphore(__reg("a0") struct SignalSemaphore * sigSem, __reg("a6") struct ExecBase *)="\tjsr\t-570(a6)";
#define ReleaseSemaphore(sigSem) __ReleaseSemaphore((sigSem), SysBase)

ULONG __AttemptSemaphore(__reg("a0") struct SignalSemaphore * sigSem, __reg("a6") struct ExecBase *)="\tjsr\t-576(a6)";
#define AttemptSemaphore(sigSem) __AttemptSemaphore((sigSem), SysBase)

void __ObtainSemaphoreList(__reg("a0") struct List * sigSem, __reg("a6") struct ExecBase *)="\tjsr\t-582(a6)";
#define ObtainSemaphoreList(sigSem) __ObtainSemaphoreList((sigSem), SysBase)

void __ReleaseSemaphoreList(__reg("a0") struct List * sigSem, __reg("a6") struct ExecBase *)="\tjsr\t-588(a6)";
#define ReleaseSemaphoreList(sigSem) __ReleaseSemaphoreList((sigSem), SysBase)

struct SignalSemaphore * __FindSemaphore(__reg("a1") UBYTE * sigSem, __reg("a6") struct ExecBase *)="\tjsr\t-594(a6)";
#define FindSemaphore(sigSem) __FindSemaphore((sigSem), SysBase)

void __AddSemaphore(__reg("a1") struct SignalSemaphore * sigSem, __reg("a6") struct ExecBase *)="\tjsr\t-600(a6)";
#define AddSemaphore(sigSem) __AddSemaphore((sigSem), SysBase)

void __RemSemaphore(__reg("a1") struct SignalSemaphore * sigSem, __reg("a6") struct ExecBase *)="\tjsr\t-606(a6)";
#define RemSemaphore(sigSem) __RemSemaphore((sigSem), SysBase)

ULONG __SumKickData(__reg("a6") struct ExecBase *)="\tjsr\t-612(a6)";
#define SumKickData() __SumKickData(SysBase)

void __AddMemList(__reg("d0") unsigned long size, __reg("d1") unsigned long attributes, __reg("d2") long pri, __reg("a0") APTR base, __reg("a1") UBYTE * name, __reg("a6") struct ExecBase *)="\tjsr\t-618(a6)";
#define AddMemList(size, attributes, pri, base, name) __AddMemList((size), (attributes), (pri), (base), (name), SysBase)

void __CopyMem(__reg("a0") APTR source, __reg("a1") APTR dest, __reg("d0") unsigned long size, __reg("a6") struct ExecBase *)="\tjsr\t-624(a6)";
#define CopyMem(source, dest, size) __CopyMem((source), (dest), (size), SysBase)

void __CopyMemQuick(__reg("a0") APTR source, __reg("a1") APTR dest, __reg("d0") unsigned long size, __reg("a6") struct ExecBase *)="\tjsr\t-630(a6)";
#define CopyMemQuick(source, dest, size) __CopyMemQuick((source), (dest), (size), SysBase)

void __CacheClearU(__reg("a6") struct ExecBase *)="\tjsr\t-636(a6)";
#define CacheClearU() __CacheClearU(SysBase)

void __CacheClearE(__reg("a0") APTR address, __reg("d0") unsigned long length, __reg("d1") unsigned long caches, __reg("a6") struct ExecBase *)="\tjsr\t-642(a6)";
#define CacheClearE(address, length, caches) __CacheClearE((address), (length), (caches), SysBase)

ULONG __CacheControl(__reg("d0") unsigned long cacheBits, __reg("d1") unsigned long cacheMask, __reg("a6") struct ExecBase *)="\tjsr\t-648(a6)";
#define CacheControl(cacheBits, cacheMask) __CacheControl((cacheBits), (cacheMask), SysBase)

APTR __CreateIORequest(__reg("a0") struct MsgPort * port, __reg("d0") unsigned long size, __reg("a6") struct ExecBase *)="\tjsr\t-654(a6)";
#define CreateIORequest(port, size) __CreateIORequest((port), (size), SysBase)

void __DeleteIORequest(__reg("a0") APTR iorequest, __reg("a6") struct ExecBase *)="\tjsr\t-660(a6)";
#define DeleteIORequest(iorequest) __DeleteIORequest((iorequest), SysBase)

struct MsgPort * __CreateMsgPort(__reg("a6") struct ExecBase *)="\tjsr\t-666(a6)";
#define CreateMsgPort() __CreateMsgPort(SysBase)

void __DeleteMsgPort(__reg("a0") struct MsgPort * port, __reg("a6") struct ExecBase *)="\tjsr\t-672(a6)";
#define DeleteMsgPort(port) __DeleteMsgPort((port), SysBase)

void __ObtainSemaphoreShared(__reg("a0") struct SignalSemaphore * sigSem, __reg("a6") struct ExecBase *)="\tjsr\t-678(a6)";
#define ObtainSemaphoreShared(sigSem) __ObtainSemaphoreShared((sigSem), SysBase)

APTR __AllocVec(__reg("d0") unsigned long byteSize, __reg("d1") unsigned long requirements, __reg("a6") struct ExecBase *)="\tjsr\t-684(a6)";
#define AllocVec(byteSize, requirements) __AllocVec((byteSize), (requirements), SysBase)

void __FreeVec(__reg("a1") APTR memoryBlock, __reg("a6") struct ExecBase *)="\tjsr\t-690(a6)";
#define FreeVec(memoryBlock) __FreeVec((memoryBlock), SysBase)

APTR __CreatePool(__reg("d0") unsigned long requirements, __reg("d1") unsigned long puddleSize, __reg("d2") unsigned long threshSize, __reg("a6") struct ExecBase *)="\tjsr\t-696(a6)";
#define CreatePool(requirements, puddleSize, threshSize) __CreatePool((requirements), (puddleSize), (threshSize), SysBase)

void __DeletePool(__reg("a0") APTR poolHeader, __reg("a6") struct ExecBase *)="\tjsr\t-702(a6)";
#define DeletePool(poolHeader) __DeletePool((poolHeader), SysBase)

APTR __AllocPooled(__reg("a0") APTR poolHeader, __reg("d0") unsigned long memSize, __reg("a6") struct ExecBase *)="\tjsr\t-708(a6)";
#define AllocPooled(poolHeader, memSize) __AllocPooled((poolHeader), (memSize), SysBase)

void __FreePooled(__reg("a0") APTR poolHeader, __reg("a1") APTR memory, __reg("d0") unsigned long memSize, __reg("a6") struct ExecBase *)="\tjsr\t-714(a6)";
#define FreePooled(poolHeader, memory, memSize) __FreePooled((poolHeader), (memory), (memSize), SysBase)

ULONG __AttemptSemaphoreShared(__reg("a0") struct SignalSemaphore * sigSem, __reg("a6") struct ExecBase *)="\tjsr\t-720(a6)";
#define AttemptSemaphoreShared(sigSem) __AttemptSemaphoreShared((sigSem), SysBase)

void __ColdReboot(__reg("a6") struct ExecBase *)="\tjsr\t-726(a6)";
#define ColdReboot() __ColdReboot(SysBase)

void __StackSwap(__reg("a0") struct StackSwapStruct * newStack, __reg("a6") struct ExecBase *)="\tjsr\t-732(a6)";
#define StackSwap(newStack) __StackSwap((newStack), SysBase)

void __ChildFree(__reg("d0") APTR tid, __reg("a6") struct ExecBase *)="\tjsr\t-738(a6)";
#define ChildFree(tid) __ChildFree((tid), SysBase)

void __ChildOrphan(__reg("d0") APTR tid, __reg("a6") struct ExecBase *)="\tjsr\t-744(a6)";
#define ChildOrphan(tid) __ChildOrphan((tid), SysBase)

void __ChildStatus(__reg("d0") APTR tid, __reg("a6") struct ExecBase *)="\tjsr\t-750(a6)";
#define ChildStatus(tid) __ChildStatus((tid), SysBase)

void __ChildWait(__reg("d0") APTR tid, __reg("a6") struct ExecBase *)="\tjsr\t-756(a6)";
#define ChildWait(tid) __ChildWait((tid), SysBase)

APTR __CachePreDMA(__reg("a0") APTR address, __reg("a1") ULONG * length, __reg("d0") unsigned long flags, __reg("a6") struct ExecBase *)="\tjsr\t-762(a6)";
#define CachePreDMA(address, length, flags) __CachePreDMA((address), (length), (flags), SysBase)

void __CachePostDMA(__reg("a0") APTR address, __reg("a1") ULONG * length, __reg("d0") unsigned long flags, __reg("a6") struct ExecBase *)="\tjsr\t-768(a6)";
#define CachePostDMA(address, length, flags) __CachePostDMA((address), (length), (flags), SysBase)

void __AddMemHandler(__reg("a1") struct Interrupt * memhand, __reg("a6") struct ExecBase *)="\tjsr\t-774(a6)";
#define AddMemHandler(memhand) __AddMemHandler((memhand), SysBase)

void __RemMemHandler(__reg("a1") struct Interrupt * memhand, __reg("a6") struct ExecBase *)="\tjsr\t-780(a6)";
#define RemMemHandler(memhand) __RemMemHandler((memhand), SysBase)

ULONG __ObtainQuickVector(__reg("a0") APTR interruptCode, __reg("a6") struct ExecBase *)="\tjsr\t-786(a6)";
#define ObtainQuickVector(interruptCode) __ObtainQuickVector((interruptCode), SysBase)

#endif /*  _VBCCINLINE_EXEC_H  */
