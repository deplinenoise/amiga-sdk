#ifndef _VBCCINLINE_AHI_H
#define _VBCCINLINE_AHI_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct AHIAudioCtrl * __AHI_AllocAudioA(__reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define AHI_AllocAudioA(tagList) __AHI_AllocAudioA((tagList), AHIBase)

void __AHI_FreeAudio(__reg("a2") struct AHIAudioCtrl * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define AHI_FreeAudio(AudioCtrl) __AHI_FreeAudio((AudioCtrl), AHIBase)

void __AHI_KillAudio(__reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define AHI_KillAudio() __AHI_KillAudio(AHIBase)

ULONG __AHI_ControlAudioA(__reg("a2") struct AHIAudioCtrl * AudioCtrl, __reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define AHI_ControlAudioA(AudioCtrl, tagList) __AHI_ControlAudioA((AudioCtrl), (tagList), AHIBase)

void __AHI_SetVol(__reg("d0") UWORD Channel, __reg("d1") Fixed Volume, __reg("d2") sposition Pan, __reg("a2") struct AHIAudioCtrl * AudioCtrl, __reg("d3") ULONG Flags, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define AHI_SetVol(Channel, Volume, Pan, AudioCtrl, Flags) __AHI_SetVol((Channel), (Volume), (Pan), (AudioCtrl), (Flags), AHIBase)

void __AHI_SetFreq(__reg("d0") UWORD Channel, __reg("d1") ULONG Freq, __reg("a2") struct AHIAudioCtrl * AudioCtrl, __reg("d2") ULONG Flags, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define AHI_SetFreq(Channel, Freq, AudioCtrl, Flags) __AHI_SetFreq((Channel), (Freq), (AudioCtrl), (Flags), AHIBase)

void __AHI_SetSound(__reg("d0") UWORD Channel, __reg("d1") UWORD Sound, __reg("d2") ULONG Offset, __reg("d3") LONG Length, __reg("a2") struct AHIAudioCtrl * AudioCtrl, __reg("d4") ULONG Flags, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define AHI_SetSound(Channel, Sound, Offset, Length, AudioCtrl, Flags) __AHI_SetSound((Channel), (Sound), (Offset), (Length), (AudioCtrl), (Flags), AHIBase)

ULONG __AHI_SetEffect(__reg("a0") APTR Effect, __reg("a2") struct AHIAudioCtrl * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define AHI_SetEffect(Effect, AudioCtrl) __AHI_SetEffect((Effect), (AudioCtrl), AHIBase)

ULONG __AHI_LoadSound(__reg("d0") UWORD Sound, __reg("d1") ULONG Type, __reg("a0") APTR Info, __reg("a2") struct AHIAudioCtrl * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define AHI_LoadSound(Sound, Type, Info, AudioCtrl) __AHI_LoadSound((Sound), (Type), (Info), (AudioCtrl), AHIBase)

void __AHI_UnloadSound(__reg("d0") UWORD Sound, __reg("a2") struct AHIAudioCtrl * Audioctrl, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define AHI_UnloadSound(Sound, Audioctrl) __AHI_UnloadSound((Sound), (Audioctrl), AHIBase)

ULONG __AHI_NextAudioID(__reg("d0") ULONG Last_ID, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define AHI_NextAudioID(Last_ID) __AHI_NextAudioID((Last_ID), AHIBase)

BOOL __AHI_GetAudioAttrsA(__reg("d0") ULONG ID, __reg("a2") struct AHIAudioCtrl * Audioctrl, __reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define AHI_GetAudioAttrsA(ID, Audioctrl, tagList) __AHI_GetAudioAttrsA((ID), (Audioctrl), (tagList), AHIBase)

ULONG __AHI_BestAudioIDA(__reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define AHI_BestAudioIDA(tagList) __AHI_BestAudioIDA((tagList), AHIBase)

struct AHIAudioModeRequester * __AHI_AllocAudioRequestA(__reg("a0") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define AHI_AllocAudioRequestA(tagList) __AHI_AllocAudioRequestA((tagList), AHIBase)

BOOL __AHI_AudioRequestA(__reg("a0") struct AHIAudioModeRequester * Requester, __reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define AHI_AudioRequestA(Requester, tagList) __AHI_AudioRequestA((Requester), (tagList), AHIBase)

void __AHI_FreeAudioRequest(__reg("a0") struct AHIAudioModeRequester * Requester, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define AHI_FreeAudioRequest(Requester) __AHI_FreeAudioRequest((Requester), AHIBase)

void __AHI_PlayA(__reg("a2") struct AHIAudioCtrl * Audioctrl, __reg("a1") struct TagItem * tagList, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define AHI_PlayA(Audioctrl, tagList) __AHI_PlayA((Audioctrl), (tagList), AHIBase)

ULONG __AHI_SampleFrameSize(__reg("d0") ULONG SampleType, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define AHI_SampleFrameSize(SampleType) __AHI_SampleFrameSize((SampleType), AHIBase)

ULONG __AHI_AddAudioMode(__reg("a0") struct TagItem * a0arg, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define AHI_AddAudioMode(a0arg) __AHI_AddAudioMode((a0arg), AHIBase)

ULONG __AHI_RemoveAudioMode(__reg("d0") ULONG d0arg, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define AHI_RemoveAudioMode(d0arg) __AHI_RemoveAudioMode((d0arg), AHIBase)

ULONG __AHI_LoadModeFile(__reg("a0") STRPTR a0arg, __reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define AHI_LoadModeFile(a0arg) __AHI_LoadModeFile((a0arg), AHIBase)

#endif /*  _VBCCINLINE_AHI_H  */
