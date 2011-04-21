#ifndef _VBCCINLINE_POTGO_H
#define _VBCCINLINE_POTGO_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

UWORD __AllocPotBits(__reg("d0") unsigned long bits, __reg("a6") struct Library *)="\tjsr\t-6(a6)";
#define AllocPotBits(bits) __AllocPotBits((bits), PotgoBase)

void __FreePotBits(__reg("d0") unsigned long bits, __reg("a6") struct Library *)="\tjsr\t-12(a6)";
#define FreePotBits(bits) __FreePotBits((bits), PotgoBase)

void __WritePotgo(__reg("d0") unsigned long word, __reg("d1") unsigned long mask, __reg("a6") struct Library *)="\tjsr\t-18(a6)";
#define WritePotgo(word, mask) __WritePotgo((word), (mask), PotgoBase)

#endif /*  _VBCCINLINE_POTGO_H  */
