	IFND	DATATYPES_SOUNDCLASS_I
DATATYPES_SOUNDCLASS_I	SET	1
**
**  $VER: soundclass.i 39.2 (24.2.93)
**  Includes Release 40.13
**
**  Interface definitions for DataType sound objects.
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

    IFND	LIBRARIES_IFFPARSE_I
    INCLUDE "libraries/iffparse.i"
    ENDC

;------------------------------------------------------------------------------

SOUNDDTCLASS	MACRO
		DC.B	'sound.datatype',0
		ENDM

;------------------------------------------------------------------------------

; Sound attributes
SDTA_Dummy		equ	(DTA_Dummy+500)
SDTA_VoiceHeader	equ	(SDTA_Dummy+1)
SDTA_Sample		equ	(SDTA_Dummy+2)
   ; (UBYTE *) Sample data

SDTA_SampleLength	equ	(SDTA_Dummy+3)
   ; (ULONG) Length of the sample data in UBYTEs

SDTA_Period		equ	(SDTA_Dummy+4)
    ; (UWORD) Period

SDTA_Volume		equ	(SDTA_Dummy+5)
    ; (UWORD) Volume.  Range from 0 to 64

SDTA_Cycles		equ	(SDTA_Dummy+6)

SDTA_SignalTask		equ	(SDTA_Dummy+7)
    ; (struct Task *) Task to signal when sound is complete or next buffer needed.

SDTA_SignalBit		equ	(SDTA_Dummy+8)
    ; (BYTE) Signal bit to use on completion or -1 to disable

SDTA_Continuous		equ	(SDTA_Dummy+9)
    ; (ULONG) Playing a continuous stream of data.  Defaults to FALSE.

;------------------------------------------------------------------------------

    STRUCTURE VoiceHeader,0
	ULONG	vh_OneShotHiSamples
	ULONG	vh_RepeatHiSamples
	ULONG	vh_SamplesPerHiCycle
	UWORD	vh_SamplesPerSec
	UBYTE	vh_Octaves
	UBYTE	vh_Compression
	ULONG	vh_Volume
    LABEL VoiceHeader_SIZEOF

;------------------------------------------------------------------------------

CMP_NONE		equ	 0
CMP_FIBDELTA		equ	 1

;------------------------------------------------------------------------------

; IFF types
ID_8SVX	equ	'8SVX'
ID_VHDR	equ	'VHDR'

	IFND	ID_BODY
ID_BODY	equ	'BODY'
	ENDC

;------------------------------------------------------------------------------

    ENDC	; DATATYPES_SOUNDCLASS_I
