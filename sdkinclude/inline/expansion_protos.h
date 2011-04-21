#ifndef _VBCCINLINE_EXPANSION_H
#define _VBCCINLINE_EXPANSION_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

void __AddConfigDev(__reg("a0") struct ConfigDev * configDev, __reg("a6") struct ExpansionBase *)="\tjsr\t-30(a6)";
#define AddConfigDev(configDev) __AddConfigDev((configDev), ExpansionBase)

BOOL __AddBootNode(__reg("d0") long bootPri, __reg("d1") unsigned long flags, __reg("a0") struct DeviceNode * deviceNode, __reg("a1") struct ConfigDev * configDev, __reg("a6") struct ExpansionBase *)="\tjsr\t-36(a6)";
#define AddBootNode(bootPri, flags, deviceNode, configDev) __AddBootNode((bootPri), (flags), (deviceNode), (configDev), ExpansionBase)

void __AllocBoardMem(__reg("d0") unsigned long slotSpec, __reg("a6") struct ExpansionBase *)="\tjsr\t-42(a6)";
#define AllocBoardMem(slotSpec) __AllocBoardMem((slotSpec), ExpansionBase)

struct ConfigDev * __AllocConfigDev(__reg("a6") struct ExpansionBase *)="\tjsr\t-48(a6)";
#define AllocConfigDev() __AllocConfigDev(ExpansionBase)

APTR __AllocExpansionMem(__reg("d0") unsigned long numSlots, __reg("d1") unsigned long slotAlign, __reg("a6") struct ExpansionBase *)="\tjsr\t-54(a6)";
#define AllocExpansionMem(numSlots, slotAlign) __AllocExpansionMem((numSlots), (slotAlign), ExpansionBase)

void __ConfigBoard(__reg("a0") APTR board, __reg("a1") struct ConfigDev * configDev, __reg("a6") struct ExpansionBase *)="\tjsr\t-60(a6)";
#define ConfigBoard(board, configDev) __ConfigBoard((board), (configDev), ExpansionBase)

void __ConfigChain(__reg("a0") APTR baseAddr, __reg("a6") struct ExpansionBase *)="\tjsr\t-66(a6)";
#define ConfigChain(baseAddr) __ConfigChain((baseAddr), ExpansionBase)

struct ConfigDev * __FindConfigDev(__reg("a0") struct ConfigDev * oldConfigDev, __reg("d0") long manufacturer, __reg("d1") long product, __reg("a6") struct ExpansionBase *)="\tjsr\t-72(a6)";
#define FindConfigDev(oldConfigDev, manufacturer, product) __FindConfigDev((oldConfigDev), (manufacturer), (product), ExpansionBase)

void __FreeBoardMem(__reg("d0") unsigned long startSlot, __reg("d1") unsigned long slotSpec, __reg("a6") struct ExpansionBase *)="\tjsr\t-78(a6)";
#define FreeBoardMem(startSlot, slotSpec) __FreeBoardMem((startSlot), (slotSpec), ExpansionBase)

void __FreeConfigDev(__reg("a0") struct ConfigDev * configDev, __reg("a6") struct ExpansionBase *)="\tjsr\t-84(a6)";
#define FreeConfigDev(configDev) __FreeConfigDev((configDev), ExpansionBase)

void __FreeExpansionMem(__reg("d0") unsigned long startSlot, __reg("d1") unsigned long numSlots, __reg("a6") struct ExpansionBase *)="\tjsr\t-90(a6)";
#define FreeExpansionMem(startSlot, numSlots) __FreeExpansionMem((startSlot), (numSlots), ExpansionBase)

UBYTE __ReadExpansionByte(__reg("a0") APTR board, __reg("d0") unsigned long offset, __reg("a6") struct ExpansionBase *)="\tjsr\t-96(a6)";
#define ReadExpansionByte(board, offset) __ReadExpansionByte((board), (offset), ExpansionBase)

void __ReadExpansionRom(__reg("a0") APTR board, __reg("a1") struct ConfigDev * configDev, __reg("a6") struct ExpansionBase *)="\tjsr\t-102(a6)";
#define ReadExpansionRom(board, configDev) __ReadExpansionRom((board), (configDev), ExpansionBase)

void __RemConfigDev(__reg("a0") struct ConfigDev * configDev, __reg("a6") struct ExpansionBase *)="\tjsr\t-108(a6)";
#define RemConfigDev(configDev) __RemConfigDev((configDev), ExpansionBase)

void __WriteExpansionByte(__reg("a0") APTR board, __reg("d0") unsigned long offset, __reg("d1") unsigned long byte, __reg("a6") struct ExpansionBase *)="\tjsr\t-114(a6)";
#define WriteExpansionByte(board, offset, byte) __WriteExpansionByte((board), (offset), (byte), ExpansionBase)

void __ObtainConfigBinding(__reg("a6") struct ExpansionBase *)="\tjsr\t-120(a6)";
#define ObtainConfigBinding() __ObtainConfigBinding(ExpansionBase)

void __ReleaseConfigBinding(__reg("a6") struct ExpansionBase *)="\tjsr\t-126(a6)";
#define ReleaseConfigBinding() __ReleaseConfigBinding(ExpansionBase)

void __SetCurrentBinding(__reg("a0") struct CurrentBinding * currentBinding, __reg("d0") unsigned long bindingSize, __reg("a6") struct ExpansionBase *)="\tjsr\t-132(a6)";
#define SetCurrentBinding(currentBinding, bindingSize) __SetCurrentBinding((currentBinding), (bindingSize), ExpansionBase)

ULONG __GetCurrentBinding(__reg("a0") struct CurrentBinding * currentBinding, __reg("d0") unsigned long bindingSize, __reg("a6") struct ExpansionBase *)="\tjsr\t-138(a6)";
#define GetCurrentBinding(currentBinding, bindingSize) __GetCurrentBinding((currentBinding), (bindingSize), ExpansionBase)

struct DeviceNode * __MakeDosNode(__reg("a0") APTR parmPacket, __reg("a6") struct ExpansionBase *)="\tjsr\t-144(a6)";
#define MakeDosNode(parmPacket) __MakeDosNode((parmPacket), ExpansionBase)

BOOL __AddDosNode(__reg("d0") long bootPri, __reg("d1") unsigned long flags, __reg("a0") struct DeviceNode * deviceNode, __reg("a6") struct ExpansionBase *)="\tjsr\t-150(a6)";
#define AddDosNode(bootPri, flags, deviceNode) __AddDosNode((bootPri), (flags), (deviceNode), ExpansionBase)

#endif /*  _VBCCINLINE_EXPANSION_H  */
