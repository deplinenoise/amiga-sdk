#ifndef _PROTO_TRITON_H
#define _PROTO_TRITON_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_TRITON_PROTOS_H
#include <clib/triton_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *TritonBase;
#endif

#ifdef __GNUC__
#include <inline/triton.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/triton_protos.h>
#endif
#else
#include <pragma/triton_lib.h>
#endif

#endif	/*  _PROTO_TRITON_H  */
