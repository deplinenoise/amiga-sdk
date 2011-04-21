#ifndef _VBCCINLINE_MATHTRANS_H
#define _VBCCINLINE_MATHTRANS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

FLOAT __SPAtan(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define SPAtan(parm) __SPAtan((parm), MathTransBase)

FLOAT __SPSin(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define SPSin(parm) __SPSin((parm), MathTransBase)

FLOAT __SPCos(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define SPCos(parm) __SPCos((parm), MathTransBase)

FLOAT __SPTan(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define SPTan(parm) __SPTan((parm), MathTransBase)

FLOAT __SPSincos(__reg("d1") FLOAT * cosResult, __reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define SPSincos(cosResult, parm) __SPSincos((cosResult), (parm), MathTransBase)

FLOAT __SPSinh(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define SPSinh(parm) __SPSinh((parm), MathTransBase)

FLOAT __SPCosh(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define SPCosh(parm) __SPCosh((parm), MathTransBase)

FLOAT __SPTanh(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define SPTanh(parm) __SPTanh((parm), MathTransBase)

FLOAT __SPExp(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define SPExp(parm) __SPExp((parm), MathTransBase)

FLOAT __SPLog(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define SPLog(parm) __SPLog((parm), MathTransBase)

FLOAT __SPPow(__reg("d1") FLOAT power, __reg("d0") FLOAT arg, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define SPPow(power, arg) __SPPow((power), (arg), MathTransBase)

FLOAT __SPSqrt(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define SPSqrt(parm) __SPSqrt((parm), MathTransBase)

FLOAT __SPTieee(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define SPTieee(parm) __SPTieee((parm), MathTransBase)

FLOAT __SPFieee(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define SPFieee(parm) __SPFieee((parm), MathTransBase)

FLOAT __SPAsin(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define SPAsin(parm) __SPAsin((parm), MathTransBase)

FLOAT __SPAcos(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define SPAcos(parm) __SPAcos((parm), MathTransBase)

FLOAT __SPLog10(__reg("d0") FLOAT parm, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define SPLog10(parm) __SPLog10((parm), MathTransBase)

#endif /*  _VBCCINLINE_MATHTRANS_H  */
