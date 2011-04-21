#ifndef _VBCCINLINE_MATHIEEESINGTRANS_H
#define _VBCCINLINE_MATHIEEESINGTRANS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

FLOAT __IEEESPAtan(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-30(a6)";
#define IEEESPAtan(parm) __IEEESPAtan((parm), MathIeeeSingTransBase)

FLOAT __IEEESPSin(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-36(a6)";
#define IEEESPSin(parm) __IEEESPSin((parm), MathIeeeSingTransBase)

FLOAT __IEEESPCos(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-42(a6)";
#define IEEESPCos(parm) __IEEESPCos((parm), MathIeeeSingTransBase)

FLOAT __IEEESPTan(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-48(a6)";
#define IEEESPTan(parm) __IEEESPTan((parm), MathIeeeSingTransBase)

FLOAT __IEEESPSincos(__reg("a0") FLOAT * cosptr, __reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-54(a6)";
#define IEEESPSincos(cosptr, parm) __IEEESPSincos((cosptr), (parm), MathIeeeSingTransBase)

FLOAT __IEEESPSinh(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-60(a6)";
#define IEEESPSinh(parm) __IEEESPSinh((parm), MathIeeeSingTransBase)

FLOAT __IEEESPCosh(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-66(a6)";
#define IEEESPCosh(parm) __IEEESPCosh((parm), MathIeeeSingTransBase)

FLOAT __IEEESPTanh(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-72(a6)";
#define IEEESPTanh(parm) __IEEESPTanh((parm), MathIeeeSingTransBase)

FLOAT __IEEESPExp(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-78(a6)";
#define IEEESPExp(parm) __IEEESPExp((parm), MathIeeeSingTransBase)

FLOAT __IEEESPLog(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-84(a6)";
#define IEEESPLog(parm) __IEEESPLog((parm), MathIeeeSingTransBase)

FLOAT __IEEESPPow(__reg("d1") FLOAT exp, __reg("d0") FLOAT arg, __reg("a6") struct MathIEEEBase *)="\tjsr\t-90(a6)";
#define IEEESPPow(exp, arg) __IEEESPPow((exp), (arg), MathIeeeSingTransBase)

FLOAT __IEEESPSqrt(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-96(a6)";
#define IEEESPSqrt(parm) __IEEESPSqrt((parm), MathIeeeSingTransBase)

FLOAT __IEEESPTieee(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-102(a6)";
#define IEEESPTieee(parm) __IEEESPTieee((parm), MathIeeeSingTransBase)

FLOAT __IEEESPFieee(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-108(a6)";
#define IEEESPFieee(parm) __IEEESPFieee((parm), MathIeeeSingTransBase)

FLOAT __IEEESPAsin(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-114(a6)";
#define IEEESPAsin(parm) __IEEESPAsin((parm), MathIeeeSingTransBase)

FLOAT __IEEESPAcos(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-120(a6)";
#define IEEESPAcos(parm) __IEEESPAcos((parm), MathIeeeSingTransBase)

FLOAT __IEEESPLog10(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-126(a6)";
#define IEEESPLog10(parm) __IEEESPLog10((parm), MathIeeeSingTransBase)

#endif /*  _VBCCINLINE_MATHIEEESINGTRANS_H  */
