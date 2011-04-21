#ifndef _PROTO_CGXDITHER_H
#define _PROTO_CGXDITHER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_CGXDITHER_PROTOS_H
#include <clib/cgxdither_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *CGXDitherBase;
#endif

#ifdef __GNUC__
#include <inline/cgxdither.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/cgxdither_protos.h>
#endif
#else
#include <pragma/cgxdither_lib.h>
#endif

#endif	/*  _PROTO_CGXDITHER_H  */
