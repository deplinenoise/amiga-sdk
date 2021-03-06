#ifndef _PROTO_WB_H
#define _PROTO_WB_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_WB_PROTOS_H
#include <clib/wb_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *WorkbenchBase;
#endif

#ifdef __GNUC__
#include <inline/wb.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/wb_protos.h>
#endif
#else
#include <pragma/wb_lib.h>
#endif

#endif	/*  _PROTO_WB_H  */
