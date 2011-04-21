#ifndef _PROTO_PPCDISS_H
#define _PROTO_PPCDISS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_PPCDISS_PROTOS_H
#include <clib/ppcdiss_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *PPCDissBase;
#endif

#ifdef __GNUC__
#include <inline/ppcdiss.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/ppcdiss_protos.h>
#endif
#else
#include <pragma/ppcdiss_lib.h>
#endif

#endif	/*  _PROTO_PPCDISS_H  */
