#ifndef _PROTO_LOCALE_H
#define _PROTO_LOCALE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_LOCALE_PROTOS_H
#include <clib/locale_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct LocaleBase *LocaleBase;
#endif

#ifdef __GNUC__
#include <inline/locale.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/locale_protos.h>
#endif
#else
#include <pragma/locale_lib.h>
#endif

#endif	/*  _PROTO_LOCALE_H  */
