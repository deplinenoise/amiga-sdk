#ifndef _VBCCINLINE_DISKFONT_H
#define _VBCCINLINE_DISKFONT_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct TextFont * __OpenDiskFont(__reg("a0") struct TextAttr * textAttr, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define OpenDiskFont(textAttr) __OpenDiskFont((textAttr), DiskfontBase)

LONG __AvailFonts(__reg("a0") STRPTR buffer, __reg("d0") long bufBytes, __reg("d1") long flags, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define AvailFonts(buffer, bufBytes, flags) __AvailFonts((buffer), (bufBytes), (flags), DiskfontBase)

struct FontContentsHeader * __NewFontContents(__reg("a0") void * fontsLock, __reg("a1") STRPTR fontName, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define NewFontContents(fontsLock, fontName) __NewFontContents((void *)(fontsLock), (fontName), DiskfontBase)

void __DisposeFontContents(__reg("a1") struct FontContentsHeader * fontContentsHeader, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define DisposeFontContents(fontContentsHeader) __DisposeFontContents((fontContentsHeader), DiskfontBase)

struct DiskFont * __NewScaledDiskFont(__reg("a0") struct TextFont * sourceFont, __reg("a1") struct TextAttr * destTextAttr, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define NewScaledDiskFont(sourceFont, destTextAttr) __NewScaledDiskFont((sourceFont), (destTextAttr), DiskfontBase)

#endif /*  _VBCCINLINE_DISKFONT_H  */
