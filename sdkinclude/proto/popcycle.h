#ifndef _PROTO_POPCYCLE_H
#define _PROTO_POPCYCLE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_POPCYCLE_PROTOS_H
#include <clib/popcycle_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *PopCycleBase;
#endif

#ifdef __GNUC__
#include <inline/popcycle.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/popcycle_protos.h>
#endif
#else
#include <pragma/popcycle_lib.h>
#endif

#endif	/*  _PROTO_POPCYCLE_H  */
