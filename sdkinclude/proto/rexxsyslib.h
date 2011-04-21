#ifndef _PROTO_REXXSYSLIB_H
#define _PROTO_REXXSYSLIB_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_REXXSYSLIB_PROTOS_H
#include <clib/rexxsyslib_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct RxsLib *RexxSysBase;
#endif

#ifdef __GNUC__
#include <inline/rexxsyslib.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/rexxsyslib_protos.h>
#endif
#else
#include <pragma/rexxsyslib_lib.h>
#endif

#endif	/*  _PROTO_REXXSYSLIB_H  */
