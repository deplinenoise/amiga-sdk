#ifndef _PROTO_WIZARD_H
#define _PROTO_WIZARD_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef CLIB_WIZARD_PROTOS_H
#include <clib/wizard_protos.h>
#endif

#ifndef __NOLIBBASE__
extern struct Library *WizardBase;
#endif

#ifdef __GNUC__
#include <inline/wizard.h>
#elif defined(__VBCC__)
#ifndef __PPC__
#include <inline/wizard_protos.h>
#endif
#else
#include <pragma/wizard_lib.h>
#endif

#endif	/*  _PROTO_WIZARD_H  */
