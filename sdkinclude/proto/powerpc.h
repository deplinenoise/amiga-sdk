#ifndef _PROTO_POWERPC_H
#define _PROTO_POWERPC_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_POWERPC_PROTOS_H
#include <clib/powerpc_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *PowerPCBase;
#endif

#ifdef __GNUC__
#include <inline/powerpc.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/powerpc_protos.h>
#endif
#else
#include <pragma/powerpc_lib.h>
#endif

#endif	/*  _PROTO_POWERPC_H  */
