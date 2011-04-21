#ifndef _PROTO_INTUITION_H
#define _PROTO_INTUITION_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_INTUITION_PROTOS_H
#include <clib/intuition_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct IntuitionBase *IntuitionBase;
#endif

#ifdef __GNUC__
#include <inline/intuition.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/intuition_protos.h>
#endif
#else
#include <pragma/intuition_lib.h>
#endif

#endif	/*  _PROTO_INTUITION_H  */
