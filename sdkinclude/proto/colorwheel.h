#ifndef _PROTO_COLORWHEEL_H
#define _PROTO_COLORWHEEL_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_COLORWHEEL_PROTOS_H
#include <clib/colorwheel_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *ColorWheelBase;
#endif

#ifdef __GNUC__
#include <inline/colorwheel.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/colorwheel_protos.h>
#endif
#else
#include <pragma/colorwheel_lib.h>
#endif

#endif	/*  _PROTO_COLORWHEEL_H  */
