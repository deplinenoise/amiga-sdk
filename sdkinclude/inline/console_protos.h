#ifndef _VBCCINLINE_CONSOLE_H
#define _VBCCINLINE_CONSOLE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct InputEvent * __CDInputHandler(__reg("a0") struct InputEvent * events, __reg("a1") struct Library * consoleDevice, __reg("a6") struct Device *)="\tjsr\t-42(a6)";
#define CDInputHandler(events, consoleDevice) __CDInputHandler((events), (consoleDevice), ConsoleDevice)

LONG __RawKeyConvert(__reg("a0") struct InputEvent * events, __reg("a1") STRPTR buffer, __reg("d1") long length, __reg("a2") struct KeyMap * keyMap, __reg("a6") struct Device *)="\tjsr\t-48(a6)";
#define RawKeyConvert(events, buffer, length, keyMap) __RawKeyConvert((events), (buffer), (length), (keyMap), ConsoleDevice)

#endif /*  _VBCCINLINE_CONSOLE_H  */
