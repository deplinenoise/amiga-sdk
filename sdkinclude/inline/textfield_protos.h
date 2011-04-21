#ifndef _VBCCINLINE_TEXTFIELD_H
#define _VBCCINLINE_TEXTFIELD_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

Class * __TEXTFIELD_GetClass(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define TEXTFIELD_GetClass() __TEXTFIELD_GetClass(TextFieldBase)

#endif /*  _VBCCINLINE_TEXTFIELD_H  */
