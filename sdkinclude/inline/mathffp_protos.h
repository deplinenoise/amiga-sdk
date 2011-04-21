#ifndef _VBCCINLINE_MATHFFP_H
#define _VBCCINLINE_MATHFFP_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

LONG __SPFix(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define SPFix(parm) __SPFix((parm), MathBase)

FLOAT __SPFlt(__reg("d0") long integer, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define SPFlt(integer) __SPFlt((integer), MathBase)

LONG __SPCmp(__reg("d1") FLOAT leftParm, __reg("d0") FLOAT rightParm, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define SPCmp(leftParm, rightParm) __SPCmp((leftParm), (rightParm), MathBase)

LONG __SPTst(__reg("d1") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define SPTst(parm) __SPTst((parm), MathBase)

FLOAT __SPAbs(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define SPAbs(parm) __SPAbs((parm), MathBase)

FLOAT __SPNeg(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define SPNeg(parm) __SPNeg((parm), MathBase)

FLOAT __SPAdd(__reg("d1") FLOAT leftParm, __reg("d0") FLOAT rightParm, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define SPAdd(leftParm, rightParm) __SPAdd((leftParm), (rightParm), MathBase)

FLOAT __SPSub(__reg("d1") FLOAT leftParm, __reg("d0") FLOAT rightParm, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define SPSub(leftParm, rightParm) __SPSub((leftParm), (rightParm), MathBase)

FLOAT __SPMul(__reg("d1") FLOAT leftParm, __reg("d0") FLOAT rightParm, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define SPMul(leftParm, rightParm) __SPMul((leftParm), (rightParm), MathBase)

FLOAT __SPDiv(__reg("d1") FLOAT leftParm, __reg("d0") FLOAT rightParm, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define SPDiv(leftParm, rightParm) __SPDiv((leftParm), (rightParm), MathBase)

FLOAT __SPFloor(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define SPFloor(parm) __SPFloor((parm), MathBase)

FLOAT __SPCeil(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define SPCeil(parm) __SPCeil((parm), MathBase)

#endif /*  _VBCCINLINE_MATHFFP_H  */
