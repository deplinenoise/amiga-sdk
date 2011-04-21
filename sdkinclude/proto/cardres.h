#ifndef _PROTO_CARDRES_H
#define _PROTO_CARDRES_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_CARDRES_PROTOS_H
#include <clib/cardres_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *CardResource;
#endif

#ifdef __GNUC__
#include <inline/cardres.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/cardres_protos.h>
#endif
#else
#include <pragma/cardres_lib.h>
#endif

#endif	/*  _PROTO_CARDRES_H  */
