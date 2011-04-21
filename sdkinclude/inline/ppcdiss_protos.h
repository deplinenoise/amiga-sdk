#ifndef _VBCCINLINE_PPCDISS_H
#define _VBCCINLINE_PPCDISS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

APTR __CreateDisAssHandleTagList(__reg("a0") struct  TagItem * TagList, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define CreateDisAssHandleTagList(TagList) __CreateDisAssHandleTagList((TagList), PPCDissBase)

void __DeleteDisAssHandle(__reg("a0") APTR DissHandle, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define DeleteDisAssHandle(DissHandle) __DeleteDisAssHandle((DissHandle), PPCDissBase)

ULONG __DisAssTagList(__reg("a0") APTR DissHandle, __reg("a1") struct TagItem * TagList, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define DisAssTagList(DissHandle, TagList) __DisAssTagList((DissHandle), (TagList), PPCDissBase)

#endif /*  _VBCCINLINE_PPCDISS_H  */
