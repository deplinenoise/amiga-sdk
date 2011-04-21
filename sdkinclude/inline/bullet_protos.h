#ifndef _VBCCINLINE_BULLET_H
#define _VBCCINLINE_BULLET_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct GlyphEngine * __OpenEngine(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define OpenEngine() __OpenEngine(BulletBase)

void __CloseEngine(__reg("a0") struct GlyphEngine * glyphEngine, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define CloseEngine(glyphEngine) __CloseEngine((glyphEngine), BulletBase)

ULONG __SetInfoA(__reg("a0") struct GlyphEngine * glyphEngine, __reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define SetInfoA(glyphEngine, tagList) __SetInfoA((glyphEngine), (tagList), BulletBase)

ULONG __ObtainInfoA(__reg("a0") struct GlyphEngine * glyphEngine, __reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define ObtainInfoA(glyphEngine, tagList) __ObtainInfoA((glyphEngine), (tagList), BulletBase)

ULONG __ReleaseInfoA(__reg("a0") struct GlyphEngine * glyphEngine, __reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define ReleaseInfoA(glyphEngine, tagList) __ReleaseInfoA((glyphEngine), (tagList), BulletBase)

#endif /*  _VBCCINLINE_BULLET_H  */
