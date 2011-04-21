#ifndef _VBCCINLINE_CARDRES_H
#define _VBCCINLINE_CARDRES_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct CardHandle * __OwnCard(__reg("a1") struct CardHandle * handle, __reg("a6") struct Library *)="\tjsr\t-6(a6)";
#define OwnCard(handle) __OwnCard((handle), CardResource)

void __ReleaseCard(__reg("a1") struct CardHandle * handle, __reg("d0") unsigned long flags, __reg("a6") struct Library *)="\tjsr\t-12(a6)";
#define ReleaseCard(handle, flags) __ReleaseCard((handle), (flags), CardResource)

struct CardMemoryMap * __GetCardMap(__reg("a6") struct Library *)="\tjsr\t-18(a6)";
#define GetCardMap() __GetCardMap(CardResource)

BOOL __BeginCardAccess(__reg("a1") struct CardHandle * handle, __reg("a6") struct Library *)="\tjsr\t-24(a6)";
#define BeginCardAccess(handle) __BeginCardAccess((handle), CardResource)

BOOL __EndCardAccess(__reg("a1") struct CardHandle * handle, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define EndCardAccess(handle) __EndCardAccess((handle), CardResource)

UBYTE __ReadCardStatus(__reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define ReadCardStatus() __ReadCardStatus(CardResource)

BOOL __CardResetRemove(__reg("a1") struct CardHandle * handle, __reg("d0") unsigned long flag, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define CardResetRemove(handle, flag) __CardResetRemove((handle), (flag), CardResource)

UBYTE __CardMiscControl(__reg("a1") struct CardHandle * handle, __reg("d1") unsigned long control_bits, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define CardMiscControl(handle, control_bits) __CardMiscControl((handle), (control_bits), CardResource)

ULONG __CardAccessSpeed(__reg("a1") struct CardHandle * handle, __reg("d0") unsigned long nanoseconds, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define CardAccessSpeed(handle, nanoseconds) __CardAccessSpeed((handle), (nanoseconds), CardResource)

LONG __CardProgramVoltage(__reg("a1") struct CardHandle * handle, __reg("d0") unsigned long voltage, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define CardProgramVoltage(handle, voltage) __CardProgramVoltage((handle), (voltage), CardResource)

BOOL __CardResetCard(__reg("a1") struct CardHandle * handle, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define CardResetCard(handle) __CardResetCard((handle), CardResource)

BOOL __CopyTuple(__reg("a1") struct CardHandle * handle, __reg("a0") UBYTE * buffer, __reg("d1") unsigned long tuplecode, __reg("d0") unsigned long size, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define CopyTuple(handle, buffer, tuplecode, size) __CopyTuple((handle), (buffer), (tuplecode), (size), CardResource)

ULONG __DeviceTuple(__reg("a0") UBYTE * tuple_data, __reg("a1") struct DeviceTData * storage, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define DeviceTuple(tuple_data, storage) __DeviceTuple((tuple_data), (storage), CardResource)

struct Resident * __IfAmigaXIP(__reg("a2") struct CardHandle * handle, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define IfAmigaXIP(handle) __IfAmigaXIP((handle), CardResource)

BOOL __CardForceChange(__reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define CardForceChange() __CardForceChange(CardResource)

ULONG __CardChangeCount(__reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define CardChangeCount() __CardChangeCount(CardResource)

ULONG __CardInterface(__reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define CardInterface() __CardInterface(CardResource)

#endif /*  _VBCCINLINE_CARDRES_H  */
