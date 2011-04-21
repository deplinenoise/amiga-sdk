#ifndef _PROTO_MATHTRANS_H
#define _PROTO_MATHTRANS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_MATHTRANS_PROTOS_H
#include <clib/mathtrans_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *MathTransBase;
#endif

#ifdef __GNUC__
#include <inline/mathtrans.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/mathtrans_protos.h>
#endif
#else
#include <pragma/mathtrans_lib.h>
#endif

#endif	/*  _PROTO_MATHTRANS_H  */
