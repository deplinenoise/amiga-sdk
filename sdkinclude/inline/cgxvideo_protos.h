#ifndef _VBCCINLINE_CGXVIDEO_H
#define _VBCCINLINE_CGXVIDEO_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct VLayerHandle * __CreateVLayerHandleTagList(__reg("a0") struct Screen * Screen, __reg("a1") struct TagItem * Tags, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define CreateVLayerHandleTagList(Screen, Tags) __CreateVLayerHandleTagList((Screen), (Tags), CGXVideoBase)

ULONG __DeleteVLayerHandle(__reg("a0") struct VLayerHandle * VLayerHandle, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define DeleteVLayerHandle(VLayerHandle) __DeleteVLayerHandle((VLayerHandle), CGXVideoBase)

ULONG __AttachVLayerTagList(__reg("a0") struct VLayerHandle * VLayerHandle, __reg("a1") struct Window * Window, __reg("a2") struct TagItem * Tags, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define AttachVLayerTagList(VLayerHandle, Window, Tags) __AttachVLayerTagList((VLayerHandle), (Window), (Tags), CGXVideoBase)

ULONG __DetachVLayer(__reg("a0") struct VLayerHandle * VLayerHandle, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define DetachVLayer(VLayerHandle) __DetachVLayer((VLayerHandle), CGXVideoBase)

ULONG __GetVLayerAttr(__reg("a0") struct VLayerHandle * VLayerHandle, __reg("d0") ULONG AttrID, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define GetVLayerAttr(VLayerHandle, AttrID) __GetVLayerAttr((VLayerHandle), (AttrID), CGXVideoBase)

ULONG __LockVLayer(__reg("a0") struct VLayerHandle * VLayerHandle, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define LockVLayer(VLayerHandle) __LockVLayer((VLayerHandle), CGXVideoBase)

ULONG __UnlockVLayer(__reg("a0") struct VLayerHandle * VLayerHandle, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define UnlockVLayer(VLayerHandle) __UnlockVLayer((VLayerHandle), CGXVideoBase)

void __SetVLayerAttrTagList(__reg("a0") struct VLayerHandle * VLayerHandle, __reg("a1") struct TagItem * Tags, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define SetVLayerAttrTagList(VLayerHandle, Tags) __SetVLayerAttrTagList((VLayerHandle), (Tags), CGXVideoBase)

#endif /*  _VBCCINLINE_CGXVIDEO_H  */
