#ifndef _PROTO_MUICLASS_H
#define _PROTO_MUICLASS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_MUICLASS_PROTOS_H
#include <clib/muiclass_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *MUIClassBase;
#endif

#ifdef __GNUC__
#include <inline/muiclass.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/muiclass_protos.h>
#endif
#else
#include <pragma/muiclass_lib.h>
#endif

#endif	/*  _PROTO_MUICLASS_H  */
