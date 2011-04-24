	IFND	DATATYPES_ANIMATIONCLASS_I
DATATYPES_ANIMATIONCLASS_I	SET	1
**
**  $VER: animationclass.i 40.0 (12.3.93)
**  Includes Release 40.13
**
**  Interface definitions for DataType animation objects.
**
**  (C) Copyright 1992-1993 Commodore-Amiga, Inc.
**	All Rights Reserved
**

    IFND	UTILITY_TAGITEM_I
    INCLUDE "utility/tagitem.i"
    ENDC

    IFND	DATATYPES_DATATYPESCLASS_I
    INCLUDE "datatypes/datatypesclass.i"
    ENDC

    IFND	DATATYPES_PICTURECLASS_I
    INCLUDE "datatypes/pictureclass.i"
    ENDC

    IFND	DATATYPES_SOUNDCLASS_I
    INCLUDE "datatypes/soundclass.i"
    ENDC

    IFND	LIBRARIES_IFFPARSE_I
    INCLUDE "libraries/iffparse.i"
    ENDC

;------------------------------------------------------------------------------

ANIMATIONDTCLASS	MACRO
			DC.B	'animation.datatype',0
			ENDM

;------------------------------------------------------------------------------

; Animation attributes
ADTA_Dummy		equ	(DTA_Dummy+600)
ADTA_ModeID		equ	PDTA_ModeID
ADTA_KeyFrame		equ	PDTA_BitMap
	; (struct BitMap *) Key frame (first frame) bitmap

ADTA_ColorRegisters	equ	PDTA_ColorRegisters
ADTA_CRegs		equ	PDTA_CRegs
ADTA_GRegs		equ	PDTA_GRegs
ADTA_ColorTable		equ	PDTA_ColorTable
ADTA_ColorTable2	equ	PDTA_ColorTable2
ADTA_Allocated		equ	PDTA_Allocated
ADTA_NumColors		equ	PDTA_NumColors
ADTA_NumAlloc		equ	PDTA_NumAlloc

ADTA_Remap		equ	PDTA_Remap
	; (BOOL) : Remap animation (defaults to TRUE)

ADTA_Screen		equ	PDTA_Screen
	; (struct Screen *) Screen to remap to

ADTA_NumSparse		equ	PDTA_NumSparse
	; (UWORD) Number of colors used for sparse remapping

ADTA_SparseTable	equ	PDTA_SparseTable
	; (UBYTE *) Pointer to a table of pen numbers indicating
	; which colors should be used when remapping the image.
	; This array must contain as many entries as there
	; are colors specified with ADTA_NumSparse

ADTA_Width		equ	(ADTA_Dummy+1)
ADTA_Height		equ	(ADTA_Dummy+2)
ADTA_Depth		equ	(ADTA_Dummy+3)
ADTA_Frames		equ	(ADTA_Dummy+4)
	; (ULONG) Number of frames in the animation

ADTA_Frame		equ	(ADTA_Dummy+5)
	; (ULONG) Current frame

ADTA_FramesPerSecond	equ	(ADTA_Dummy+6)
	; (ULONG) Frames per second

ADTA_FrameIncrement	equ	(ADTA_Dummy+7)
	; (LONG) Amount to change frame by when fast forwarding or
	; rewinding.  Defaults to 10.

; Sound attributes
ADTA_Sample		equ	SDTA_Sample
ADTA_SampleLength	equ	SDTA_SampleLength
ADTA_Period		equ	SDTA_Period
ADTA_Volume		equ	SDTA_Volume
ADTA_Cycles		equ	SDTA_Cycles

;------------------------------------------------------------------------------

ID_ANIM		equ 'ANIM'
ID_ANHD		equ 'ANHD'
ID_DLTA		equ 'DLTA'

;------------------------------------------------------------------------------

    STRUCTURE AnimHeader,0
	UBYTE		ah_Operation
	UBYTE		ah_Mask
	UWORD		ah_Width
	UWORD		ah_Height
	WORD		ah_Left
	WORD		ah_Top
	ULONG		ah_AbsTime
	ULONG		ah_RelTime
	UBYTE		ah_Interleave
	UBYTE		ah_Pad0
	ULONG		ah_Flags
	STRUCT		ah_Pad,16
    LABEL AnimHeader_SIZEOF

;------------------------------------------------------------------------------
;------------------------------------------------------------------------------
;------------------------------------------------------------------------------

; Animation methods
ADTM_Dummy		equ	$700

ADTM_LOADFRAME		equ	$701
    ; Used to load a frame of the animation

ADTM_UNLOADFRAME	equ	$702
    ; Used to unload a frame of the animation

ADTM_START		equ	$703
    ; Used to start the animation

ADTM_PAUSE		equ	$704
    ; Used to pause the animation (don't reset the timer)

ADTM_STOP		equ	$705
    ; Used to stop the animation

ADTM_LOCATE		equ	$706
    ; Used to locate a frame in the animation (as set by a slider...)

;------------------------------------------------------------------------------

; ADTM_LOADFRAME, ADTM_UNLOADFRAME

    STRUCTURE adtFrame,0
	ULONG		 alf_MethodID
	ULONG		 alf_TimeStamp		; Timestamp of frame to load

    ; The following fields are filled in by the ADTM_LOADFRAME method,
    ; and are read-only for any other methods.

	ULONG		 alf_Frame		; Frame number
	ULONG		 alf_Duration		; Duration of frame

	APTR	 	 alf_BitMap		; Loaded BitMap
	APTR		 alf_CMap		; Colormap, if changed

	APTR		 alf_Sample		; Sound data (BYTE *)
	ULONG		 alf_SampleLength
	ULONG		 alf_Period

	APTR		 alf_UserData		; Used by load frame for extra data
    LABEL adtFrame_SIZEOF


; ADTM_START, ADTM_PAUSE, ADTM_STOP, ADTM_LOCATE
    STRUCTURE adtStart,0
	ULONG		 asa_MethodID;
	ULONG		 asa_Frame;		; Frame # to start at
    LABEL adtStart_SIZEOF

;------------------------------------------------------------------------------

    ENDC	; DATATYPES_ANIMATIONCLASS_I
