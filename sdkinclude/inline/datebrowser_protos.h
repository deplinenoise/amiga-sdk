#ifndef _VBCCINLINE_DATEBROWSER_H
#define _VBCCINLINE_DATEBROWSER_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

Class * __DATEBROWSER_GetClass(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define DATEBROWSER_GetClass() __DATEBROWSER_GetClass(DateBrowserBase)

UWORD __JulianWeekDay(__reg("d0") UWORD day, __reg("d1") UWORD month, __reg("d2") LONG year, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define JulianWeekDay(day, month, year) __JulianWeekDay((day), (month), (year), DateBrowserBase)

BOOL __JulianLeapYear(__reg("d0") LONG year, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define JulianLeapYear(year) __JulianLeapYear((year), DateBrowserBase)

#endif /*  _VBCCINLINE_DATEBROWSER_H  */
