#ifndef _PROTO_PPC_H
#define _PROTO_PPC_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_PPC_PROTOS_H
#include <clib/ppc_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *PPCLibBase;
#endif

#ifdef __GNUC__
#include <inline/ppc.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/ppc_protos.h>
#endif
#else
#include <pragma/ppc_lib.h>
#endif

#endif	/*  _PROTO_PPC_H  */
