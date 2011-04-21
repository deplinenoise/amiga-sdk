#ifndef _PROTO_DISK_H
#define _PROTO_DISK_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_DISK_PROTOS_H
#include <clib/disk_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct DiskResource *DiskBase;
#endif

#ifdef __GNUC__
#include <inline/disk.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/disk_protos.h>
#endif
#else
#include <pragma/disk_lib.h>
#endif

#endif	/*  _PROTO_DISK_H  */
