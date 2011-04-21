#ifndef _PROTO_DOS_H
#define _PROTO_DOS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_DOS_PROTOS_H
#include <clib/dos_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct DosLibrary *DOSBase;
#endif

#ifdef __GNUC__
#include <inline/dos.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/dos_protos.h>
#endif
#else
#include <pragma/dos_lib.h>
#endif

#endif	/*  _PROTO_DOS_H  */
