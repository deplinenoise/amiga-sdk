#ifndef _PROTO_CHUNKYPPC_H
#define _PROTO_CHUNKYPPC_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_CHUNKYPPC_PROTOS_H
#include <clib/chunkyppc_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *ChunkyPPCBase;
#endif

#ifdef __GNUC__
#include <inline/chunkyppc.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/chunkyppc_protos.h>
#endif
#else
#include <pragma/chunkyppc_lib.h>
#endif

#endif	/*  _PROTO_CHUNKYPPC_H  */
