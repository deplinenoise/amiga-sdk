#ifndef _PROTO_REALTIME_H
#define _PROTO_REALTIME_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_REALTIME_PROTOS_H
#include <clib/realtime_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct RealTimeBase *RealTimeBase;
#endif

#ifdef __GNUC__
#include <inline/realtime.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/realtime_protos.h>
#endif
#else
#include <pragma/realtime_lib.h>
#endif

#endif	/*  _PROTO_REALTIME_H  */
