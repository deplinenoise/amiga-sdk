#ifndef _PROTO_ICON_H
#define _PROTO_ICON_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_ICON_PROTOS_H
#include <clib/icon_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *IconBase;
#endif

#ifdef __GNUC__
#include <inline/icon.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/icon_protos.h>
#endif
#else
#include <pragma/icon_lib.h>
#endif

#endif	/*  _PROTO_ICON_H  */
