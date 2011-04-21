#ifndef _PROTO_PENMAP_H
#define _PROTO_PENMAP_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_PENMAP_PROTOS_H
#include <clib/penmap_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *PenMapBase;
#endif

#ifdef __GNUC__
#include <inline/penmap.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/penmap_protos.h>
#endif
#else
#include <pragma/penmap_lib.h>
#endif

#endif	/*  _PROTO_PENMAP_H  */
