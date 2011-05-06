@echo off

setlocal

set TARGET_DIR=dist

rem Build VBCC using newlines to satisfy interactive prompts with default answers.
rem These defaults are OK for a x86 host.
echo Building vbcc..
pushd vbcc
nmake TARGET=m68k CC="cl /Ox" CCOUTOPT="/Fo" CCEXEOPT="/Fe" SLASH="\\" LDFLAGS="" < ..\newlines.txt
if ERRORLEVEL 1 set FAIL=yes
popd

if x%FAIL%==xyes goto error

rem # Build VASM
rem echo "Building vasm.."
rem make -C vasm CPU=m68k SYNTAX=mot || exit 1

rem # Build VLINK
rem echo "Building vlink.."
rem make -C vlink || exit 1

rem # We're still here, so now create a target dir.
rem echo "Cleaning up old target dir"
rem test -d $TARGET_DIR && rm -rf $TARGET_DIR

rem echo "Creating target dir"
rem mkdir -p $TARGET_DIR || exit 1

rem mkdir $TARGET_DIR/bin || exit 1
rem mkdir $TARGET_DIR/config || exit 1
rem mkdir $TARGET_DIR/include || exit 1
rem mkdir $TARGET_DIR/include/sdk || exit 1
rem mkdir $TARGET_DIR/include/net || exit 1
rem mkdir $TARGET_DIR/lib || exit 1

rem echo "Copying vbcc binaries"
rem cp vbcc/bin/vbccm68k $TARGET_DIR/bin || exit 1
rem cp vbcc/bin/vc $TARGET_DIR/bin || exit 1

rem echo "Copying vasm binaries"
rem cp vasm/vasmm68k_mot $TARGET_DIR/bin || exit 1
rem cp vasm/vobjdump $TARGET_DIR/bin || exit 1

rem echo "Copying vlink binary"
rem cp vlink/vlink $TARGET_DIR/bin || exit 1

rem cp vc.config $TARGET_DIR/config/vc.config || exit 1

rem echo "Setting up includes"
rem cp -r sdkinclude/* $TARGET_DIR/include/sdk || exit 1
rem cp -r netinclude/* $TARGET_DIR/include/net || exit 1
rem cp -r clib/* $TARGET_DIR/lib || exit 1

:ok
echo All done!
exit /b 0

:error
echo build failed :(
exit /b 1
