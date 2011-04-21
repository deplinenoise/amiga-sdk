#ifndef _PROTO_SCROLLER_H
#define _PROTO_SCROLLER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_SCROLLER_PROTOS_H
#include <clib/scroller_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *ScrollerBase;
#endif

#ifdef __GNUC__
#include <inline/scroller.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/scroller_protos.h>
#endif
#else
#include <pragma/scroller_lib.h>
#endif

#endif	/*  _PROTO_SCROLLER_H  */
