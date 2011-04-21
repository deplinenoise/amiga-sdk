#ifndef _PROTO_DATEBROWSER_H
#define _PROTO_DATEBROWSER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_DATEBROWSER_PROTOS_H
#include <clib/datebrowser_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *DateBrowserBase;
#endif

#ifdef __GNUC__
#include <inline/datebrowser.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/datebrowser_protos.h>
#endif
#else
#include <pragma/datebrowser_lib.h>
#endif

#endif	/*  _PROTO_DATEBROWSER_H  */
