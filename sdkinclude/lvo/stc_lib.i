        IFND    LIBRARIES_STC_LIB_I
LIBRARIES_STC_LIB_I     SET 1
**
**	$Filename: libraries/stc_lib.i $
**	$Revision: 2.0 $
**	$Date: 93/12/28 $
**
**	Library interface offsets for StoneCracker library
**
**	(C) Copyright 1991-1993 Jouni 'Mr.Spiv' Korhonen
**	    All Rights Reserved
**

        IFND    EXEC_TYPES_I
        include "exec/types.i"
        ENDC
        IFND    EXEC_NODES_I
        include "exec/nodes.i"
        ENDC
        IFND    EXEC_LISTS_I
        include "exec/lists.i"
        ENDC
        IFND    EXEC_LIBRARIES_I
        include "exec/libraries.i"
        ENDC

        LIBINIT

        LIBDEF _LVOstcCrunchData                * -30
        LIBDEF _LVOstcDeCrunchData              * -36
        LIBDEF _LVOstcAllocBuffer               * -42
        LIBDEF _LVOstcFreeBuffer                * -48
        LIBDEF _LVOstcQuickSort                 * -54
        LIBDEF _LVOstcAllocFileBuffer           * -60
        LIBDEF _LVOstcFreeFileBuffer            * -66
        LIBDEF _LVOstcLoadFileBuffer            * -72
        LIBDEF _LVOstcProcessHunks              * -78
        LIBDEF _LVOstcSaveExec                  * -84
        LIBDEF _LVOstcLibDeCrunchPExec          * -90
        LIBDEF _LVOstcCrunchDataTags            * -96
        LIBDEF _LVOstcSaveExecTags              * -102
        LIBDEF _LVOstcNewAllocFileBuffer        * -108
        LIBDEF _LVOstcAllocMemBuffer            * -114
        LIBDEF _LVOstcFileIs                    * -120

        ENDC    ; LIBRARIES_STC_LIB_I
