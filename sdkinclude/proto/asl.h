#ifndef _PROTO_ASL_H
#define _PROTO_ASL_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_ASL_PROTOS_H
#include <clib/asl_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *AslBase;
#endif

#ifdef __GNUC__
#include <inline/asl.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/asl_protos.h>
#endif
#else
#include <pragma/asl_lib.h>
#endif

#endif	/*  _PROTO_ASL_H  */
