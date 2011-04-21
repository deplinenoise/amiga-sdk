#ifndef _VBCCINLINE_DOS_H
#define _VBCCINLINE_DOS_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

BPTR __Open(__reg("d1") STRPTR name, __reg("d2") long accessMode, __reg("a6") struct DosLibrary *)="\tjsr\t-30(a6)";
#define Open(name, accessMode) __Open((name), (accessMode), DOSBase)

LONG __Close(__reg("d1") BPTR file, __reg("a6") struct DosLibrary *)="\tjsr\t-36(a6)";
#define Close(file) __Close((file), DOSBase)

LONG __Read(__reg("d1") BPTR file, __reg("d2") APTR buffer, __reg("d3") long length, __reg("a6") struct DosLibrary *)="\tjsr\t-42(a6)";
#define Read(file, buffer, length) __Read((file), (buffer), (length), DOSBase)

LONG __Write(__reg("d1") BPTR file, __reg("d2") APTR buffer, __reg("d3") long length, __reg("a6") struct DosLibrary *)="\tjsr\t-48(a6)";
#define Write(file, buffer, length) __Write((file), (buffer), (length), DOSBase)

BPTR __Input(__reg("a6") struct DosLibrary *)="\tjsr\t-54(a6)";
#define Input() __Input(DOSBase)

BPTR __Output(__reg("a6") struct DosLibrary *)="\tjsr\t-60(a6)";
#define Output() __Output(DOSBase)

LONG __Seek(__reg("d1") BPTR file, __reg("d2") long position, __reg("d3") long offset, __reg("a6") struct DosLibrary *)="\tjsr\t-66(a6)";
#define Seek(file, position, offset) __Seek((file), (position), (offset), DOSBase)

LONG __DeleteFile(__reg("d1") STRPTR name, __reg("a6") struct DosLibrary *)="\tjsr\t-72(a6)";
#define DeleteFile(name) __DeleteFile((name), DOSBase)

LONG __Rename(__reg("d1") STRPTR oldName, __reg("d2") STRPTR newName, __reg("a6") struct DosLibrary *)="\tjsr\t-78(a6)";
#define Rename(oldName, newName) __Rename((oldName), (newName), DOSBase)

BPTR __Lock(__reg("d1") STRPTR name, __reg("d2") long type, __reg("a6") struct DosLibrary *)="\tjsr\t-84(a6)";
#define Lock(name, type) __Lock((name), (type), DOSBase)

void __UnLock(__reg("d1") BPTR lock, __reg("a6") struct DosLibrary *)="\tjsr\t-90(a6)";
#define UnLock(lock) __UnLock((lock), DOSBase)

BPTR __DupLock(__reg("d1") BPTR lock, __reg("a6") struct DosLibrary *)="\tjsr\t-96(a6)";
#define DupLock(lock) __DupLock((lock), DOSBase)

LONG __Examine(__reg("d1") BPTR lock, __reg("d2") struct FileInfoBlock * fileInfoBlock, __reg("a6") struct DosLibrary *)="\tjsr\t-102(a6)";
#define Examine(lock, fileInfoBlock) __Examine((lock), (fileInfoBlock), DOSBase)

LONG __ExNext(__reg("d1") BPTR lock, __reg("d2") struct FileInfoBlock * fileInfoBlock, __reg("a6") struct DosLibrary *)="\tjsr\t-108(a6)";
#define ExNext(lock, fileInfoBlock) __ExNext((lock), (fileInfoBlock), DOSBase)

LONG __Info(__reg("d1") BPTR lock, __reg("d2") struct InfoData * parameterBlock, __reg("a6") struct DosLibrary *)="\tjsr\t-114(a6)";
#define Info(lock, parameterBlock) __Info((lock), (parameterBlock), DOSBase)

BPTR __CreateDir(__reg("d1") STRPTR name, __reg("a6") struct DosLibrary *)="\tjsr\t-120(a6)";
#define CreateDir(name) __CreateDir((name), DOSBase)

BPTR __CurrentDir(__reg("d1") BPTR lock, __reg("a6") struct DosLibrary *)="\tjsr\t-126(a6)";
#define CurrentDir(lock) __CurrentDir((lock), DOSBase)

LONG __IoErr(__reg("a6") struct DosLibrary *)="\tjsr\t-132(a6)";
#define IoErr() __IoErr(DOSBase)

struct MsgPort * __CreateProc(__reg("d1") STRPTR name, __reg("d2") long pri, __reg("d3") BPTR segList, __reg("d4") long stackSize, __reg("a6") struct DosLibrary *)="\tjsr\t-138(a6)";
#define CreateProc(name, pri, segList, stackSize) __CreateProc((name), (pri), (segList), (stackSize), DOSBase)

void __Exit(__reg("d1") long returnCode, __reg("a6") struct DosLibrary *)="\tjsr\t-144(a6)";
#define Exit(returnCode) __Exit((returnCode), DOSBase)

BPTR __LoadSeg(__reg("d1") STRPTR name, __reg("a6") struct DosLibrary *)="\tjsr\t-150(a6)";
#define LoadSeg(name) __LoadSeg((name), DOSBase)

void __UnLoadSeg(__reg("d1") BPTR seglist, __reg("a6") struct DosLibrary *)="\tjsr\t-156(a6)";
#define UnLoadSeg(seglist) __UnLoadSeg((seglist), DOSBase)

struct MsgPort * __DeviceProc(__reg("d1") STRPTR name, __reg("a6") struct DosLibrary *)="\tjsr\t-174(a6)";
#define DeviceProc(name) __DeviceProc((name), DOSBase)

LONG __SetComment(__reg("d1") STRPTR name, __reg("d2") STRPTR comment, __reg("a6") struct DosLibrary *)="\tjsr\t-180(a6)";
#define SetComment(name, comment) __SetComment((name), (comment), DOSBase)

LONG __SetProtection(__reg("d1") STRPTR name, __reg("d2") long protect, __reg("a6") struct DosLibrary *)="\tjsr\t-186(a6)";
#define SetProtection(name, protect) __SetProtection((name), (protect), DOSBase)

struct DateStamp * __DateStamp(__reg("d1") struct DateStamp * date, __reg("a6") struct DosLibrary *)="\tjsr\t-192(a6)";
#define DateStamp(date) __DateStamp((date), DOSBase)

void __Delay(__reg("d1") long timeout, __reg("a6") struct DosLibrary *)="\tjsr\t-198(a6)";
#define Delay(timeout) __Delay((timeout), DOSBase)

LONG __WaitForChar(__reg("d1") BPTR file, __reg("d2") long timeout, __reg("a6") struct DosLibrary *)="\tjsr\t-204(a6)";
#define WaitForChar(file, timeout) __WaitForChar((file), (timeout), DOSBase)

BPTR __ParentDir(__reg("d1") BPTR lock, __reg("a6") struct DosLibrary *)="\tjsr\t-210(a6)";
#define ParentDir(lock) __ParentDir((lock), DOSBase)

LONG __IsInteractive(__reg("d1") BPTR file, __reg("a6") struct DosLibrary *)="\tjsr\t-216(a6)";
#define IsInteractive(file) __IsInteractive((file), DOSBase)

LONG __Execute(__reg("d1") STRPTR string, __reg("d2") BPTR file, __reg("d3") BPTR file2, __reg("a6") struct DosLibrary *)="\tjsr\t-222(a6)";
#define Execute(string, file, file2) __Execute((string), (file), (file2), DOSBase)

APTR __AllocDosObject(__reg("d1") unsigned long type, __reg("d2") struct TagItem * tags, __reg("a6") struct DosLibrary *)="\tjsr\t-228(a6)";
#define AllocDosObject(type, tags) __AllocDosObject((type), (tags), DOSBase)

#define AllocDosObjectTagList(type, tags) __AllocDosObject((type), (tags), DOSBase)

void __FreeDosObject(__reg("d1") unsigned long type, __reg("d2") APTR ptr, __reg("a6") struct DosLibrary *)="\tjsr\t-234(a6)";
#define FreeDosObject(type, ptr) __FreeDosObject((type), (ptr), DOSBase)

LONG __DoPkt(__reg("d1") struct MsgPort * port, __reg("d2") long action, __reg("d3") long arg1, __reg("d4") long arg2, __reg("d5") long arg3, __reg("d6") long arg4, __reg("d7") long arg5, __reg("a6") struct DosLibrary *)="\tjsr\t-240(a6)";
#define DoPkt(port, action, arg1, arg2, arg3, arg4, arg5) __DoPkt((port), (action), (arg1), (arg2), (arg3), (arg4), (arg5), DOSBase)

LONG __DoPkt0(__reg("d1") struct MsgPort * port, __reg("d2") long action, __reg("a6") struct DosLibrary *)="\tjsr\t-240(a6)";
#define DoPkt0(port, action) __DoPkt0((port), (action), DOSBase)

LONG __DoPkt1(__reg("d1") struct MsgPort * port, __reg("d2") long action, __reg("d3") long arg1, __reg("a6") struct DosLibrary *)="\tjsr\t-240(a6)";
#define DoPkt1(port, action, arg1) __DoPkt1((port), (action), (arg1), DOSBase)

LONG __DoPkt2(__reg("d1") struct MsgPort * port, __reg("d2") long action, __reg("d3") long arg1, __reg("d4") long arg2, __reg("a6") struct DosLibrary *)="\tjsr\t-240(a6)";
#define DoPkt2(port, action, arg1, arg2) __DoPkt2((port), (action), (arg1), (arg2), DOSBase)

LONG __DoPkt3(__reg("d1") struct MsgPort * port, __reg("d2") long action, __reg("d3") long arg1, __reg("d4") long arg2, __reg("d5") long arg3, __reg("a6") struct DosLibrary *)="\tjsr\t-240(a6)";
#define DoPkt3(port, action, arg1, arg2, arg3) __DoPkt3((port), (action), (arg1), (arg2), (arg3), DOSBase)

LONG __DoPkt4(__reg("d1") struct MsgPort * port, __reg("d2") long action, __reg("d3") long arg1, __reg("d4") long arg2, __reg("d5") long arg3, __reg("d6") long arg4, __reg("a6") struct DosLibrary *)="\tjsr\t-240(a6)";
#define DoPkt4(port, action, arg1, arg2, arg3, arg4) __DoPkt4((port), (action), (arg1), (arg2), (arg3), (arg4), DOSBase)

void __SendPkt(__reg("d1") struct DosPacket * dp, __reg("d2") struct MsgPort * port, __reg("d3") struct MsgPort * replyport, __reg("a6") struct DosLibrary *)="\tjsr\t-246(a6)";
#define SendPkt(dp, port, replyport) __SendPkt((dp), (port), (replyport), DOSBase)

struct DosPacket * __WaitPkt(__reg("a6") struct DosLibrary *)="\tjsr\t-252(a6)";
#define WaitPkt() __WaitPkt(DOSBase)

void __ReplyPkt(__reg("d1") struct DosPacket * dp, __reg("d2") long res1, __reg("d3") long res2, __reg("a6") struct DosLibrary *)="\tjsr\t-258(a6)";
#define ReplyPkt(dp, res1, res2) __ReplyPkt((dp), (res1), (res2), DOSBase)

void __AbortPkt(__reg("d1") struct MsgPort * port, __reg("d2") struct DosPacket * pkt, __reg("a6") struct DosLibrary *)="\tjsr\t-264(a6)";
#define AbortPkt(port, pkt) __AbortPkt((port), (pkt), DOSBase)

BOOL __LockRecord(__reg("d1") BPTR fh, __reg("d2") unsigned long offset, __reg("d3") unsigned long length, __reg("d4") unsigned long mode, __reg("d5") unsigned long timeout, __reg("a6") struct DosLibrary *)="\tjsr\t-270(a6)";
#define LockRecord(fh, offset, length, mode, timeout) __LockRecord((fh), (offset), (length), (mode), (timeout), DOSBase)

BOOL __LockRecords(__reg("d1") struct RecordLock * recArray, __reg("d2") unsigned long timeout, __reg("a6") struct DosLibrary *)="\tjsr\t-276(a6)";
#define LockRecords(recArray, timeout) __LockRecords((recArray), (timeout), DOSBase)

BOOL __UnLockRecord(__reg("d1") BPTR fh, __reg("d2") unsigned long offset, __reg("d3") unsigned long length, __reg("a6") struct DosLibrary *)="\tjsr\t-282(a6)";
#define UnLockRecord(fh, offset, length) __UnLockRecord((fh), (offset), (length), DOSBase)

BOOL __UnLockRecords(__reg("d1") struct RecordLock * recArray, __reg("a6") struct DosLibrary *)="\tjsr\t-288(a6)";
#define UnLockRecords(recArray) __UnLockRecords((recArray), DOSBase)

BPTR __SelectInput(__reg("d1") BPTR fh, __reg("a6") struct DosLibrary *)="\tjsr\t-294(a6)";
#define SelectInput(fh) __SelectInput((fh), DOSBase)

BPTR __SelectOutput(__reg("d1") BPTR fh, __reg("a6") struct DosLibrary *)="\tjsr\t-300(a6)";
#define SelectOutput(fh) __SelectOutput((fh), DOSBase)

LONG __FGetC(__reg("d1") BPTR fh, __reg("a6") struct DosLibrary *)="\tjsr\t-306(a6)";
#define FGetC(fh) __FGetC((fh), DOSBase)

LONG __FPutC(__reg("d1") BPTR fh, __reg("d2") long ch, __reg("a6") struct DosLibrary *)="\tjsr\t-312(a6)";
#define FPutC(fh, ch) __FPutC((fh), (ch), DOSBase)

LONG __UnGetC(__reg("d1") BPTR fh, __reg("d2") long character, __reg("a6") struct DosLibrary *)="\tjsr\t-318(a6)";
#define UnGetC(fh, character) __UnGetC((fh), (character), DOSBase)

LONG __FRead(__reg("d1") BPTR fh, __reg("d2") APTR block, __reg("d3") unsigned long blocklen, __reg("d4") unsigned long number, __reg("a6") struct DosLibrary *)="\tjsr\t-324(a6)";
#define FRead(fh, block, blocklen, number) __FRead((fh), (block), (blocklen), (number), DOSBase)

LONG __FWrite(__reg("d1") BPTR fh, __reg("d2") APTR block, __reg("d3") unsigned long blocklen, __reg("d4") unsigned long number, __reg("a6") struct DosLibrary *)="\tjsr\t-330(a6)";
#define FWrite(fh, block, blocklen, number) __FWrite((fh), (block), (blocklen), (number), DOSBase)

STRPTR __FGets(__reg("d1") BPTR fh, __reg("d2") STRPTR buf, __reg("d3") unsigned long buflen, __reg("a6") struct DosLibrary *)="\tjsr\t-336(a6)";
#define FGets(fh, buf, buflen) __FGets((fh), (buf), (buflen), DOSBase)

LONG __FPuts(__reg("d1") BPTR fh, __reg("d2") STRPTR str, __reg("a6") struct DosLibrary *)="\tjsr\t-342(a6)";
#define FPuts(fh, str) __FPuts((fh), (str), DOSBase)

void __VFWritef(__reg("d1") BPTR fh, __reg("d2") STRPTR format, __reg("d3") LONG * argarray, __reg("a6") struct DosLibrary *)="\tjsr\t-348(a6)";
#define VFWritef(fh, format, argarray) __VFWritef((fh), (format), (argarray), DOSBase)

LONG __VFPrintf(__reg("d1") BPTR fh, __reg("d2") STRPTR format, __reg("d3") APTR argarray, __reg("a6") struct DosLibrary *)="\tjsr\t-354(a6)";
#define VFPrintf(fh, format, argarray) __VFPrintf((fh), (format), (argarray), DOSBase)

LONG __Flush(__reg("d1") BPTR fh, __reg("a6") struct DosLibrary *)="\tjsr\t-360(a6)";
#define Flush(fh) __Flush((fh), DOSBase)

LONG __SetVBuf(__reg("d1") BPTR fh, __reg("d2") STRPTR buff, __reg("d3") long type, __reg("d4") long size, __reg("a6") struct DosLibrary *)="\tjsr\t-366(a6)";
#define SetVBuf(fh, buff, type, size) __SetVBuf((fh), (buff), (type), (size), DOSBase)

BPTR __DupLockFromFH(__reg("d1") BPTR fh, __reg("a6") struct DosLibrary *)="\tjsr\t-372(a6)";
#define DupLockFromFH(fh) __DupLockFromFH((fh), DOSBase)

BPTR __OpenFromLock(__reg("d1") BPTR lock, __reg("a6") struct DosLibrary *)="\tjsr\t-378(a6)";
#define OpenFromLock(lock) __OpenFromLock((lock), DOSBase)

BPTR __ParentOfFH(__reg("d1") BPTR fh, __reg("a6") struct DosLibrary *)="\tjsr\t-384(a6)";
#define ParentOfFH(fh) __ParentOfFH((fh), DOSBase)

BOOL __ExamineFH(__reg("d1") BPTR fh, __reg("d2") struct FileInfoBlock * fib, __reg("a6") struct DosLibrary *)="\tjsr\t-390(a6)";
#define ExamineFH(fh, fib) __ExamineFH((fh), (fib), DOSBase)

LONG __SetFileDate(__reg("d1") STRPTR name, __reg("d2") struct DateStamp * date, __reg("a6") struct DosLibrary *)="\tjsr\t-396(a6)";
#define SetFileDate(name, date) __SetFileDate((name), (date), DOSBase)

LONG __NameFromLock(__reg("d1") BPTR lock, __reg("d2") STRPTR buffer, __reg("d3") long len, __reg("a6") struct DosLibrary *)="\tjsr\t-402(a6)";
#define NameFromLock(lock, buffer, len) __NameFromLock((lock), (buffer), (len), DOSBase)

LONG __NameFromFH(__reg("d1") BPTR fh, __reg("d2") STRPTR buffer, __reg("d3") long len, __reg("a6") struct DosLibrary *)="\tjsr\t-408(a6)";
#define NameFromFH(fh, buffer, len) __NameFromFH((fh), (buffer), (len), DOSBase)

WORD __SplitName(__reg("d1") STRPTR name, __reg("d2") unsigned long seperator, __reg("d3") STRPTR buf, __reg("d4") long oldpos, __reg("d5") long size, __reg("a6") struct DosLibrary *)="\tjsr\t-414(a6)";
#define SplitName(name, seperator, buf, oldpos, size) __SplitName((name), (seperator), (buf), (oldpos), (size), DOSBase)

LONG __SameLock(__reg("d1") BPTR lock1, __reg("d2") BPTR lock2, __reg("a6") struct DosLibrary *)="\tjsr\t-420(a6)";
#define SameLock(lock1, lock2) __SameLock((lock1), (lock2), DOSBase)

LONG __SetMode(__reg("d1") BPTR fh, __reg("d2") long mode, __reg("a6") struct DosLibrary *)="\tjsr\t-426(a6)";
#define SetMode(fh, mode) __SetMode((fh), (mode), DOSBase)

LONG __ExAll(__reg("d1") BPTR lock, __reg("d2") struct ExAllData * buffer, __reg("d3") long size, __reg("d4") long data, __reg("d5") struct ExAllControl * control, __reg("a6") struct DosLibrary *)="\tjsr\t-432(a6)";
#define ExAll(lock, buffer, size, data, control) __ExAll((lock), (buffer), (size), (data), (control), DOSBase)

LONG __ReadLink(__reg("d1") struct MsgPort * port, __reg("d2") BPTR lock, __reg("d3") STRPTR path, __reg("d4") STRPTR buffer, __reg("d5") unsigned long size, __reg("a6") struct DosLibrary *)="\tjsr\t-438(a6)";
#define ReadLink(port, lock, path, buffer, size) __ReadLink((port), (lock), (path), (buffer), (size), DOSBase)

LONG __MakeLink(__reg("d1") STRPTR name, __reg("d2") long dest, __reg("d3") long soft, __reg("a6") struct DosLibrary *)="\tjsr\t-444(a6)";
#define MakeLink(name, dest, soft) __MakeLink((name), (dest), (soft), DOSBase)

LONG __ChangeMode(__reg("d1") long type, __reg("d2") BPTR fh, __reg("d3") long newmode, __reg("a6") struct DosLibrary *)="\tjsr\t-450(a6)";
#define ChangeMode(type, fh, newmode) __ChangeMode((type), (fh), (newmode), DOSBase)

LONG __SetFileSize(__reg("d1") BPTR fh, __reg("d2") long pos, __reg("d3") long mode, __reg("a6") struct DosLibrary *)="\tjsr\t-456(a6)";
#define SetFileSize(fh, pos, mode) __SetFileSize((fh), (pos), (mode), DOSBase)

LONG __SetIoErr(__reg("d1") long result, __reg("a6") struct DosLibrary *)="\tjsr\t-462(a6)";
#define SetIoErr(result) __SetIoErr((result), DOSBase)

BOOL __Fault(__reg("d1") long code, __reg("d2") STRPTR header, __reg("d3") STRPTR buffer, __reg("d4") long len, __reg("a6") struct DosLibrary *)="\tjsr\t-468(a6)";
#define Fault(code, header, buffer, len) __Fault((code), (header), (buffer), (len), DOSBase)

BOOL __PrintFault(__reg("d1") long code, __reg("d2") STRPTR header, __reg("a6") struct DosLibrary *)="\tjsr\t-474(a6)";
#define PrintFault(code, header) __PrintFault((code), (header), DOSBase)

LONG __ErrorReport(__reg("d1") long code, __reg("d2") long type, __reg("d3") unsigned long arg1, __reg("d4") struct MsgPort * device, __reg("a6") struct DosLibrary *)="\tjsr\t-480(a6)";
#define ErrorReport(code, type, arg1, device) __ErrorReport((code), (type), (arg1), (device), DOSBase)

struct CommandLineInterface * __Cli(__reg("a6") struct DosLibrary *)="\tjsr\t-492(a6)";
#define Cli() __Cli(DOSBase)

struct Process * __CreateNewProc(__reg("d1") struct TagItem * tags, __reg("a6") struct DosLibrary *)="\tjsr\t-498(a6)";
#define CreateNewProc(tags) __CreateNewProc((tags), DOSBase)

#define CreateNewProcTagList(tags) __CreateNewProc((tags), DOSBase)

LONG __RunCommand(__reg("d1") BPTR seg, __reg("d2") long stack, __reg("d3") STRPTR paramptr, __reg("d4") long paramlen, __reg("a6") struct DosLibrary *)="\tjsr\t-504(a6)";
#define RunCommand(seg, stack, paramptr, paramlen) __RunCommand((seg), (stack), (paramptr), (paramlen), DOSBase)

struct MsgPort * __GetConsoleTask(__reg("a6") struct DosLibrary *)="\tjsr\t-510(a6)";
#define GetConsoleTask() __GetConsoleTask(DOSBase)

struct MsgPort * __SetConsoleTask(__reg("d1") struct MsgPort * task, __reg("a6") struct DosLibrary *)="\tjsr\t-516(a6)";
#define SetConsoleTask(task) __SetConsoleTask((task), DOSBase)

struct MsgPort * __GetFileSysTask(__reg("a6") struct DosLibrary *)="\tjsr\t-522(a6)";
#define GetFileSysTask() __GetFileSysTask(DOSBase)

struct MsgPort * __SetFileSysTask(__reg("d1") struct MsgPort * task, __reg("a6") struct DosLibrary *)="\tjsr\t-528(a6)";
#define SetFileSysTask(task) __SetFileSysTask((task), DOSBase)

STRPTR __GetArgStr(__reg("a6") struct DosLibrary *)="\tjsr\t-534(a6)";
#define GetArgStr() __GetArgStr(DOSBase)

BOOL __SetArgStr(__reg("d1") STRPTR string, __reg("a6") struct DosLibrary *)="\tjsr\t-540(a6)";
#define SetArgStr(string) __SetArgStr((string), DOSBase)

struct Process * __FindCliProc(__reg("d1") unsigned long num, __reg("a6") struct DosLibrary *)="\tjsr\t-546(a6)";
#define FindCliProc(num) __FindCliProc((num), DOSBase)

ULONG __MaxCli(__reg("a6") struct DosLibrary *)="\tjsr\t-552(a6)";
#define MaxCli() __MaxCli(DOSBase)

BOOL __SetCurrentDirName(__reg("d1") STRPTR name, __reg("a6") struct DosLibrary *)="\tjsr\t-558(a6)";
#define SetCurrentDirName(name) __SetCurrentDirName((name), DOSBase)

BOOL __GetCurrentDirName(__reg("d1") STRPTR buf, __reg("d2") long len, __reg("a6") struct DosLibrary *)="\tjsr\t-564(a6)";
#define GetCurrentDirName(buf, len) __GetCurrentDirName((buf), (len), DOSBase)

BOOL __SetProgramName(__reg("d1") STRPTR name, __reg("a6") struct DosLibrary *)="\tjsr\t-570(a6)";
#define SetProgramName(name) __SetProgramName((name), DOSBase)

BOOL __GetProgramName(__reg("d1") STRPTR buf, __reg("d2") long len, __reg("a6") struct DosLibrary *)="\tjsr\t-576(a6)";
#define GetProgramName(buf, len) __GetProgramName((buf), (len), DOSBase)

BOOL __SetPrompt(__reg("d1") STRPTR name, __reg("a6") struct DosLibrary *)="\tjsr\t-582(a6)";
#define SetPrompt(name) __SetPrompt((name), DOSBase)

BOOL __GetPrompt(__reg("d1") STRPTR buf, __reg("d2") long len, __reg("a6") struct DosLibrary *)="\tjsr\t-588(a6)";
#define GetPrompt(buf, len) __GetPrompt((buf), (len), DOSBase)

BPTR __SetProgramDir(__reg("d1") BPTR lock, __reg("a6") struct DosLibrary *)="\tjsr\t-594(a6)";
#define SetProgramDir(lock) __SetProgramDir((lock), DOSBase)

BPTR __GetProgramDir(__reg("a6") struct DosLibrary *)="\tjsr\t-600(a6)";
#define GetProgramDir() __GetProgramDir(DOSBase)

LONG __SystemTagList(__reg("d1") STRPTR command, __reg("d2") struct TagItem * tags, __reg("a6") struct DosLibrary *)="\tjsr\t-606(a6)";
#define SystemTagList(command, tags) __SystemTagList((command), (tags), DOSBase)

#define System(command, tags) __SystemTagList((command), (tags), DOSBase)

LONG __AssignLock(__reg("d1") STRPTR name, __reg("d2") BPTR lock, __reg("a6") struct DosLibrary *)="\tjsr\t-612(a6)";
#define AssignLock(name, lock) __AssignLock((name), (lock), DOSBase)

BOOL __AssignLate(__reg("d1") STRPTR name, __reg("d2") STRPTR path, __reg("a6") struct DosLibrary *)="\tjsr\t-618(a6)";
#define AssignLate(name, path) __AssignLate((name), (path), DOSBase)

BOOL __AssignPath(__reg("d1") STRPTR name, __reg("d2") STRPTR path, __reg("a6") struct DosLibrary *)="\tjsr\t-624(a6)";
#define AssignPath(name, path) __AssignPath((name), (path), DOSBase)

BOOL __AssignAdd(__reg("d1") STRPTR name, __reg("d2") BPTR lock, __reg("a6") struct DosLibrary *)="\tjsr\t-630(a6)";
#define AssignAdd(name, lock) __AssignAdd((name), (lock), DOSBase)

LONG __RemAssignList(__reg("d1") STRPTR name, __reg("d2") BPTR lock, __reg("a6") struct DosLibrary *)="\tjsr\t-636(a6)";
#define RemAssignList(name, lock) __RemAssignList((name), (lock), DOSBase)

struct DevProc * __GetDeviceProc(__reg("d1") STRPTR name, __reg("d2") struct DevProc * dp, __reg("a6") struct DosLibrary *)="\tjsr\t-642(a6)";
#define GetDeviceProc(name, dp) __GetDeviceProc((name), (dp), DOSBase)

void __FreeDeviceProc(__reg("d1") struct DevProc * dp, __reg("a6") struct DosLibrary *)="\tjsr\t-648(a6)";
#define FreeDeviceProc(dp) __FreeDeviceProc((dp), DOSBase)

struct DosList * __LockDosList(__reg("d1") unsigned long flags, __reg("a6") struct DosLibrary *)="\tjsr\t-654(a6)";
#define LockDosList(flags) __LockDosList((flags), DOSBase)

void __UnLockDosList(__reg("d1") unsigned long flags, __reg("a6") struct DosLibrary *)="\tjsr\t-660(a6)";
#define UnLockDosList(flags) __UnLockDosList((flags), DOSBase)

struct DosList * __AttemptLockDosList(__reg("d1") unsigned long flags, __reg("a6") struct DosLibrary *)="\tjsr\t-666(a6)";
#define AttemptLockDosList(flags) __AttemptLockDosList((flags), DOSBase)

BOOL __RemDosEntry(__reg("d1") struct DosList * dlist, __reg("a6") struct DosLibrary *)="\tjsr\t-672(a6)";
#define RemDosEntry(dlist) __RemDosEntry((dlist), DOSBase)

LONG __AddDosEntry(__reg("d1") struct DosList * dlist, __reg("a6") struct DosLibrary *)="\tjsr\t-678(a6)";
#define AddDosEntry(dlist) __AddDosEntry((dlist), DOSBase)

struct DosList * __FindDosEntry(__reg("d1") struct DosList * dlist, __reg("d2") STRPTR name, __reg("d3") unsigned long flags, __reg("a6") struct DosLibrary *)="\tjsr\t-684(a6)";
#define FindDosEntry(dlist, name, flags) __FindDosEntry((dlist), (name), (flags), DOSBase)

struct DosList * __NextDosEntry(__reg("d1") struct DosList * dlist, __reg("d2") unsigned long flags, __reg("a6") struct DosLibrary *)="\tjsr\t-690(a6)";
#define NextDosEntry(dlist, flags) __NextDosEntry((dlist), (flags), DOSBase)

struct DosList * __MakeDosEntry(__reg("d1") STRPTR name, __reg("d2") long type, __reg("a6") struct DosLibrary *)="\tjsr\t-696(a6)";
#define MakeDosEntry(name, type) __MakeDosEntry((name), (type), DOSBase)

void __FreeDosEntry(__reg("d1") struct DosList * dlist, __reg("a6") struct DosLibrary *)="\tjsr\t-702(a6)";
#define FreeDosEntry(dlist) __FreeDosEntry((dlist), DOSBase)

BOOL __IsFileSystem(__reg("d1") STRPTR name, __reg("a6") struct DosLibrary *)="\tjsr\t-708(a6)";
#define IsFileSystem(name) __IsFileSystem((name), DOSBase)

BOOL __Format(__reg("d1") STRPTR filesystem, __reg("d2") STRPTR volumename, __reg("d3") unsigned long dostype, __reg("a6") struct DosLibrary *)="\tjsr\t-714(a6)";
#define Format(filesystem, volumename, dostype) __Format((filesystem), (volumename), (dostype), DOSBase)

LONG __Relabel(__reg("d1") STRPTR drive, __reg("d2") STRPTR newname, __reg("a6") struct DosLibrary *)="\tjsr\t-720(a6)";
#define Relabel(drive, newname) __Relabel((drive), (newname), DOSBase)

LONG __Inhibit(__reg("d1") STRPTR name, __reg("d2") long onoff, __reg("a6") struct DosLibrary *)="\tjsr\t-726(a6)";
#define Inhibit(name, onoff) __Inhibit((name), (onoff), DOSBase)

LONG __AddBuffers(__reg("d1") STRPTR name, __reg("d2") long number, __reg("a6") struct DosLibrary *)="\tjsr\t-732(a6)";
#define AddBuffers(name, number) __AddBuffers((name), (number), DOSBase)

LONG __CompareDates(__reg("d1") struct DateStamp * date1, __reg("d2") struct DateStamp * date2, __reg("a6") struct DosLibrary *)="\tjsr\t-738(a6)";
#define CompareDates(date1, date2) __CompareDates((date1), (date2), DOSBase)

LONG __DateToStr(__reg("d1") struct DateTime * datetime, __reg("a6") struct DosLibrary *)="\tjsr\t-744(a6)";
#define DateToStr(datetime) __DateToStr((datetime), DOSBase)

LONG __StrToDate(__reg("d1") struct DateTime * datetime, __reg("a6") struct DosLibrary *)="\tjsr\t-750(a6)";
#define StrToDate(datetime) __StrToDate((datetime), DOSBase)

BPTR __InternalLoadSeg(__reg("d0") BPTR fh, __reg("a0") void * table, __reg("a1") LONG * funcarray, __reg("a2") LONG * stack, __reg("a6") struct DosLibrary *)="\tjsr\t-756(a6)";
#define InternalLoadSeg(fh, table, funcarray, stack) __InternalLoadSeg((fh), (void *)(table), (funcarray), (stack), DOSBase)

BOOL __InternalUnLoadSeg(__reg("d1") BPTR seglist, __reg("a1") void (*freefunc)(), __reg("a6") struct DosLibrary *)="\tjsr\t-762(a6)";
#define InternalUnLoadSeg(seglist, freefunc) __InternalUnLoadSeg((seglist), (freefunc), DOSBase)

BPTR __NewLoadSeg(__reg("d1") STRPTR file, __reg("d2") struct TagItem * tags, __reg("a6") struct DosLibrary *)="\tjsr\t-768(a6)";
#define NewLoadSeg(file, tags) __NewLoadSeg((file), (tags), DOSBase)

#define NewLoadSegTagList(file, tags) __NewLoadSeg((file), (tags), DOSBase)

LONG __AddSegment(__reg("d1") STRPTR name, __reg("d2") BPTR seg, __reg("d3") long system, __reg("a6") struct DosLibrary *)="\tjsr\t-774(a6)";
#define AddSegment(name, seg, system) __AddSegment((name), (seg), (system), DOSBase)

struct Segment * __FindSegment(__reg("d1") STRPTR name, __reg("d2") struct Segment * seg, __reg("d3") long system, __reg("a6") struct DosLibrary *)="\tjsr\t-780(a6)";
#define FindSegment(name, seg, system) __FindSegment((name), (seg), (system), DOSBase)

LONG __RemSegment(__reg("d1") struct Segment * seg, __reg("a6") struct DosLibrary *)="\tjsr\t-786(a6)";
#define RemSegment(seg) __RemSegment((seg), DOSBase)

LONG __CheckSignal(__reg("d1") long mask, __reg("a6") struct DosLibrary *)="\tjsr\t-792(a6)";
#define CheckSignal(mask) __CheckSignal((mask), DOSBase)

struct RDArgs * __ReadArgs(__reg("d1") STRPTR arg_template, __reg("d2") LONG * array, __reg("d3") struct RDArgs * args, __reg("a6") struct DosLibrary *)="\tjsr\t-798(a6)";
#define ReadArgs(arg_template, array, args) __ReadArgs((arg_template), (array), (args), DOSBase)

LONG __FindArg(__reg("d1") STRPTR keyword, __reg("d2") STRPTR arg_template, __reg("a6") struct DosLibrary *)="\tjsr\t-804(a6)";
#define FindArg(keyword, arg_template) __FindArg((keyword), (arg_template), DOSBase)

LONG __ReadItem(__reg("d1") STRPTR name, __reg("d2") long maxchars, __reg("d3") struct CSource * cSource, __reg("a6") struct DosLibrary *)="\tjsr\t-810(a6)";
#define ReadItem(name, maxchars, cSource) __ReadItem((name), (maxchars), (cSource), DOSBase)

LONG __StrToLong(__reg("d1") STRPTR string, __reg("d2") LONG * value, __reg("a6") struct DosLibrary *)="\tjsr\t-816(a6)";
#define StrToLong(string, value) __StrToLong((string), (value), DOSBase)

LONG __MatchFirst(__reg("d1") STRPTR pat, __reg("d2") struct AnchorPath * anchor, __reg("a6") struct DosLibrary *)="\tjsr\t-822(a6)";
#define MatchFirst(pat, anchor) __MatchFirst((pat), (anchor), DOSBase)

LONG __MatchNext(__reg("d1") struct AnchorPath * anchor, __reg("a6") struct DosLibrary *)="\tjsr\t-828(a6)";
#define MatchNext(anchor) __MatchNext((anchor), DOSBase)

void __MatchEnd(__reg("d1") struct AnchorPath * anchor, __reg("a6") struct DosLibrary *)="\tjsr\t-834(a6)";
#define MatchEnd(anchor) __MatchEnd((anchor), DOSBase)

LONG __ParsePattern(__reg("d1") STRPTR pat, __reg("d2") STRPTR buf, __reg("d3") long buflen, __reg("a6") struct DosLibrary *)="\tjsr\t-840(a6)";
#define ParsePattern(pat, buf, buflen) __ParsePattern((pat), (buf), (buflen), DOSBase)

BOOL __MatchPattern(__reg("d1") STRPTR pat, __reg("d2") STRPTR str, __reg("a6") struct DosLibrary *)="\tjsr\t-846(a6)";
#define MatchPattern(pat, str) __MatchPattern((pat), (str), DOSBase)

void __FreeArgs(__reg("d1") struct RDArgs * args, __reg("a6") struct DosLibrary *)="\tjsr\t-858(a6)";
#define FreeArgs(args) __FreeArgs((args), DOSBase)

STRPTR __FilePart(__reg("d1") STRPTR path, __reg("a6") struct DosLibrary *)="\tjsr\t-870(a6)";
#define FilePart(path) __FilePart((path), DOSBase)

STRPTR __PathPart(__reg("d1") STRPTR path, __reg("a6") struct DosLibrary *)="\tjsr\t-876(a6)";
#define PathPart(path) __PathPart((path), DOSBase)

BOOL __AddPart(__reg("d1") STRPTR dirname, __reg("d2") STRPTR filename, __reg("d3") unsigned long size, __reg("a6") struct DosLibrary *)="\tjsr\t-882(a6)";
#define AddPart(dirname, filename, size) __AddPart((dirname), (filename), (size), DOSBase)

BOOL __StartNotify(__reg("d1") struct NotifyRequest * notify, __reg("a6") struct DosLibrary *)="\tjsr\t-888(a6)";
#define StartNotify(notify) __StartNotify((notify), DOSBase)

void __EndNotify(__reg("d1") struct NotifyRequest * notify, __reg("a6") struct DosLibrary *)="\tjsr\t-894(a6)";
#define EndNotify(notify) __EndNotify((notify), DOSBase)

BOOL __SetVar(__reg("d1") STRPTR name, __reg("d2") STRPTR buffer, __reg("d3") long size, __reg("d4") long flags, __reg("a6") struct DosLibrary *)="\tjsr\t-900(a6)";
#define SetVar(name, buffer, size, flags) __SetVar((name), (buffer), (size), (flags), DOSBase)

LONG __GetVar(__reg("d1") STRPTR name, __reg("d2") STRPTR buffer, __reg("d3") long size, __reg("d4") long flags, __reg("a6") struct DosLibrary *)="\tjsr\t-906(a6)";
#define GetVar(name, buffer, size, flags) __GetVar((name), (buffer), (size), (flags), DOSBase)

LONG __DeleteVar(__reg("d1") STRPTR name, __reg("d2") unsigned long flags, __reg("a6") struct DosLibrary *)="\tjsr\t-912(a6)";
#define DeleteVar(name, flags) __DeleteVar((name), (flags), DOSBase)

struct LocalVar * __FindVar(__reg("d1") STRPTR name, __reg("d2") unsigned long type, __reg("a6") struct DosLibrary *)="\tjsr\t-918(a6)";
#define FindVar(name, type) __FindVar((name), (type), DOSBase)

LONG __CliInitNewcli(__reg("a0") struct DosPacket * dp, __reg("a6") struct DosLibrary *)="\tjsr\t-930(a6)";
#define CliInitNewcli(dp) __CliInitNewcli((dp), DOSBase)

LONG __CliInitRun(__reg("a0") struct DosPacket * dp, __reg("a6") struct DosLibrary *)="\tjsr\t-936(a6)";
#define CliInitRun(dp) __CliInitRun((dp), DOSBase)

LONG __WriteChars(__reg("d1") STRPTR buf, __reg("d2") unsigned long buflen, __reg("a6") struct DosLibrary *)="\tjsr\t-942(a6)";
#define WriteChars(buf, buflen) __WriteChars((buf), (buflen), DOSBase)

LONG __PutStr(__reg("d1") STRPTR str, __reg("a6") struct DosLibrary *)="\tjsr\t-948(a6)";
#define PutStr(str) __PutStr((str), DOSBase)

LONG __VPrintf(__reg("d1") STRPTR format, __reg("d2") APTR argarray, __reg("a6") struct DosLibrary *)="\tjsr\t-954(a6)";
#define VPrintf(format, argarray) __VPrintf((format), (argarray), DOSBase)

LONG __ParsePatternNoCase(__reg("d1") STRPTR pat, __reg("d2") STRPTR buf, __reg("d3") long buflen, __reg("a6") struct DosLibrary *)="\tjsr\t-966(a6)";
#define ParsePatternNoCase(pat, buf, buflen) __ParsePatternNoCase((pat), (buf), (buflen), DOSBase)

BOOL __MatchPatternNoCase(__reg("d1") STRPTR pat, __reg("d2") STRPTR str, __reg("a6") struct DosLibrary *)="\tjsr\t-972(a6)";
#define MatchPatternNoCase(pat, str) __MatchPatternNoCase((pat), (str), DOSBase)

BOOL __SameDevice(__reg("d1") BPTR lock1, __reg("d2") BPTR lock2, __reg("a6") struct DosLibrary *)="\tjsr\t-984(a6)";
#define SameDevice(lock1, lock2) __SameDevice((lock1), (lock2), DOSBase)

void __ExAllEnd(__reg("d1") BPTR lock, __reg("d2") struct ExAllData * buffer, __reg("d3") long size, __reg("d4") long data, __reg("d5") struct ExAllControl * control, __reg("a6") struct DosLibrary *)="\tjsr\t-990(a6)";
#define ExAllEnd(lock, buffer, size, data, control) __ExAllEnd((lock), (buffer), (size), (data), (control), DOSBase)

BOOL __SetOwner(__reg("d1") STRPTR name, __reg("d2") long owner_info, __reg("a6") struct DosLibrary *)="\tjsr\t-996(a6)";
#define SetOwner(name, owner_info) __SetOwner((name), (owner_info), DOSBase)

#endif /*  _VBCCINLINE_DOS_H  */
