#ifndef _PROTO_STRING_H
#define _PROTO_STRING_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_STRING_PROTOS_H
#include <clib/string_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *StringBase;
#endif

#ifdef __GNUC__
#include <inline/string.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/string_protos.h>
#endif
#else
#include <pragma/string_lib.h>
#endif

#endif	/*  _PROTO_STRING_H  */
