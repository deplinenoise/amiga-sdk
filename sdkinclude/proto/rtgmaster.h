#ifndef _PROTO_RTGMASTER_H
#define _PROTO_RTGMASTER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_RTGMASTER_PROTOS_H
#include <clib/rtgmaster_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *RTGMasterBase;
#endif

#ifdef __GNUC__
#include <inline/rtgmaster.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/rtgmaster_protos.h>
#endif
#else
#include <pragma/rtgmaster_lib.h>
#endif

#endif	/*  _PROTO_RTGMASTER_H  */
