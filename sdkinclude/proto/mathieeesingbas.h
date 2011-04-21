#ifndef _PROTO_MATHIEEESINGBAS_H
#define _PROTO_MATHIEEESINGBAS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_MATHIEEESINGBAS_PROTOS_H
#include <clib/mathieeesingbas_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct MathIEEEBase *MathIeeeSingBasBase;
#endif

#ifdef __GNUC__
#include <inline/mathieeesingbas.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/mathieeesingbas_protos.h>
#endif
#else
#include <pragma/mathieeesingbas_lib.h>
#endif

#endif	/*  _PROTO_MATHIEEESINGBAS_H  */
