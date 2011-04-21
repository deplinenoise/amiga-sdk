#ifndef _PROTO_LAYOUT_H
#define _PROTO_LAYOUT_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_LAYOUT_PROTOS_H
#include <clib/layout_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *LayoutBase;
#endif

#ifdef __GNUC__
#include <inline/layout.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/layout_protos.h>
#endif
#else
#include <pragma/layout_lib.h>
#endif

#endif	/*  _PROTO_LAYOUT_H  */
