#ifndef _PROTO_MATHFFP_H
#define _PROTO_MATHFFP_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_MATHFFP_PROTOS_H
#include <clib/mathffp_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *MathBase;
#endif

#ifdef __GNUC__
#include <inline/mathffp.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/mathffp_protos.h>
#endif
#else
#include <pragma/mathffp_lib.h>
#endif

#endif	/*  _PROTO_MATHFFP_H  */
