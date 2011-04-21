#ifndef _PROTO_REQUESTER_H
#define _PROTO_REQUESTER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_REQUESTER_PROTOS_H
#include <clib/requester_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *RequesterBase;
#endif

#ifdef __GNUC__
#include <inline/requester.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/requester_protos.h>
#endif
#else
#include <pragma/requester_lib.h>
#endif

#endif	/*  _PROTO_REQUESTER_H  */
