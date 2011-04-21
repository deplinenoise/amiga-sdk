#ifndef _PROTO_DISKFONT_H
#define _PROTO_DISKFONT_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_DISKFONT_PROTOS_H
#include <clib/diskfont_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *DiskfontBase;
#endif

#ifdef __GNUC__
#include <inline/diskfont.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/diskfont_protos.h>
#endif
#else
#include <pragma/diskfont_lib.h>
#endif

#endif	/*  _PROTO_DISKFONT_H  */
