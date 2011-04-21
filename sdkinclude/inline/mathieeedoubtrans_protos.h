#ifndef _VBCCINLINE_MATHIEEEDOUBTRANS_H
#define _VBCCINLINE_MATHIEEEDOUBTRANS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

DOUBLE __IEEEDPFieee(__reg("d0") FLOAT single, __reg("a6") struct MathIEEEBase *)="\tjsr\t-108(a6)";
#define IEEEDPFieee(single) __IEEEDPFieee((single), MathIeeeDoubTransBase)

#endif /*  _VBCCINLINE_MATHIEEEDOUBTRANS_H  */
