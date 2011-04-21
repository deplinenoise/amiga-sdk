#ifndef _PROTO_IFFPARSE_H
#define _PROTO_IFFPARSE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_IFFPARSE_PROTOS_H
#include <clib/iffparse_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *IFFParseBase;
#endif

#ifdef __GNUC__
#include <inline/iffparse.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/iffparse_protos.h>
#endif
#else
#include <pragma/iffparse_lib.h>
#endif

#endif	/*  _PROTO_IFFPARSE_H  */
