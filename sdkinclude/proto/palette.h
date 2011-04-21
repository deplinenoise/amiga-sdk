#ifndef _PROTO_PALETTE_H
#define _PROTO_PALETTE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_PALETTE_PROTOS_H
#include <clib/palette_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *PaletteBase;
#endif

#ifdef __GNUC__
#include <inline/palette.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/palette_protos.h>
#endif
#else
#include <pragma/palette_lib.h>
#endif

#endif	/*  _PROTO_PALETTE_H  */
