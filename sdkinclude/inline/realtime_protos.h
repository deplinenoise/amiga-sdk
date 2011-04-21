#ifndef _VBCCINLINE_REALTIME_H
#define _VBCCINLINE_REALTIME_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

APTR __LockRealTime(__reg("d0") unsigned long lockType, __reg("a6") struct RealTimeBase *)="\tjsr\t-30(a6)";
#define LockRealTime(lockType) __LockRealTime((lockType), RealTimeBase)

void __UnlockRealTime(__reg("a0") APTR lock, __reg("a6") struct RealTimeBase *)="\tjsr\t-36(a6)";
#define UnlockRealTime(lock) __UnlockRealTime((lock), RealTimeBase)

struct Player * __CreatePlayerA(__reg("a0") struct TagItem * tagList, __reg("a6") struct RealTimeBase *)="\tjsr\t-42(a6)";
#define CreatePlayerA(tagList) __CreatePlayerA((tagList), RealTimeBase)

void __DeletePlayer(__reg("a0") struct Player * player, __reg("a6") struct RealTimeBase *)="\tjsr\t-48(a6)";
#define DeletePlayer(player) __DeletePlayer((player), RealTimeBase)

BOOL __SetPlayerAttrsA(__reg("a0") struct Player * player, __reg("a1") struct TagItem * tagList, __reg("a6") struct RealTimeBase *)="\tjsr\t-54(a6)";
#define SetPlayerAttrsA(player, tagList) __SetPlayerAttrsA((player), (tagList), RealTimeBase)

LONG __SetConductorState(__reg("a0") struct Player * player, __reg("d0") unsigned long state, __reg("d1") long time, __reg("a6") struct RealTimeBase *)="\tjsr\t-60(a6)";
#define SetConductorState(player, state, time) __SetConductorState((player), (state), (time), RealTimeBase)

BOOL __ExternalSync(__reg("a0") struct Player * player, __reg("d0") long minTime, __reg("d1") long maxTime, __reg("a6") struct RealTimeBase *)="\tjsr\t-66(a6)";
#define ExternalSync(player, minTime, maxTime) __ExternalSync((player), (minTime), (maxTime), RealTimeBase)

struct Conductor * __NextConductor(__reg("a0") struct Conductor * previousConductor, __reg("a6") struct RealTimeBase *)="\tjsr\t-72(a6)";
#define NextConductor(previousConductor) __NextConductor((previousConductor), RealTimeBase)

struct Conductor * __FindConductor(__reg("a0") STRPTR name, __reg("a6") struct RealTimeBase *)="\tjsr\t-78(a6)";
#define FindConductor(name) __FindConductor((name), RealTimeBase)

ULONG __GetPlayerAttrsA(__reg("a0") struct Player * player, __reg("a1") struct TagItem * tagList, __reg("a6") struct RealTimeBase *)="\tjsr\t-84(a6)";
#define GetPlayerAttrsA(player, tagList) __GetPlayerAttrsA((player), (tagList), RealTimeBase)

#endif /*  _VBCCINLINE_REALTIME_H  */
