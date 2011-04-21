#ifndef _PROTO_AHI_SUB_H
#define _PROTO_AHI_SUB_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_AHI_SUB_PROTOS_H
#include <clib/ahi_sub_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *AHIsubBase;
#endif

#ifdef __GNUC__
#include <inline/ahi_sub.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/ahi_sub_protos.h>
#endif
#else
#include <pragma/ahi_sub_lib.h>
#endif

#endif	/*  _PROTO_AHI_SUB_H  */
