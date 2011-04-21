#ifndef _PROTO_BATTCLOCK_H
#define _PROTO_BATTCLOCK_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_BATTCLOCK_PROTOS_H
#include <clib/battclock_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *BattClockBase;
#endif

#ifdef __GNUC__
#include <inline/battclock.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/battclock_protos.h>
#endif
#else
#include <pragma/battclock_lib.h>
#endif

#endif	/*  _PROTO_BATTCLOCK_H  */
