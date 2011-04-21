#ifndef _VBCCINLINE_AML_H
#define _VBCCINLINE_AML_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

LONG __RexxDispatcher(__reg("a0") struct RexxMsg * rxm, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define RexxDispatcher(rxm) __RexxDispatcher((rxm), AmlBase)

APTR __CreateServerA(__reg("a0") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define CreateServerA(tags) __CreateServerA((tags), AmlBase)

VOID __DisposeServer(__reg("a0") APTR server, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define DisposeServer(server) __DisposeServer((server), AmlBase)

ULONG __SetServerAttrsA(__reg("a0") APTR server, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define SetServerAttrsA(server, tags) __SetServerAttrsA((server), (tags), AmlBase)

ULONG __GetServerAttrsA(__reg("a0") APTR server, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define GetServerAttrsA(server, tags) __GetServerAttrsA((server), (tags), AmlBase)

ULONG __GetServerHeaders(__reg("a0") APTR server, __reg("d0") ULONG flags, __reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define GetServerHeaders(server, flags) __GetServerHeaders((server), (flags), AmlBase)

LONG __GetServerArticles(__reg("a0") APTR server, __reg("a1") APTR folder, __reg("a2") struct Hook * hook, __reg("d0") ULONG flags, __reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define GetServerArticles(server, folder, hook, flags) __GetServerArticles((server), (folder), (hook), (flags), AmlBase)

APTR __CreateFolderA(__reg("a0") APTR server, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define CreateFolderA(server, tags) __CreateFolderA((server), (tags), AmlBase)

BOOL __DisposeFolder(__reg("a0") APTR folder, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define DisposeFolder(folder) __DisposeFolder((folder), AmlBase)

APTR __OpenFolderA(__reg("a0") APTR server, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define OpenFolderA(server, tags) __OpenFolderA((server), (tags), AmlBase)

BOOL __SaveFolder(__reg("a0") APTR folder, __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define SaveFolder(folder) __SaveFolder((folder), AmlBase)

BOOL __RemFolder(__reg("a0") APTR folder, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define RemFolder(folder) __RemFolder((folder), AmlBase)

ULONG __SetFolderAttrsA(__reg("a0") APTR folder, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define SetFolderAttrsA(folder, tags) __SetFolderAttrsA((folder), (tags), AmlBase)

ULONG __GetFolderAttrsA(__reg("a0") APTR folder, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define GetFolderAttrsA(folder, tags) __GetFolderAttrsA((folder), (tags), AmlBase)

BOOL __AddFolderArticle(__reg("a0") APTR folder, __reg("d0") ULONG type, __reg("a1") APTR data, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define AddFolderArticle(folder, type, data) __AddFolderArticle((folder), (type), (data), AmlBase)

BOOL __RemFolderArticle(__reg("a0") APTR folder, __reg("a1") APTR article, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define RemFolderArticle(folder, article) __RemFolderArticle((folder), (article), AmlBase)

ULONG __ReadFolderSpool(__reg("a0") APTR folder, __reg("a1") STRPTR importfile, __reg("d0") ULONG flags, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define ReadFolderSpool(folder, importfile, flags) __ReadFolderSpool((folder), (importfile), (flags), AmlBase)

ULONG __WriteFolderSpool(__reg("a0") APTR folder, __reg("a1") STRPTR exportfile, __reg("d0") ULONG flags, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define WriteFolderSpool(folder, exportfile, flags) __WriteFolderSpool((folder), (exportfile), (flags), AmlBase)

ULONG __ScanFolderIndex(__reg("a0") APTR folder, __reg("a1") struct Hook * hook, __reg("d0") ULONG flags, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define ScanFolderIndex(folder, hook, flags) __ScanFolderIndex((folder), (hook), (flags), AmlBase)

BOOL __ExpungeFolder(__reg("a0") APTR folder, __reg("a1") APTR trash, __reg("a2") struct Hook * hook, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define ExpungeFolder(folder, trash, hook) __ExpungeFolder((folder), (trash), (hook), AmlBase)

ULONG __CreateFolderIndex(__reg("a0") APTR folder, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define CreateFolderIndex(folder) __CreateFolderIndex((folder), AmlBase)

ULONG __SortFolderIndex(__reg("a0") APTR folder, __reg("d0") ULONG field, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define SortFolderIndex(folder, field) __SortFolderIndex((folder), (field), AmlBase)

APTR __CreateArticleA(__reg("a0") APTR folder, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define CreateArticleA(folder, tags) __CreateArticleA((folder), (tags), AmlBase)

BOOL __DisposeArticle(__reg("a0") APTR article, __reg("a6") struct Library *)="\tjsr\t-168(a6)";
#define DisposeArticle(article) __DisposeArticle((article), AmlBase)

APTR __OpenArticle(__reg("a0") APTR server, __reg("a1") APTR folder, __reg("d0") ULONG msgID, __reg("d1") ULONG flags, __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define OpenArticle(server, folder, msgID, flags) __OpenArticle((server), (folder), (msgID), (flags), AmlBase)

BOOL __CopyArticle(__reg("a0") APTR folder, __reg("a1") APTR article, __reg("a6") struct Library *)="\tjsr\t-180(a6)";
#define CopyArticle(folder, article) __CopyArticle((folder), (article), AmlBase)

ULONG __SetArticleAttrsA(__reg("a0") APTR article, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-186(a6)";
#define SetArticleAttrsA(article, tags) __SetArticleAttrsA((article), (tags), AmlBase)

ULONG __GetArticleAttrsA(__reg("a0") APTR article, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-192(a6)";
#define GetArticleAttrsA(article, tags) __GetArticleAttrsA((article), (tags), AmlBase)

BOOL __SendArticle(__reg("a0") APTR server, __reg("a1") APTR article, __reg("a2") UBYTE * from_file, __reg("a6") struct Library *)="\tjsr\t-198(a6)";
#define SendArticle(server, article, from_file) __SendArticle((server), (article), (from_file), AmlBase)

BOOL __AddArticlePartA(__reg("a0") APTR article, __reg("a1") APTR part, __reg("a2") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-204(a6)";
#define AddArticlePartA(article, part, tags) __AddArticlePartA((article), (part), (tags), AmlBase)

VOID __RemArticlePart(__reg("a0") APTR article, __reg("d0") APTR part, __reg("a6") struct Library *)="\tjsr\t-210(a6)";
#define RemArticlePart(article, part) __RemArticlePart((article), (part), AmlBase)

APTR __GetArticlePart(__reg("a0") APTR article, __reg("d0") ULONG partnum, __reg("a6") struct Library *)="\tjsr\t-216(a6)";
#define GetArticlePart(article, partnum) __GetArticlePart((article), (partnum), AmlBase)

ULONG __GetArticlePartAttrsA(__reg("a0") APTR part, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-222(a6)";
#define GetArticlePartAttrsA(part, tags) __GetArticlePartAttrsA((part), (tags), AmlBase)

ULONG __SetArticlePartAttrsA(__reg("a0") APTR part, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-228(a6)";
#define SetArticlePartAttrsA(part, tags) __SetArticlePartAttrsA((part), (tags), AmlBase)

APTR __CreateArticlePartA(__reg("a0") APTR article, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-234(a6)";
#define CreateArticlePartA(article, tags) __CreateArticlePartA((article), (tags), AmlBase)

VOID __DisposeArticlePart(__reg("a0") APTR part, __reg("a6") struct Library *)="\tjsr\t-240(a6)";
#define DisposeArticlePart(part) __DisposeArticlePart((part), AmlBase)

BOOL __GetArticlePartDataA(__reg("a0") APTR article, __reg("a1") APTR part, __reg("a2") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-246(a6)";
#define GetArticlePartDataA(article, part, tags) __GetArticlePartDataA((article), (part), (tags), AmlBase)

BOOL __SetArticlePartDataA(__reg("a0") APTR part, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-252(a6)";
#define SetArticlePartDataA(part, tags) __SetArticlePartDataA((part), (tags), AmlBase)

APTR __CreateAddressEntryA(__reg("a0") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-258(a6)";
#define CreateAddressEntryA(tags) __CreateAddressEntryA((tags), AmlBase)

BOOL __DisposeAddressEntry(__reg("a0") APTR addr, __reg("a6") struct Library *)="\tjsr\t-264(a6)";
#define DisposeAddressEntry(addr) __DisposeAddressEntry((addr), AmlBase)

APTR __OpenAddressEntry(__reg("a0") APTR server, __reg("d0") ULONG fileid, __reg("a6") struct Library *)="\tjsr\t-270(a6)";
#define OpenAddressEntry(server, fileid) __OpenAddressEntry((server), (fileid), AmlBase)

LONG __SaveAddressEntry(__reg("a0") APTR server, __reg("a1") APTR addr, __reg("a6") struct Library *)="\tjsr\t-276(a6)";
#define SaveAddressEntry(server, addr) __SaveAddressEntry((server), (addr), AmlBase)

BOOL __RemAddressEntry(__reg("a0") APTR server, __reg("a1") APTR addr, __reg("a6") struct Library *)="\tjsr\t-282(a6)";
#define RemAddressEntry(server, addr) __RemAddressEntry((server), (addr), AmlBase)

ULONG __GetAddressEntryAttrsA(__reg("a0") APTR addr, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-288(a6)";
#define GetAddressEntryAttrsA(addr, tags) __GetAddressEntryAttrsA((addr), (tags), AmlBase)

ULONG __SetAddressEntryAttrsA(__reg("a0") APTR addr, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-294(a6)";
#define SetAddressEntryAttrsA(addr, tags) __SetAddressEntryAttrsA((addr), (tags), AmlBase)

BOOL __MatchAddressA(__reg("a0") APTR addr, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-300(a6)";
#define MatchAddressA(addr, tags) __MatchAddressA((addr), (tags), AmlBase)

APTR __FindAddressEntryA(__reg("a0") APTR server, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-306(a6)";
#define FindAddressEntryA(server, tags) __FindAddressEntryA((server), (tags), AmlBase)

APTR __HuntAddressEntryA(__reg("a0") APTR server, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-312(a6)";
#define HuntAddressEntryA(server, tags) __HuntAddressEntryA((server), (tags), AmlBase)

ULONG __ScanAddressIndex(__reg("a0") APTR server, __reg("a1") struct Hook * hook, __reg("d0") ULONG type, __reg("d1") ULONG flags, __reg("a6") struct Library *)="\tjsr\t-318(a6)";
#define ScanAddressIndex(server, hook, type, flags) __ScanAddressIndex((server), (hook), (type), (flags), AmlBase)

BOOL __AddCustomField(__reg("a0") APTR addr, __reg("a1") STRPTR field, __reg("a2") STRPTR data, __reg("a6") struct Library *)="\tjsr\t-324(a6)";
#define AddCustomField(addr, field, data) __AddCustomField((addr), (field), (data), AmlBase)

BOOL __RemCustomField(__reg("a0") APTR addr, __reg("a1") STRPTR field, __reg("a6") struct Library *)="\tjsr\t-330(a6)";
#define RemCustomField(addr, field) __RemCustomField((addr), (field), AmlBase)

STRPTR __GetCustomFieldData(__reg("a0") APTR addr, __reg("a1") STRPTR field, __reg("a6") struct Library *)="\tjsr\t-336(a6)";
#define GetCustomFieldData(addr, field) __GetCustomFieldData((addr), (field), AmlBase)

APTR __CreateDecoderA(__reg("a0") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-342(a6)";
#define CreateDecoderA(tags) __CreateDecoderA((tags), AmlBase)

VOID __DisposeDecoder(__reg("a0") APTR dec, __reg("a6") struct Library *)="\tjsr\t-348(a6)";
#define DisposeDecoder(dec) __DisposeDecoder((dec), AmlBase)

ULONG __GetDecoderAttrsA(__reg("a0") APTR dec, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-354(a6)";
#define GetDecoderAttrsA(dec, tags) __GetDecoderAttrsA((dec), (tags), AmlBase)

ULONG __SetDecoderAttrsA(__reg("a0") APTR dec, __reg("a1") struct TagItem * tags, __reg("a6") struct Library *)="\tjsr\t-360(a6)";
#define SetDecoderAttrsA(dec, tags) __SetDecoderAttrsA((dec), (tags), AmlBase)

LONG __Decode(__reg("a0") APTR dec, __reg("d0") ULONG type, __reg("a6") struct Library *)="\tjsr\t-366(a6)";
#define Decode(dec, type) __Decode((dec), (type), AmlBase)

LONG __Encode(__reg("a0") APTR dec, __reg("d0") ULONG type, __reg("a6") struct Library *)="\tjsr\t-372(a6)";
#define Encode(dec, type) __Encode((dec), (type), AmlBase)

#endif /*  _VBCCINLINE_AML_H  */
