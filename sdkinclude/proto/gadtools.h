#ifndef _PROTO_GADTOOLS_H
#define _PROTO_GADTOOLS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_GADTOOLS_PROTOS_H
#include <clib/gadtools_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *GadToolsBase;
#endif

#ifdef __GNUC__
#include <inline/gadtools.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/gadtools_protos.h>
#endif
#else
#include <pragma/gadtools_lib.h>
#endif

#endif	/*  _PROTO_GADTOOLS_H  */
