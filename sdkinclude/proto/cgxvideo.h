#ifndef _PROTO_CGXVIDEO_H
#define _PROTO_CGXVIDEO_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_CGXVIDEO_PROTOS_H
#include <clib/cgxvideo_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *CGXVideoBase;
#endif

#ifdef __GNUC__
#include <inline/cgxvideo.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/cgxvideo_protos.h>
#endif
#else
#include <pragma/cgxvideo_lib.h>
#endif

#endif	/*  _PROTO_CGXVIDEO_H  */
