// homemade by Kalms

#ifndef _VBCCINLINE_EXEC_H
#define _VBCCINLINE_CIA_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct Interrupt *AddICRVector(__reg("a6") struct Library *resource, __reg("d0") long iCRBit, __reg("a1") struct Interrupt *interrupt) = "\tjsr\t-6(a6)";
void RemICRVector(__reg("a6") struct Library *resource, __reg("d0") long iCRBit, __reg("a1") struct Interrupt *interrupt) = "\tjsr\t-12(a6)";
WORD AbleICR(__reg("a6") struct Library *resource, __reg("d0") long mask ) = "\tjsr\t-18(a6)";
WORD SetICR(__reg("a6") struct Library *resource, __reg("d0") long mask ) = "\tjsr\t-24(a6)"; 

#endif /*  _VBCCINLINE_CIA_H  */
