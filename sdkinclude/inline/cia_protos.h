struct Interrupt * __AddICRVector(__reg("a6") struct Library *resource,__reg("d0") long iCRBit,__reg("a1") struct Interrupt *interrupt ,__reg("a6") void *)="\tjsr\t-6(a6)";
#define AddICRVector(x1,x2,x3) __AddICRVector((x1),(x2),(x3),CardResource)
No base defined!
