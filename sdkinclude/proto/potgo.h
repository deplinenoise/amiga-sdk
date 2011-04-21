#ifndef _PROTO_POTGO_H
#define _PROTO_POTGO_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_POTGO_PROTOS_H
#include <clib/potgo_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *PotgoBase;
#endif

#ifdef __GNUC__
#include <inline/potgo.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/potgo_protos.h>
#endif
#else
#include <pragma/potgo_lib.h>
#endif

#endif	/*  _PROTO_POTGO_H  */
