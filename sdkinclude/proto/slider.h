#ifndef _PROTO_SLIDER_H
#define _PROTO_SLIDER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_SLIDER_PROTOS_H
#include <clib/slider_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *SliderBase;
#endif

#ifdef __GNUC__
#include <inline/slider.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/slider_protos.h>
#endif
#else
#include <pragma/slider_lib.h>
#endif

#endif	/*  _PROTO_SLIDER_H  */
