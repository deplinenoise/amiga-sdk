	IFND	RESOURCES_POTGO_I
RESOURCES_POTGO_I	EQU	1
**
**	$VER: potgo.i 36.0 (13.4.90)
**	Includes Release 40.13
**
**	potgo resource name
**
**	(C) Copyright 1986-1993 Commodore-Amiga, Inc.
**	    All Rights Reserved
**
POTGONAME MACRO
		dc.b	'potgo.resource',0
		ds.w	0
	ENDM

	ENDC	; RESOURCES_POTGO_I
