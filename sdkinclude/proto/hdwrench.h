#ifndef _PROTO_HDWRENCH_H
#define _PROTO_HDWRENCH_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_HDWRENCH_PROTOS_H
#include <clib/hdwrench_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *HDWBase;
#endif

#ifdef __GNUC__
#include <inline/hdwrench.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/hdwrench_protos.h>
#endif
#else
#include <pragma/hdwrench_lib.h>
#endif

#endif	/*  _PROTO_HDWRENCH_H  */
