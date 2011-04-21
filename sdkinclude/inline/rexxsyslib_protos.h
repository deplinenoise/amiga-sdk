#ifndef _VBCCINLINE_REXXSYSLIB_H
#define _VBCCINLINE_REXXSYSLIB_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

UBYTE * __CreateArgstring(__reg("a0") UBYTE * string, __reg("d0") unsigned long length, __reg("a6") struct RxsLib *)="\tjsr\t-126(a6)";
#define CreateArgstring(string, length) __CreateArgstring((string), (length), RexxSysBase)

void __DeleteArgstring(__reg("a0") UBYTE * argstring, __reg("a6") struct RxsLib *)="\tjsr\t-132(a6)";
#define DeleteArgstring(argstring) __DeleteArgstring((argstring), RexxSysBase)

ULONG __LengthArgstring(__reg("a0") UBYTE * argstring, __reg("a6") struct RxsLib *)="\tjsr\t-138(a6)";
#define LengthArgstring(argstring) __LengthArgstring((argstring), RexxSysBase)

struct RexxMsg * __CreateRexxMsg(__reg("a0") struct MsgPort * port, __reg("a1") UBYTE * extension, __reg("d0") UBYTE * host, __reg("a6") struct RxsLib *)="\tjsr\t-144(a6)";
#define CreateRexxMsg(port, extension, host) __CreateRexxMsg((port), (extension), (host), RexxSysBase)

void __DeleteRexxMsg(__reg("a0") struct RexxMsg * packet, __reg("a6") struct RxsLib *)="\tjsr\t-150(a6)";
#define DeleteRexxMsg(packet) __DeleteRexxMsg((packet), RexxSysBase)

void __ClearRexxMsg(__reg("a0") struct RexxMsg * msgptr, __reg("d0") unsigned long count, __reg("a6") struct RxsLib *)="\tjsr\t-156(a6)";
#define ClearRexxMsg(msgptr, count) __ClearRexxMsg((msgptr), (count), RexxSysBase)

BOOL __FillRexxMsg(__reg("a0") struct RexxMsg * msgptr, __reg("d0") unsigned long count, __reg("d1") unsigned long mask, __reg("a6") struct RxsLib *)="\tjsr\t-162(a6)";
#define FillRexxMsg(msgptr, count, mask) __FillRexxMsg((msgptr), (count), (mask), RexxSysBase)

BOOL __IsRexxMsg(__reg("a0") struct RexxMsg * msgptr, __reg("a6") struct RxsLib *)="\tjsr\t-168(a6)";
#define IsRexxMsg(msgptr) __IsRexxMsg((msgptr), RexxSysBase)

void __LockRexxBase(__reg("d0") unsigned long resource, __reg("a6") struct RxsLib *)="\tjsr\t-450(a6)";
#define LockRexxBase(resource) __LockRexxBase((resource), RexxSysBase)

void __UnlockRexxBase(__reg("d0") unsigned long resource, __reg("a6") struct RxsLib *)="\tjsr\t-456(a6)";
#define UnlockRexxBase(resource) __UnlockRexxBase((resource), RexxSysBase)

#endif /*  _VBCCINLINE_REXXSYSLIB_H  */
