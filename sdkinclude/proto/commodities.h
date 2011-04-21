#ifndef _PROTO_COMMODITIES_H
#define _PROTO_COMMODITIES_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_COMMODITIES_PROTOS_H
#include <clib/commodities_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *CxBase;
#endif

#ifdef __GNUC__
#include <inline/commodities.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/commodities_protos.h>
#endif
#else
#include <pragma/commodities_lib.h>
#endif

#endif	/*  _PROTO_COMMODITIES_H  */
