#ifndef _VBCCINLINE_MATHIEEESINGBAS_H
#define _VBCCINLINE_MATHIEEESINGBAS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

LONG __IEEESPFix(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-30(a6)";
#define IEEESPFix(parm) __IEEESPFix((parm), MathIeeeSingBasBase)

FLOAT __IEEESPFlt(__reg("d0") long integer, __reg("a6") struct MathIEEEBase *)="\tjsr\t-36(a6)";
#define IEEESPFlt(integer) __IEEESPFlt((integer), MathIeeeSingBasBase)

LONG __IEEESPCmp(__reg("d0") FLOAT leftParm, __reg("d1") FLOAT rightParm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-42(a6)";
#define IEEESPCmp(leftParm, rightParm) __IEEESPCmp((leftParm), (rightParm), MathIeeeSingBasBase)

LONG __IEEESPTst(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-48(a6)";
#define IEEESPTst(parm) __IEEESPTst((parm), MathIeeeSingBasBase)

FLOAT __IEEESPAbs(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-54(a6)";
#define IEEESPAbs(parm) __IEEESPAbs((parm), MathIeeeSingBasBase)

FLOAT __IEEESPNeg(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-60(a6)";
#define IEEESPNeg(parm) __IEEESPNeg((parm), MathIeeeSingBasBase)

FLOAT __IEEESPAdd(__reg("d0") FLOAT leftParm, __reg("d1") FLOAT rightParm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-66(a6)";
#define IEEESPAdd(leftParm, rightParm) __IEEESPAdd((leftParm), (rightParm), MathIeeeSingBasBase)

FLOAT __IEEESPSub(__reg("d0") FLOAT leftParm, __reg("d1") FLOAT rightParm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-72(a6)";
#define IEEESPSub(leftParm, rightParm) __IEEESPSub((leftParm), (rightParm), MathIeeeSingBasBase)

FLOAT __IEEESPMul(__reg("d0") FLOAT leftParm, __reg("d1") FLOAT rightParm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-78(a6)";
#define IEEESPMul(leftParm, rightParm) __IEEESPMul((leftParm), (rightParm), MathIeeeSingBasBase)

FLOAT __IEEESPDiv(__reg("d0") FLOAT dividend, __reg("d1") FLOAT divisor, __reg("a6") struct MathIEEEBase *)="\tjsr\t-84(a6)";
#define IEEESPDiv(dividend, divisor) __IEEESPDiv((dividend), (divisor), MathIeeeSingBasBase)

FLOAT __IEEESPFloor(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-90(a6)";
#define IEEESPFloor(parm) __IEEESPFloor((parm), MathIeeeSingBasBase)

FLOAT __IEEESPCeil(__reg("d0") FLOAT parm, __reg("a6") struct MathIEEEBase *)="\tjsr\t-96(a6)";
#define IEEESPCeil(parm) __IEEESPCeil((parm), MathIeeeSingBasBase)

#endif /*  _VBCCINLINE_MATHIEEESINGBAS_H  */
