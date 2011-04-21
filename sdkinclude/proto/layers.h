#ifndef _PROTO_LAYERS_H
#define _PROTO_LAYERS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_LAYERS_PROTOS_H
#include <clib/layers_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *LayersBase;
#endif

#ifdef __GNUC__
#include <inline/layers.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/layers_protos.h>
#endif
#else
#include <pragma/layers_lib.h>
#endif

#endif	/*  _PROTO_LAYERS_H  */
