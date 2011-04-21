#ifndef _PROTO_CYBERGRAPHICS_H
#define _PROTO_CYBERGRAPHICS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_CYBERGRAPHICS_PROTOS_H
#include <clib/cybergraphics_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *CyberGfxBase;
#endif

#ifdef __GNUC__
#include <inline/cybergraphics.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/cybergraphics_protos.h>
#endif
#else
#include <pragma/cybergraphics_lib.h>
#endif

#endif	/*  _PROTO_CYBERGRAPHICS_H  */
