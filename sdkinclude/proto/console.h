#ifndef _PROTO_CONSOLE_H
#define _PROTO_CONSOLE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_CONSOLE_PROTOS_H
#include <clib/console_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Device *ConsoleDevice;
#endif

#ifdef __GNUC__
#include <inline/console.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/console_protos.h>
#endif
#else
#include <pragma/console_lib.h>
#endif

#endif	/*  _PROTO_CONSOLE_H  */
