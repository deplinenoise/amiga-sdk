#! /bin/bash

TARGET_DIR=dist

# Build VBCC using newlines to satisfy interactive prompts with default answers.
# These defaults are OK for a x86 host.
echo "Building vbcc.."
make -C vbcc TARGET=m68k < newlines.txt || exit 1

# Build VASM
echo "Building vasm.."
make -C vasm CPU=m68k SYNTAX=mot || exit 1

# Build VLINK
echo "Building vlink.."
make -C vlink || exit 1

# We're still here, so now create a target dir.
echo "Cleaning up old target dir"
test -d $TARGET_DIR && rm -rf $TARGET_DIR

echo "Creating target dir"
mkdir -p $TARGET_DIR || exit 1

mkdir $TARGET_DIR/bin || exit 1
mkdir $TARGET_DIR/config || exit 1
mkdir $TARGET_DIR/include || exit 1
mkdir $TARGET_DIR/include/sdk || exit 1
mkdir $TARGET_DIR/include/net || exit 1
mkdir $TARGET_DIR/lib || exit 1

echo "Copying vbcc binaries"
cp vbcc/bin/vbccm68k $TARGET_DIR/bin || exit 1
cp vbcc/bin/vc $TARGET_DIR/bin || exit 1

echo "Copying vasm binaries"
cp vasm/vasmm68k_mot $TARGET_DIR/bin || exit 1
cp vasm/vobjdump $TARGET_DIR/bin || exit 1

echo "Copying vlink binary"
cp vlink/vlink $TARGET_DIR/bin || exit 1

cp vc.config $TARGET_DIR/config/vc.config || exit 1

echo "Setting up includes"
cp -r sdkinclude/* $TARGET_DIR/include/sdk || exit 1
cp -r netinclude/* $TARGET_DIR/include/net || exit 1
cp -r clib/* $TARGET_DIR/lib || exit 1

echo "All done!"
