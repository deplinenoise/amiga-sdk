#ifndef _PROTO_FUELGAUGE_H
#define _PROTO_FUELGAUGE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_FUELGAUGE_PROTOS_H
#include <clib/fuelgauge_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *FuelGaugeBase;
#endif

#ifdef __GNUC__
#include <inline/fuelgauge.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/fuelgauge_protos.h>
#endif
#else
#include <pragma/fuelgauge_lib.h>
#endif

#endif	/*  _PROTO_FUELGAUGE_H  */
