#ifndef _PROTO_MATHIEEESINGTRANS_H
#define _PROTO_MATHIEEESINGTRANS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_MATHIEEESINGTRANS_PROTOS_H
#include <clib/mathieeesingtrans_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct MathIEEEBase *MathIeeeSingTransBase;
#endif

#ifdef __GNUC__
#include <inline/mathieeesingtrans.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/mathieeesingtrans_protos.h>
#endif
#else
#include <pragma/mathieeesingtrans_lib.h>
#endif

#endif	/*  _PROTO_MATHIEEESINGTRANS_H  */
