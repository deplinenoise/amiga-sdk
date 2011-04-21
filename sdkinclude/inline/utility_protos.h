#ifndef _VBCCINLINE_UTILITY_H
#define _VBCCINLINE_UTILITY_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct TagItem * __FindTagItem(__reg("d0") Tag tagVal, __reg("a0") struct TagItem * tagList, __reg("a6") struct UtilityBase *)="\tjsr\t-30(a6)";
#define FindTagItem(tagVal, tagList) __FindTagItem((tagVal), (tagList), UtilityBase)

ULONG __GetTagData(__reg("d0") Tag tagValue, __reg("d1") unsigned long defaultVal, __reg("a0") struct TagItem * tagList, __reg("a6") struct UtilityBase *)="\tjsr\t-36(a6)";
#define GetTagData(tagValue, defaultVal, tagList) __GetTagData((tagValue), (defaultVal), (tagList), UtilityBase)

ULONG __PackBoolTags(__reg("d0") unsigned long initialFlags, __reg("a0") struct TagItem * tagList, __reg("a1") struct TagItem * boolMap, __reg("a6") struct UtilityBase *)="\tjsr\t-42(a6)";
#define PackBoolTags(initialFlags, tagList, boolMap) __PackBoolTags((initialFlags), (tagList), (boolMap), UtilityBase)

struct TagItem * __NextTagItem(__reg("a0") struct TagItem ** tagListPtr, __reg("a6") struct UtilityBase *)="\tjsr\t-48(a6)";
#define NextTagItem(tagListPtr) __NextTagItem((tagListPtr), UtilityBase)

void __FilterTagChanges(__reg("a0") struct TagItem * changeList, __reg("a1") struct TagItem * originalList, __reg("d0") unsigned long apply, __reg("a6") struct UtilityBase *)="\tjsr\t-54(a6)";
#define FilterTagChanges(changeList, originalList, apply) __FilterTagChanges((changeList), (originalList), (apply), UtilityBase)

void __MapTags(__reg("a0") struct TagItem * tagList, __reg("a1") struct TagItem * mapList, __reg("d0") unsigned long mapType, __reg("a6") struct UtilityBase *)="\tjsr\t-60(a6)";
#define MapTags(tagList, mapList, mapType) __MapTags((tagList), (mapList), (mapType), UtilityBase)

struct TagItem * __AllocateTagItems(__reg("d0") unsigned long numTags, __reg("a6") struct UtilityBase *)="\tjsr\t-66(a6)";
#define AllocateTagItems(numTags) __AllocateTagItems((numTags), UtilityBase)

struct TagItem * __CloneTagItems(__reg("a0") struct TagItem * tagList, __reg("a6") struct UtilityBase *)="\tjsr\t-72(a6)";
#define CloneTagItems(tagList) __CloneTagItems((tagList), UtilityBase)

void __FreeTagItems(__reg("a0") struct TagItem * tagList, __reg("a6") struct UtilityBase *)="\tjsr\t-78(a6)";
#define FreeTagItems(tagList) __FreeTagItems((tagList), UtilityBase)

void __RefreshTagItemClones(__reg("a0") struct TagItem * clone, __reg("a1") struct TagItem * original, __reg("a6") struct UtilityBase *)="\tjsr\t-84(a6)";
#define RefreshTagItemClones(clone, original) __RefreshTagItemClones((clone), (original), UtilityBase)

BOOL __TagInArray(__reg("d0") Tag tagValue, __reg("a0") Tag * tagArray, __reg("a6") struct UtilityBase *)="\tjsr\t-90(a6)";
#define TagInArray(tagValue, tagArray) __TagInArray((tagValue), (tagArray), UtilityBase)

ULONG __FilterTagItems(__reg("a0") struct TagItem * tagList, __reg("a1") Tag * filterArray, __reg("d0") unsigned long logic, __reg("a6") struct UtilityBase *)="\tjsr\t-96(a6)";
#define FilterTagItems(tagList, filterArray, logic) __FilterTagItems((tagList), (filterArray), (logic), UtilityBase)

ULONG __CallHookPkt(__reg("a0") struct Hook * hook, __reg("a2") APTR object, __reg("a1") APTR paramPacket, __reg("a6") struct UtilityBase *)="\tjsr\t-102(a6)";
#define CallHookPkt(hook, object, paramPacket) __CallHookPkt((hook), (object), (paramPacket), UtilityBase)

void __Amiga2Date(__reg("d0") unsigned long seconds, __reg("a0") struct ClockData * result, __reg("a6") struct UtilityBase *)="\tjsr\t-120(a6)";
#define Amiga2Date(seconds, result) __Amiga2Date((seconds), (result), UtilityBase)

ULONG __Date2Amiga(__reg("a0") struct ClockData * date, __reg("a6") struct UtilityBase *)="\tjsr\t-126(a6)";
#define Date2Amiga(date) __Date2Amiga((date), UtilityBase)

ULONG __CheckDate(__reg("a0") struct ClockData * date, __reg("a6") struct UtilityBase *)="\tjsr\t-132(a6)";
#define CheckDate(date) __CheckDate((date), UtilityBase)

LONG __SMult32(__reg("d0") long arg1, __reg("d1") long arg2, __reg("a6") struct UtilityBase *)="\tjsr\t-138(a6)";
#define SMult32(arg1, arg2) __SMult32((arg1), (arg2), UtilityBase)

ULONG __UMult32(__reg("d0") unsigned long arg1, __reg("d1") unsigned long arg2, __reg("a6") struct UtilityBase *)="\tjsr\t-144(a6)";
#define UMult32(arg1, arg2) __UMult32((arg1), (arg2), UtilityBase)

LONG __SDivMod32(__reg("d0") long dividend, __reg("d1") long divisor, __reg("a6") struct UtilityBase *)="\tjsr\t-150(a6)";
#define SDivMod32(dividend, divisor) __SDivMod32((dividend), (divisor), UtilityBase)

ULONG __UDivMod32(__reg("d0") unsigned long dividend, __reg("d1") unsigned long divisor, __reg("a6") struct UtilityBase *)="\tjsr\t-156(a6)";
#define UDivMod32(dividend, divisor) __UDivMod32((dividend), (divisor), UtilityBase)

LONG __Stricmp(__reg("a0") STRPTR string1, __reg("a1") STRPTR string2, __reg("a6") struct UtilityBase *)="\tjsr\t-162(a6)";
#define Stricmp(string1, string2) __Stricmp((string1), (string2), UtilityBase)

LONG __Strnicmp(__reg("a0") STRPTR string1, __reg("a1") STRPTR string2, __reg("d0") long length, __reg("a6") struct UtilityBase *)="\tjsr\t-168(a6)";
#define Strnicmp(string1, string2, length) __Strnicmp((string1), (string2), (length), UtilityBase)

UBYTE __ToUpper(__reg("d0") unsigned long character, __reg("a6") struct UtilityBase *)="\tjsr\t-174(a6)";
#define ToUpper(character) __ToUpper((character), UtilityBase)

UBYTE __ToLower(__reg("d0") unsigned long character, __reg("a6") struct UtilityBase *)="\tjsr\t-180(a6)";
#define ToLower(character) __ToLower((character), UtilityBase)

void __ApplyTagChanges(__reg("a0") struct TagItem * list, __reg("a1") struct TagItem * changeList, __reg("a6") struct UtilityBase *)="\tjsr\t-186(a6)";
#define ApplyTagChanges(list, changeList) __ApplyTagChanges((list), (changeList), UtilityBase)

LONG __SMult64(__reg("d0") long arg1, __reg("d1") long arg2, __reg("a6") struct UtilityBase *)="\tjsr\t-198(a6)";
#define SMult64(arg1, arg2) __SMult64((arg1), (arg2), UtilityBase)

ULONG __UMult64(__reg("d0") unsigned long arg1, __reg("d1") unsigned long arg2, __reg("a6") struct UtilityBase *)="\tjsr\t-204(a6)";
#define UMult64(arg1, arg2) __UMult64((arg1), (arg2), UtilityBase)

ULONG __PackStructureTags(__reg("a0") APTR pack, __reg("a1") ULONG * packTable, __reg("a2") struct TagItem * tagList, __reg("a6") struct UtilityBase *)="\tjsr\t-210(a6)";
#define PackStructureTags(pack, packTable, tagList) __PackStructureTags((pack), (packTable), (tagList), UtilityBase)

ULONG __UnpackStructureTags(__reg("a0") APTR pack, __reg("a1") ULONG * packTable, __reg("a2") struct TagItem * tagList, __reg("a6") struct UtilityBase *)="\tjsr\t-216(a6)";
#define UnpackStructureTags(pack, packTable, tagList) __UnpackStructureTags((pack), (packTable), (tagList), UtilityBase)

BOOL __AddNamedObject(__reg("a0") struct NamedObject * nameSpace, __reg("a1") struct NamedObject * object, __reg("a6") struct UtilityBase *)="\tjsr\t-222(a6)";
#define AddNamedObject(nameSpace, object) __AddNamedObject((nameSpace), (object), UtilityBase)

struct NamedObject * __AllocNamedObjectA(__reg("a0") STRPTR name, __reg("a1") struct TagItem * tagList, __reg("a6") struct UtilityBase *)="\tjsr\t-228(a6)";
#define AllocNamedObjectA(name, tagList) __AllocNamedObjectA((name), (tagList), UtilityBase)

LONG __AttemptRemNamedObject(__reg("a0") struct NamedObject * object, __reg("a6") struct UtilityBase *)="\tjsr\t-234(a6)";
#define AttemptRemNamedObject(object) __AttemptRemNamedObject((object), UtilityBase)

struct NamedObject * __FindNamedObject(__reg("a0") struct NamedObject * nameSpace, __reg("a1") STRPTR name, __reg("a2") struct NamedObject * lastObject, __reg("a6") struct UtilityBase *)="\tjsr\t-240(a6)";
#define FindNamedObject(nameSpace, name, lastObject) __FindNamedObject((nameSpace), (name), (lastObject), UtilityBase)

void __FreeNamedObject(__reg("a0") struct NamedObject * object, __reg("a6") struct UtilityBase *)="\tjsr\t-246(a6)";
#define FreeNamedObject(object) __FreeNamedObject((object), UtilityBase)

STRPTR __NamedObjectName(__reg("a0") struct NamedObject * object, __reg("a6") struct UtilityBase *)="\tjsr\t-252(a6)";
#define NamedObjectName(object) __NamedObjectName((object), UtilityBase)

void __ReleaseNamedObject(__reg("a0") struct NamedObject * object, __reg("a6") struct UtilityBase *)="\tjsr\t-258(a6)";
#define ReleaseNamedObject(object) __ReleaseNamedObject((object), UtilityBase)

void __RemNamedObject(__reg("a0") struct NamedObject * object, __reg("a1") struct Message * message, __reg("a6") struct UtilityBase *)="\tjsr\t-264(a6)";
#define RemNamedObject(object, message) __RemNamedObject((object), (message), UtilityBase)

ULONG __GetUniqueID(__reg("a6") struct UtilityBase *)="\tjsr\t-270(a6)";
#define GetUniqueID() __GetUniqueID(UtilityBase)

#endif /*  _VBCCINLINE_UTILITY_H  */
