#ifndef _PROTO_TRANSLATOR_H
#define _PROTO_TRANSLATOR_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_TRANSLATOR_PROTOS_H
#include <clib/translator_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *TranslatorBase;
#endif

#ifdef __GNUC__
#include <inline/translator.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/translator_protos.h>
#endif
#else
#include <pragma/translator_lib.h>
#endif

#endif	/*  _PROTO_TRANSLATOR_H  */
