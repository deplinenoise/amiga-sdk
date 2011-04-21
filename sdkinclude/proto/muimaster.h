#ifndef _PROTO_MUIMASTER_H
#define _PROTO_MUIMASTER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_MUIMASTER_PROTOS_H
#include <clib/muimaster_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *MUIMasterBase;
#endif

#ifdef __GNUC__
#include <inline/muimaster.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/muimaster_protos.h>
#endif
#else
#include <pragma/muimaster_lib.h>
#endif

#endif	/*  _PROTO_MUIMASTER_H  */
