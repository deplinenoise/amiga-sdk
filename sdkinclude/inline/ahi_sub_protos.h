#ifndef _VBCCINLINE_AHI_SUB_H
#define _VBCCINLINE_AHI_SUB_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

ULONG __AHIsub_AllocAudio(__reg("a1") struct TagItem * tagList, __reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define AHIsub_AllocAudio(tagList, AudioCtrl) __AHIsub_AllocAudio((tagList), (AudioCtrl), AHIsubBase)

void __AHIsub_FreeAudio(__reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define AHIsub_FreeAudio(AudioCtrl) __AHIsub_FreeAudio((AudioCtrl), AHIsubBase)

void __AHIsub_Disable(__reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define AHIsub_Disable(AudioCtrl) __AHIsub_Disable((AudioCtrl), AHIsubBase)

void __AHIsub_Enable(__reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define AHIsub_Enable(AudioCtrl) __AHIsub_Enable((AudioCtrl), AHIsubBase)

ULONG __AHIsub_Start(__reg("d0") ULONG Flags, __reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define AHIsub_Start(Flags, AudioCtrl) __AHIsub_Start((Flags), (AudioCtrl), AHIsubBase)

ULONG __AHIsub_Update(__reg("d0") ULONG Flags, __reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define AHIsub_Update(Flags, AudioCtrl) __AHIsub_Update((Flags), (AudioCtrl), AHIsubBase)

ULONG __AHIsub_Stop(__reg("d0") ULONG Flags, __reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define AHIsub_Stop(Flags, AudioCtrl) __AHIsub_Stop((Flags), (AudioCtrl), AHIsubBase)

ULONG __AHIsub_SetVol(__reg("d0") UWORD Channel, __reg("d1") Fixed Volume, __reg("d2") sposition Pan, __reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("d3") ULONG Flags, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define AHIsub_SetVol(Channel, Volume, Pan, AudioCtrl, Flags) __AHIsub_SetVol((Channel), (Volume), (Pan), (AudioCtrl), (Flags), AHIsubBase)

ULONG __AHIsub_SetFreq(__reg("d0") UWORD Channel, __reg("d1") ULONG Freq, __reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("d2") ULONG Flags, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define AHIsub_SetFreq(Channel, Freq, AudioCtrl, Flags) __AHIsub_SetFreq((Channel), (Freq), (AudioCtrl), (Flags), AHIsubBase)

ULONG __AHIsub_SetSound(__reg("d0") UWORD Channel, __reg("d1") UWORD Sound, __reg("d2") ULONG Offset, __reg("d3") LONG Length, __reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("d4") ULONG Flags, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define AHIsub_SetSound(Channel, Sound, Offset, Length, AudioCtrl, Flags) __AHIsub_SetSound((Channel), (Sound), (Offset), (Length), (AudioCtrl), (Flags), AHIsubBase)

ULONG __AHIsub_SetEffect(__reg("a0") APTR Effect, __reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define AHIsub_SetEffect(Effect, AudioCtrl) __AHIsub_SetEffect((Effect), (AudioCtrl), AHIsubBase)

ULONG __AHIsub_LoadSound(__reg("d0") UWORD Sound, __reg("d1") ULONG Type, __reg("a0") APTR Info, __reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define AHIsub_LoadSound(Sound, Type, Info, AudioCtrl) __AHIsub_LoadSound((Sound), (Type), (Info), (AudioCtrl), AHIsubBase)

ULONG __AHIsub_UnloadSound(__reg("d0") UWORD Sound, __reg("a2") struct AHIAudioCtrlDrv * Audioctrl, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define AHIsub_UnloadSound(Sound, Audioctrl) __AHIsub_UnloadSound((Sound), (Audioctrl), AHIsubBase)

LONG __AHIsub_GetAttr(__reg("d0") ULONG Attribute, __reg("d1") LONG Argument, __reg("d2") LONG d2arg, __reg("a1") struct TagItem * tagList, __reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define AHIsub_GetAttr(Attribute, Argument, d2arg, tagList, AudioCtrl) __AHIsub_GetAttr((Attribute), (Argument), (d2arg), (tagList), (AudioCtrl), AHIsubBase)

LONG __AHIsub_HardwareControl(__reg("d0") ULONG Attribute, __reg("d1") LONG Argument, __reg("a2") struct AHIAudioCtrlDrv * AudioCtrl, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define AHIsub_HardwareControl(Attribute, Argument, AudioCtrl) __AHIsub_HardwareControl((Attribute), (Argument), (AudioCtrl), AHIsubBase)

#endif /*  _VBCCINLINE_AHI_SUB_H  */
