#ifndef _VBCCINLINE_LOCALE_H
#define _VBCCINLINE_LOCALE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

void __CloseCatalog(__reg("a0") struct Catalog * catalog, __reg("a6") struct LocaleBase *)="\tjsr\t-36(a6)";
#define CloseCatalog(catalog) __CloseCatalog((catalog), LocaleBase)

void __CloseLocale(__reg("a0") struct Locale * locale, __reg("a6") struct LocaleBase *)="\tjsr\t-42(a6)";
#define CloseLocale(locale) __CloseLocale((locale), LocaleBase)

ULONG __ConvToLower(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-48(a6)";
#define ConvToLower(locale, character) __ConvToLower((locale), (character), LocaleBase)

ULONG __ConvToUpper(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-54(a6)";
#define ConvToUpper(locale, character) __ConvToUpper((locale), (character), LocaleBase)

void __FormatDate(__reg("a0") struct Locale * locale, __reg("a1") STRPTR fmtTemplate, __reg("a2") struct DateStamp * date, __reg("a3") struct Hook * putCharFunc, __reg("a6") struct LocaleBase *)="\tjsr\t-60(a6)";
#define FormatDate(locale, fmtTemplate, date, putCharFunc) __FormatDate((locale), (fmtTemplate), (date), (putCharFunc), LocaleBase)

APTR __FormatString(__reg("a0") struct Locale * locale, __reg("a1") STRPTR fmtTemplate, __reg("a2") APTR dataStream, __reg("a3") struct Hook * putCharFunc, __reg("a6") struct LocaleBase *)="\tjsr\t-66(a6)";
#define FormatString(locale, fmtTemplate, dataStream, putCharFunc) __FormatString((locale), (fmtTemplate), (dataStream), (putCharFunc), LocaleBase)

STRPTR __GetCatalogStr(__reg("a0") struct Catalog * catalog, __reg("d0") long stringNum, __reg("a1") STRPTR defaultString, __reg("a6") struct LocaleBase *)="\tjsr\t-72(a6)";
#define GetCatalogStr(catalog, stringNum, defaultString) __GetCatalogStr((catalog), (stringNum), (defaultString), LocaleBase)

STRPTR __GetLocaleStr(__reg("a0") struct Locale * locale, __reg("d0") unsigned long stringNum, __reg("a6") struct LocaleBase *)="\tjsr\t-78(a6)";
#define GetLocaleStr(locale, stringNum) __GetLocaleStr((locale), (stringNum), LocaleBase)

BOOL __IsAlNum(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-84(a6)";
#define IsAlNum(locale, character) __IsAlNum((locale), (character), LocaleBase)

BOOL __IsAlpha(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-90(a6)";
#define IsAlpha(locale, character) __IsAlpha((locale), (character), LocaleBase)

BOOL __IsCntrl(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-96(a6)";
#define IsCntrl(locale, character) __IsCntrl((locale), (character), LocaleBase)

BOOL __IsDigit(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-102(a6)";
#define IsDigit(locale, character) __IsDigit((locale), (character), LocaleBase)

BOOL __IsGraph(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-108(a6)";
#define IsGraph(locale, character) __IsGraph((locale), (character), LocaleBase)

BOOL __IsLower(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-114(a6)";
#define IsLower(locale, character) __IsLower((locale), (character), LocaleBase)

BOOL __IsPrint(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-120(a6)";
#define IsPrint(locale, character) __IsPrint((locale), (character), LocaleBase)

BOOL __IsPunct(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-126(a6)";
#define IsPunct(locale, character) __IsPunct((locale), (character), LocaleBase)

BOOL __IsSpace(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-132(a6)";
#define IsSpace(locale, character) __IsSpace((locale), (character), LocaleBase)

BOOL __IsUpper(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-138(a6)";
#define IsUpper(locale, character) __IsUpper((locale), (character), LocaleBase)

BOOL __IsXDigit(__reg("a0") struct Locale * locale, __reg("d0") unsigned long character, __reg("a6") struct LocaleBase *)="\tjsr\t-144(a6)";
#define IsXDigit(locale, character) __IsXDigit((locale), (character), LocaleBase)

struct Catalog * __OpenCatalogA(__reg("a0") struct Locale * locale, __reg("a1") STRPTR name, __reg("a2") struct TagItem * tags, __reg("a6") struct LocaleBase *)="\tjsr\t-150(a6)";
#define OpenCatalogA(locale, name, tags) __OpenCatalogA((locale), (name), (tags), LocaleBase)

struct Locale * __OpenLocale(__reg("a0") STRPTR name, __reg("a6") struct LocaleBase *)="\tjsr\t-156(a6)";
#define OpenLocale(name) __OpenLocale((name), LocaleBase)

BOOL __ParseDate(__reg("a0") struct Locale * locale, __reg("a1") struct DateStamp * date, __reg("a2") STRPTR fmtTemplate, __reg("a3") struct Hook * getCharFunc, __reg("a6") struct LocaleBase *)="\tjsr\t-162(a6)";
#define ParseDate(locale, date, fmtTemplate, getCharFunc) __ParseDate((locale), (date), (fmtTemplate), (getCharFunc), LocaleBase)

ULONG __StrConvert(__reg("a0") struct Locale * locale, __reg("a1") STRPTR string, __reg("a2") APTR buffer, __reg("d0") unsigned long bufferSize, __reg("d1") unsigned long type, __reg("a6") struct LocaleBase *)="\tjsr\t-174(a6)";
#define StrConvert(locale, string, buffer, bufferSize, type) __StrConvert((locale), (string), (buffer), (bufferSize), (type), LocaleBase)

LONG __StrnCmp(__reg("a0") struct Locale * locale, __reg("a1") STRPTR string1, __reg("a2") STRPTR string2, __reg("d0") long length, __reg("d1") unsigned long type, __reg("a6") struct LocaleBase *)="\tjsr\t-180(a6)";
#define StrnCmp(locale, string1, string2, length, type) __StrnCmp((locale), (string1), (string2), (length), (type), LocaleBase)

#endif /*  _VBCCINLINE_LOCALE_H  */
