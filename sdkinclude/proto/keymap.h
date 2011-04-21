#ifndef _PROTO_KEYMAP_H
#define _PROTO_KEYMAP_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_KEYMAP_PROTOS_H
#include <clib/keymap_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *KeymapBase;
#endif

#ifdef __GNUC__
#include <inline/keymap.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/keymap_protos.h>
#endif
#else
#include <pragma/keymap_lib.h>
#endif

#endif	/*  _PROTO_KEYMAP_H  */
