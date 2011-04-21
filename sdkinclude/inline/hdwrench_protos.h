#ifndef _VBCCINLINE_HDWRENCH_H
#define _VBCCINLINE_HDWRENCH_H

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif

BOOL __HDWOpenDevice(__reg("a0") STRPTR devName, __reg("d0") ULONG unit, __reg("a6") struct Library *)="\tjsr\t-30(a6)";
#define HDWOpenDevice(devName, unit) __HDWOpenDevice((devName), (unit), HDWBase)

VOID __HDWCloseDevice(__reg("a6") struct Library *)="\tjsr\t-36(a6)";
#define HDWCloseDevice() __HDWCloseDevice(HDWBase)

UWORD __RawRead(__reg("a0") BootBlock * bbk, __reg("d0") ULONG size, __reg("a6") struct Library *)="\tjsr\t-42(a6)";
#define RawRead(bbk, size) __RawRead((bbk), (size), HDWBase)

UWORD __RawWrite(__reg("a0") BootBlock * bb, __reg("a6") struct Library *)="\tjsr\t-48(a6)";
#define RawWrite(bb) __RawWrite((bb), HDWBase)

UWORD __WriteBlock(__reg("a0") BootBlock * bb, __reg("a6") struct Library *)="\tjsr\t-54(a6)";
#define WriteBlock(bb) __WriteBlock((bb), HDWBase)

UWORD __ReadRDBs(__reg("a6") struct Library *)="\tjsr\t-60(a6)";
#define ReadRDBs() __ReadRDBs(HDWBase)

UWORD __WriteRDBs(__reg("a6") struct Library *)="\tjsr\t-66(a6)";
#define WriteRDBs() __WriteRDBs(HDWBase)

BOOL __QueryReady(__reg("a0") LONG * errorcode, __reg("a6") struct Library *)="\tjsr\t-72(a6)";
#define QueryReady(errorcode) __QueryReady((errorcode), HDWBase)

BOOL __QueryInquiry(__reg("a0") BYTE * inqbuf, __reg("a1") LONG * errorcode, __reg("a6") struct Library *)="\tjsr\t-78(a6)";
#define QueryInquiry(inqbuf, errorcode) __QueryInquiry((inqbuf), (errorcode), HDWBase)

BOOL __QueryModeSense(__reg("d0") LONG page, __reg("d1") LONG msbsize, __reg("a0") BYTE * msbuf, __reg("a1") LONG * errorcode, __reg("a6") struct Library *)="\tjsr\t-84(a6)";
#define QueryModeSense(page, msbsize, msbuf, errorcode) __QueryModeSense((page), (msbsize), (msbuf), (errorcode), HDWBase)

VOID __QueryFindValid(__reg("a0") ValidIDstruct * validIDs, __reg("a1") STRPTR devicename, __reg("d0") LONG board, __reg("d1") ULONG types, __reg("d2") LONG wide_scsi, __reg("a2") LONG (*callBack)(), __reg("a6") struct Library *)="\tjsr\t-90(a6)";
#define QueryFindValid(validIDs, devicename, board, types, wide_scsi, callBack) __QueryFindValid((validIDs), (devicename), (board), (types), (wide_scsi), (callBack), HDWBase)

BOOL __QueryCapacity(__reg("a0") ULONG * totalblocks, __reg("a1") ULONG * blocksize, __reg("a6") struct Library *)="\tjsr\t-96(a6)";
#define QueryCapacity(totalblocks, blocksize) __QueryCapacity((totalblocks), (blocksize), HDWBase)

ULONG __ReadMountfile(__reg("d0") ULONG unit, __reg("a0") STRPTR filename, __reg("a1") STRPTR controller, __reg("a6") struct Library *)="\tjsr\t-102(a6)";
#define ReadMountfile(unit, filename, controller) __ReadMountfile((unit), (filename), (controller), HDWBase)

ULONG __ReadRDBStructs(__reg("a0") STRPTR filename, __reg("d0") ULONG unit, __reg("a6") struct Library *)="\tjsr\t-108(a6)";
#define ReadRDBStructs(filename, unit) __ReadRDBStructs((filename), (unit), HDWBase)

ULONG __WriteMountfile(__reg("a0") STRPTR filename, __reg("a1") STRPTR ldir, __reg("d0") ULONG unit, __reg("a6") struct Library *)="\tjsr\t-114(a6)";
#define WriteMountfile(filename, ldir, unit) __WriteMountfile((filename), (ldir), (unit), HDWBase)

ULONG __WriteRDBStructs(__reg("a0") STRPTR filename, __reg("a6") struct Library *)="\tjsr\t-120(a6)";
#define WriteRDBStructs(filename) __WriteRDBStructs((filename), HDWBase)

ULONG __InMemMountfile(__reg("d0") ULONG unit, __reg("a0") STRPTR mfdata, __reg("a1") STRPTR controller, __reg("a6") struct Library *)="\tjsr\t-126(a6)";
#define InMemMountfile(unit, mfdata, controller) __InMemMountfile((unit), (mfdata), (controller), HDWBase)

ULONG __InMemRDBStructs(__reg("a0") STRPTR rdbp, __reg("d0") ULONG sizerdb, __reg("d1") ULONG unit, __reg("a6") struct Library *)="\tjsr\t-132(a6)";
#define InMemRDBStructs(rdbp, sizerdb, unit) __InMemRDBStructs((rdbp), (sizerdb), (unit), HDWBase)

ULONG __OutMemMountfile(__reg("a0") STRPTR mfp, __reg("a1") ULONG * sizew, __reg("d0") ULONG sizeb, __reg("d1") ULONG unit, __reg("a6") struct Library *)="\tjsr\t-138(a6)";
#define OutMemMountfile(mfp, sizew, sizeb, unit) __OutMemMountfile((mfp), (sizew), (sizeb), (unit), HDWBase)

ULONG __OutMemRDBStructs(__reg("a0") STRPTR rdbp, __reg("a1") ULONG * sizew, __reg("d0") ULONG sizeb, __reg("a6") struct Library *)="\tjsr\t-144(a6)";
#define OutMemRDBStructs(rdbp, sizew, sizeb) __OutMemRDBStructs((rdbp), (sizew), (sizeb), HDWBase)

BOOL __FindDiskName(__reg("a0") STRPTR diskname, __reg("a6") struct Library *)="\tjsr\t-150(a6)";
#define FindDiskName(diskname) __FindDiskName((diskname), HDWBase)

BOOL __FindControllerID(__reg("a0") STRPTR devname, __reg("a1") ULONG * selfid, __reg("a6") struct Library *)="\tjsr\t-156(a6)";
#define FindControllerID(devname, selfid) __FindControllerID((devname), (selfid), HDWBase)

ULONG __FindLastSector(__reg("a6") struct Library *)="\tjsr\t-162(a6)";
#define FindLastSector() __FindLastSector(HDWBase)

ULONG __FindDefaults(__reg("d0") ULONG optimize, __reg("a0") struct DefaultsArray * result, __reg("a6") struct Library *)="\tjsr\t-168(a6)";
#define FindDefaults(optimize, result) __FindDefaults((optimize), (result), HDWBase)

ULONG __LowlevelFormat(__reg("a0") LONG (*callBack)(), __reg("a6") struct Library *)="\tjsr\t-174(a6)";
#define LowlevelFormat(callBack) __LowlevelFormat((callBack), HDWBase)

ULONG __VerifyDrive(__reg("a0") LONG (*callBack)(), __reg("a6") struct Library *)="\tjsr\t-180(a6)";
#define VerifyDrive(callBack) __VerifyDrive((callBack), HDWBase)

#endif /*  _VBCCINLINE_HDWRENCH_H  */
