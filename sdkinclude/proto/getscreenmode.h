#ifndef _PROTO_GETSCREENMODE_H
#define _PROTO_GETSCREENMODE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_GETSCREENMODE_PROTOS_H
#include <clib/getscreenmode_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *GetScreenModeBase;
#endif

#ifdef __GNUC__
#include <inline/getscreenmode.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/getscreenmode_protos.h>
#endif
#else
#include <pragma/getscreenmode_lib.h>
#endif

#endif	/*  _PROTO_GETSCREENMODE_H  */
