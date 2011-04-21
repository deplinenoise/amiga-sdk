#ifndef _PROTO_TEXTEDITOR_H
#define _PROTO_TEXTEDITOR_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_TEXTEDITOR_PROTOS_H
#include <clib/texteditor_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *TextEditorBase;
#endif

#ifdef __GNUC__
#include <inline/texteditor.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/texteditor_protos.h>
#endif
#else
#include <pragma/texteditor_lib.h>
#endif

#endif	/*  _PROTO_TEXTEDITOR_H  */
