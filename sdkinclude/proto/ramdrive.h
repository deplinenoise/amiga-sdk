#ifndef _PROTO_RAMDRIVE_H
#define _PROTO_RAMDRIVE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_RAMDRIVE_PROTOS_H
#include <clib/ramdrive_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Device *RamdriveDevice;
#endif

#ifdef __GNUC__
#include <inline/ramdrive.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/ramdrive_protos.h>
#endif
#else
#include <pragma/ramdrive_lib.h>
#endif

#endif	/*  _PROTO_RAMDRIVE_H  */
