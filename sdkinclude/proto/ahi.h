#ifndef _PROTO_AHI_H
#define _PROTO_AHI_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_AHI_PROTOS_H
#include <clib/ahi_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *AHIBase;
#endif

#ifdef __GNUC__
#include <inline/ahi.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/ahi_protos.h>
#endif
#else
#include <pragma/ahi_lib.h>
#endif

#endif	/*  _PROTO_AHI_H  */
