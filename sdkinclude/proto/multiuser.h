#ifndef _PROTO_MULTIUSER_H
#define _PROTO_MULTIUSER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_MULTIUSER_PROTOS_H
#include <clib/multiuser_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *muBase;
#endif

#ifdef __GNUC__
#include <inline/multiuser.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/multiuser_protos.h>
#endif
#else
#include <pragma/multiuser_lib.h>
#endif

#endif	/*  _PROTO_MULTIUSER_H  */
