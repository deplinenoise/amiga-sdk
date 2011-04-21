#ifndef _VBCCINLINE_ASL_H
#define _VBCCINLINE_ASL_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct FileRequester * __AllocFileRequest(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define AllocFileRequest() __AllocFileRequest(AslBase)

void __FreeFileRequest(__reg("a0") struct FileRequester * fileReq, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define FreeFileRequest(fileReq) __FreeFileRequest((fileReq), AslBase)

BOOL __RequestFile(__reg("a0") struct FileRequester * fileReq, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define RequestFile(fileReq) __RequestFile((fileReq), AslBase)

APTR __AllocAslRequest(__reg("d0") unsigned long reqType, __reg("a0") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define AllocAslRequest(reqType, tagList) __AllocAslRequest((reqType), (tagList), AslBase)

void __FreeAslRequest(__reg("a0") APTR requester, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define FreeAslRequest(requester) __FreeAslRequest((requester), AslBase)

BOOL __AslRequest(__reg("a0") APTR requester, __reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define AslRequest(requester, tagList) __AslRequest((requester), (tagList), AslBase)

#endif /*  _VBCCINLINE_ASL_H  */
