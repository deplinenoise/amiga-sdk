#ifndef _PROTO_GLYPH_H
#define _PROTO_GLYPH_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_GLYPH_PROTOS_H
#include <clib/glyph_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *GlyphBase;
#endif

#ifdef __GNUC__
#include <inline/glyph.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/glyph_protos.h>
#endif
#else
#include <pragma/glyph_lib.h>
#endif

#endif	/*  _PROTO_GLYPH_H  */
