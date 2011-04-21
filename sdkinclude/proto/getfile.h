#ifndef _PROTO_GETFILE_H
#define _PROTO_GETFILE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_GETFILE_PROTOS_H
#include <clib/getfile_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *GetFileBase;
#endif

#ifdef __GNUC__
#include <inline/getfile.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/getfile_protos.h>
#endif
#else
#include <pragma/getfile_lib.h>
#endif

#endif	/*  _PROTO_GETFILE_H  */
