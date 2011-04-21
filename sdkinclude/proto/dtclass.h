#ifndef _PROTO_DTCLASS_H
#define _PROTO_DTCLASS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_DTCLASS_PROTOS_H
#include <clib/dtclass_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *DTClassBase;
#endif

#ifdef __GNUC__
#include <inline/dtclass.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/dtclass_protos.h>
#endif
#else
#include <pragma/dtclass_lib.h>
#endif

#endif	/*  _PROTO_DTCLASS_H  */
