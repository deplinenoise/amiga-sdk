#ifndef _PROTO_CHECKBOX_H
#define _PROTO_CHECKBOX_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_CHECKBOX_PROTOS_H
#include <clib/checkbox_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *CheckBoxBase;
#endif

#ifdef __GNUC__
#include <inline/checkbox.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/checkbox_protos.h>
#endif
#else
#include <pragma/checkbox_lib.h>
#endif

#endif	/*  _PROTO_CHECKBOX_H  */
