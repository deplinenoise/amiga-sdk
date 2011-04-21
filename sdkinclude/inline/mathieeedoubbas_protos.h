#ifndef _VBCCINLINE_MATHIEEEDOUBBAS_H
#define _VBCCINLINE_MATHIEEEDOUBBAS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

DOUBLE __IEEEDPFlt(__reg("d0") long integer, __reg("a6") struct MathIEEEBase *)="\tjsr\t-36(a6)";
#define IEEEDPFlt(integer) __IEEEDPFlt((integer), MathIeeeDoubBasBase)

#endif /*  _VBCCINLINE_MATHIEEEDOUBBAS_H  */
