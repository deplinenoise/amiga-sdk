#ifndef _PROTO_WARP3D_H
#define _PROTO_WARP3D_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_WARP3D_PROTOS_H
#include <clib/Warp3D_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *Warp3DBase;
#endif

#ifdef __GNUC__
#include <inline/Warp3D.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/Warp3D_protos.h>
#endif
#else
#include <pragma/Warp3D_lib.h>
#endif

#endif	/*  _PROTO_WARP3D_H  */
