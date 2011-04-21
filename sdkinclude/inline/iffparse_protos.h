#ifndef _VBCCINLINE_IFFPARSE_H
#define _VBCCINLINE_IFFPARSE_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

struct IFFHandle * __AllocIFF(__reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define AllocIFF() __AllocIFF(IFFParseBase)

LONG __OpenIFF(__reg("a0") struct IFFHandle * iff, __reg("d0") long rwMode, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define OpenIFF(iff, rwMode) __OpenIFF((iff), (rwMode), IFFParseBase)

LONG __ParseIFF(__reg("a0") struct IFFHandle * iff, __reg("d0") long control, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define ParseIFF(iff, control) __ParseIFF((iff), (control), IFFParseBase)

void __CloseIFF(__reg("a0") struct IFFHandle * iff, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define CloseIFF(iff) __CloseIFF((iff), IFFParseBase)

void __FreeIFF(__reg("a0") struct IFFHandle * iff, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define FreeIFF(iff) __FreeIFF((iff), IFFParseBase)

LONG __ReadChunkBytes(__reg("a0") struct IFFHandle * iff, __reg("a1") APTR buf, __reg("d0") long numBytes, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define ReadChunkBytes(iff, buf, numBytes) __ReadChunkBytes((iff), (buf), (numBytes), IFFParseBase)

LONG __WriteChunkBytes(__reg("a0") struct IFFHandle * iff, __reg("a1") APTR buf, __reg("d0") long numBytes, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define WriteChunkBytes(iff, buf, numBytes) __WriteChunkBytes((iff), (buf), (numBytes), IFFParseBase)

LONG __ReadChunkRecords(__reg("a0") struct IFFHandle * iff, __reg("a1") APTR buf, __reg("d0") long bytesPerRecord, __reg("d1") long numRecords, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define ReadChunkRecords(iff, buf, bytesPerRecord, numRecords) __ReadChunkRecords((iff), (buf), (bytesPerRecord), (numRecords), IFFParseBase)

LONG __WriteChunkRecords(__reg("a0") struct IFFHandle * iff, __reg("a1") APTR buf, __reg("d0") long bytesPerRecord, __reg("d1") long numRecords, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define WriteChunkRecords(iff, buf, bytesPerRecord, numRecords) __WriteChunkRecords((iff), (buf), (bytesPerRecord), (numRecords), IFFParseBase)

LONG __PushChunk(__reg("a0") struct IFFHandle * iff, __reg("d0") long type, __reg("d1") long id, __reg("d2") long size, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define PushChunk(iff, type, id, size) __PushChunk((iff), (type), (id), (size), IFFParseBase)

LONG __PopChunk(__reg("a0") struct IFFHandle * iff, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define PopChunk(iff) __PopChunk((iff), IFFParseBase)

LONG __EntryHandler(__reg("a0") struct IFFHandle * iff, __reg("d0") long type, __reg("d1") long id, __reg("d2") long position, __reg("a1") struct Hook * handler, __reg("a2") APTR object, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define EntryHandler(iff, type, id, position, handler, object) __EntryHandler((iff), (type), (id), (position), (handler), (object), IFFParseBase)

LONG __ExitHandler(__reg("a0") struct IFFHandle * iff, __reg("d0") long type, __reg("d1") long id, __reg("d2") long position, __reg("a1") struct Hook * handler, __reg("a2") APTR object, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define ExitHandler(iff, type, id, position, handler, object) __ExitHandler((iff), (type), (id), (position), (handler), (object), IFFParseBase)

LONG __PropChunk(__reg("a0") struct IFFHandle * iff, __reg("d0") long type, __reg("d1") long id, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define PropChunk(iff, type, id) __PropChunk((iff), (type), (id), IFFParseBase)

LONG __PropChunks(__reg("a0") struct IFFHandle * iff, __reg("a1") LONG * propArray, __reg("d0") long numPairs, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define PropChunks(iff, propArray, numPairs) __PropChunks((iff), (propArray), (numPairs), IFFParseBase)

LONG __StopChunk(__reg("a0") struct IFFHandle * iff, __reg("d0") long type, __reg("d1") long id, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define StopChunk(iff, type, id) __StopChunk((iff), (type), (id), IFFParseBase)

LONG __StopChunks(__reg("a0") struct IFFHandle * iff, __reg("a1") LONG * propArray, __reg("d0") long numPairs, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define StopChunks(iff, propArray, numPairs) __StopChunks((iff), (propArray), (numPairs), IFFParseBase)

LONG __CollectionChunk(__reg("a0") struct IFFHandle * iff, __reg("d0") long type, __reg("d1") long id, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define CollectionChunk(iff, type, id) __CollectionChunk((iff), (type), (id), IFFParseBase)

LONG __CollectionChunks(__reg("a0") struct IFFHandle * iff, __reg("a1") LONG * propArray, __reg("d0") long numPairs, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define CollectionChunks(iff, propArray, numPairs) __CollectionChunks((iff), (propArray), (numPairs), IFFParseBase)

LONG __StopOnExit(__reg("a0") struct IFFHandle * iff, __reg("d0") long type, __reg("d1") long id, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define StopOnExit(iff, type, id) __StopOnExit((iff), (type), (id), IFFParseBase)

struct StoredProperty * __FindProp(__reg("a0") struct IFFHandle * iff, __reg("d0") long type, __reg("d1") long id, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define FindProp(iff, type, id) __FindProp((iff), (type), (id), IFFParseBase)

struct CollectionItem * __FindCollection(__reg("a0") struct IFFHandle * iff, __reg("d0") long type, __reg("d1") long id, __reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define FindCollection(iff, type, id) __FindCollection((iff), (type), (id), IFFParseBase)

struct ContextNode * __FindPropContext(__reg("a0") struct IFFHandle * iff, __reg("a6") struct Library *)="\tjsr\t-168(a6)";
#define FindPropContext(iff) __FindPropContext((iff), IFFParseBase)

struct ContextNode * __CurrentChunk(__reg("a0") struct IFFHandle * iff, __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define CurrentChunk(iff) __CurrentChunk((iff), IFFParseBase)

struct ContextNode * __ParentChunk(__reg("a0") struct ContextNode * contextNode, __reg("a6") struct Library *)="\tjsr\t-180(a6)";
#define ParentChunk(contextNode) __ParentChunk((contextNode), IFFParseBase)

struct LocalContextItem * __AllocLocalItem(__reg("d0") long type, __reg("d1") long id, __reg("d2") long ident, __reg("d3") long dataSize, __reg("a6") struct Library *)="\tjsr\t-186(a6)";
#define AllocLocalItem(type, id, ident, dataSize) __AllocLocalItem((type), (id), (ident), (dataSize), IFFParseBase)

APTR __LocalItemData(__reg("a0") struct LocalContextItem * localItem, __reg("a6") struct Library *)="\tjsr\t-192(a6)";
#define LocalItemData(localItem) __LocalItemData((localItem), IFFParseBase)

void __SetLocalItemPurge(__reg("a0") struct LocalContextItem * localItem, __reg("a1") struct Hook * purgeHook, __reg("a6") struct Library *)="\tjsr\t-198(a6)";
#define SetLocalItemPurge(localItem, purgeHook) __SetLocalItemPurge((localItem), (purgeHook), IFFParseBase)

void __FreeLocalItem(__reg("a0") struct LocalContextItem * localItem, __reg("a6") struct Library *)="\tjsr\t-204(a6)";
#define FreeLocalItem(localItem) __FreeLocalItem((localItem), IFFParseBase)

struct LocalContextItem * __FindLocalItem(__reg("a0") struct IFFHandle * iff, __reg("d0") long type, __reg("d1") long id, __reg("d2") long ident, __reg("a6") struct Library *)="\tjsr\t-210(a6)";
#define FindLocalItem(iff, type, id, ident) __FindLocalItem((iff), (type), (id), (ident), IFFParseBase)

LONG __StoreLocalItem(__reg("a0") struct IFFHandle * iff, __reg("a1") struct LocalContextItem * localItem, __reg("d0") long position, __reg("a6") struct Library *)="\tjsr\t-216(a6)";
#define StoreLocalItem(iff, localItem, position) __StoreLocalItem((iff), (localItem), (position), IFFParseBase)

void __StoreItemInContext(__reg("a0") struct IFFHandle * iff, __reg("a1") struct LocalContextItem * localItem, __reg("a2") struct ContextNode * contextNode, __reg("a6") struct Library *)="\tjsr\t-222(a6)";
#define StoreItemInContext(iff, localItem, contextNode) __StoreItemInContext((iff), (localItem), (contextNode), IFFParseBase)

void __InitIFF(__reg("a0") struct IFFHandle * iff, __reg("d0") long flags, __reg("a1") struct Hook * streamHook, __reg("a6") struct Library *)="\tjsr\t-228(a6)";
#define InitIFF(iff, flags, streamHook) __InitIFF((iff), (flags), (streamHook), IFFParseBase)

void __InitIFFasDOS(__reg("a0") struct IFFHandle * iff, __reg("a6") struct Library *)="\tjsr\t-234(a6)";
#define InitIFFasDOS(iff) __InitIFFasDOS((iff), IFFParseBase)

void __InitIFFasClip(__reg("a0") struct IFFHandle * iff, __reg("a6") struct Library *)="\tjsr\t-240(a6)";
#define InitIFFasClip(iff) __InitIFFasClip((iff), IFFParseBase)

struct ClipboardHandle * __OpenClipboard(__reg("d0") long unitNumber, __reg("a6") struct Library *)="\tjsr\t-246(a6)";
#define OpenClipboard(unitNumber) __OpenClipboard((unitNumber), IFFParseBase)

void __CloseClipboard(__reg("a0") struct ClipboardHandle * clipHandle, __reg("a6") struct Library *)="\tjsr\t-252(a6)";
#define CloseClipboard(clipHandle) __CloseClipboard((clipHandle), IFFParseBase)

LONG __GoodID(__reg("d0") long id, __reg("a6") struct Library *)="\tjsr\t-258(a6)";
#define GoodID(id) __GoodID((id), IFFParseBase)

LONG __GoodType(__reg("d0") long type, __reg("a6") struct Library *)="\tjsr\t-264(a6)";
#define GoodType(type) __GoodType((type), IFFParseBase)

STRPTR __IDtoStr(__reg("d0") long id, __reg("a0") STRPTR buf, __reg("a6") struct Library *)="\tjsr\t-270(a6)";
#define IDtoStr(id, buf) __IDtoStr((id), (buf), IFFParseBase)

#endif /*  _VBCCINLINE_IFFPARSE_H  */
