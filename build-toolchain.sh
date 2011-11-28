#! /bin/bash

TARGET_DIR=dist
MAKE=make
UNAME=`uname`
CROSSGCC='i386-mingw32-gcc'

# Create a target dir.
echo "Cleaning up old target dir"
test -d $TARGET_DIR && rm -rf $TARGET_DIR

echo "Creating target dir"
mkdir -p $TARGET_DIR || exit 1

BINDIR_HOST=$TARGET_DIR/bin/$UNAME
BINDIR_WIN32=$TARGET_DIR/bin/win32

mkdir $TARGET_DIR/bin || exit 1
mkdir $BINDIR_HOST || exit 1
mkdir $BINDIR_WIN32 || exit 1
mkdir $TARGET_DIR/config || exit 1
mkdir $TARGET_DIR/include || exit 1
mkdir $TARGET_DIR/include/sdk || exit 1
mkdir $TARGET_DIR/include/net || exit 1
mkdir $TARGET_DIR/lib || exit 1

# Build VBCC using newlines to satisfy interactive prompts with default answers.
# These defaults are OK for a x86 host.
echo "Building vbcc for host.."
$MAKE -C vbcc TARGET=m68k clean all || exit 1
mv vbcc/bin/vc vbcc/bin/vbccm68k $BINDIR_HOST || exit 1

echo "Building vbcc for windows.."
$MAKE -C vbcc TARGET=m68k NCC='gcc' CC="$CROSSGCC -O2 -DHAVE_AOS4" EXESUF=.exe clean all || exit 1
mv vbcc/bin/vc.exe vbcc/bin/vbccm68k.exe $BINDIR_WIN32 || exit 1

# Build VASM
echo "Building vasm for host.."
$MAKE -C vasm CPU=m68k SYNTAX=mot clean all || exit 1
mv vasm/vobjdump vasm/vasmm68k_mot $BINDIR_HOST || exit 1

echo "Building vasm for windows.."
$MAKE -C vasm CPU=m68k SYNTAX=mot CC=$CROSSGCC clean all || exit 1
mv vasm/vobjdump $BINDIR_WIN32/vobjdump.exe || exit 1
mv vasm/vasmm68k_mot $BINDIR_WIN32/vasmm68k_mot.exe || exit 1

# Build VLINK
echo "Building vlink for host.."
$MAKE -C vlink clean all || exit 1
mv vlink/vlink $BINDIR_HOST || exit 1

echo "Building vlink for windows.."
$MAKE -C vlink clean all CC=$CROSSGCC LD=$CROSSGCC || exit 1
mv vlink/vlink $BINDIR_WIN32/vlink.exe || exit 1

cp vc.config.win32 $TARGET_DIR/config/vc.cfg || exit 1
sed s/@UNAME@/$UNAME/ < vc.config > $TARGET_DIR/config/vc.config || exit 1

echo "Setting up includes"
cp -r sdkinclude/* $TARGET_DIR/include/sdk || exit 1
cp -r netinclude/* $TARGET_DIR/include/net || exit 1
cp -r clib/* $TARGET_DIR/lib || exit 1

echo "All done!"
