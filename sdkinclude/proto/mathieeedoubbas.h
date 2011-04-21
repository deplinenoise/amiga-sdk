#ifndef _PROTO_MATHIEEEDOUBBAS_H
#define _PROTO_MATHIEEEDOUBBAS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_MATHIEEEDOUBBAS_PROTOS_H
#include <clib/mathieeedoubbas_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct MathIEEEBase *MathIeeeDoubBasBase;
#endif

#ifdef __GNUC__
#include <inline/mathieeedoubbas.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/mathieeedoubbas_protos.h>
#endif
#else
#include <pragma/mathieeedoubbas_lib.h>
#endif

#endif	/*  _PROTO_MATHIEEEDOUBBAS_H  */
