#ifndef _VBCCINLINE_KEYMAP_H
#define _VBCCINLINE_KEYMAP_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

void __SetKeyMapDefault(__reg("a0") struct KeyMap * keyMap, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define SetKeyMapDefault(keyMap) __SetKeyMapDefault((keyMap), KeymapBase)

struct KeyMap * __AskKeyMapDefault(__reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define AskKeyMapDefault() __AskKeyMapDefault(KeymapBase)

WORD __MapRawKey(__reg("a0") struct InputEvent * event, __reg("a1") STRPTR buffer, __reg("d1") long length, __reg("a2") struct KeyMap * keyMap, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define MapRawKey(event, buffer, length, keyMap) __MapRawKey((event), (buffer), (length), (keyMap), KeymapBase)

LONG __MapANSI(__reg("a0") STRPTR string, __reg("d0") long count, __reg("a1") STRPTR buffer, __reg("d1") long length, __reg("a2") struct KeyMap * keyMap, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define MapANSI(string, count, buffer, length, keyMap) __MapANSI((string), (count), (buffer), (length), (keyMap), KeymapBase)

#endif /*  _VBCCINLINE_KEYMAP_H  */
