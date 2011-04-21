#ifndef _PROTO_AML_H
#define _PROTO_AML_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_AML_PROTOS_H
#include <clib/aml_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *AmlBase;
#endif

#ifdef __GNUC__
#include <inline/aml.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/aml_protos.h>
#endif
#else
#include <pragma/aml_lib.h>
#endif

#endif	/*  _PROTO_AML_H  */
