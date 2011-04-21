#ifndef _PROTO_WINDOW_H
#define _PROTO_WINDOW_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_WINDOW_PROTOS_H
#include <clib/window_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *WindowBase;
#endif

#ifdef __GNUC__
#include <inline/window.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/window_protos.h>
#endif
#else
#include <pragma/window_lib.h>
#endif

#endif	/*  _PROTO_WINDOW_H  */
