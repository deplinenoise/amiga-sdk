#ifndef _PROTO_DATATYPES_H
#define _PROTO_DATATYPES_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_DATATYPES_PROTOS_H
#include <clib/datatypes_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *DataTypesBase;
#endif

#ifdef __GNUC__
#include <inline/datatypes.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/datatypes_protos.h>
#endif
#else
#include <pragma/datatypes_lib.h>
#endif

#endif	/*  _PROTO_DATATYPES_H  */
