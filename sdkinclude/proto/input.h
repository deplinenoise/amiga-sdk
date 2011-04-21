#ifndef _PROTO_INPUT_H
#define _PROTO_INPUT_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_INPUT_PROTOS_H
#include <clib/input_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Device *InputBase;
#endif

#ifdef __GNUC__
#include <inline/input.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/input_protos.h>
#endif
#else
#include <pragma/input_lib.h>
#endif

#endif	/*  _PROTO_INPUT_H  */
