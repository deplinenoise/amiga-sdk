#ifndef _VBCCINLINE_TRANSLATOR_H
#define _VBCCINLINE_TRANSLATOR_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

LONG __Translate(__reg("a0") STRPTR inputString, __reg("d0") long inputLength, __reg("a1") STRPTR outputBuffer, __reg("d1") long bufferSize, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define Translate(inputString, inputLength, outputBuffer, bufferSize) __Translate((inputString), (inputLength), (outputBuffer), (bufferSize), TranslatorBase)

#endif /*  _VBCCINLINE_TRANSLATOR_H  */
