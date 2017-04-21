#!/bin/bash

# It's best to run this under "screen"

CONFIG=${1:-x86_64-pc-linux-gnu}

ORIG_PWD=$(pwd)

echo "CONFIG=$CONFIG"

# Vanilla upstream options:
EXTRA_CONFIG_OPTS=
#EXTRA_CONFIG_OPTS="--enable-host-shared --enable-languages=jit"

# Options for profiling:
# EXTRA_CONFIG_OPTS=--enable-checking=release

# Options for correctness testing:
# EXTRA_CONFIG_OPTS=--enable-checking=all

DEPDIR=$ORIG_PWD/dep-prefix
echo DEPDIR=$DEPDIR

TESTDIR=$ORIG_PWD/test
CONTROL=$TESTDIR/control
EXPERIMENT=$TESTDIR/experiment

make all

# Scale up by the number of cores available:
NUM_CORES=$(cat /proc/cpuinfo | grep processor | wc -l)
J=-j$(expr $NUM_CORES / 4)

echo "J=$J"

create_src()
{
    BASEDIR=$1
    echo "create_src $BASEDIR"
    rm -rf $BASEDIR/src
    cp -a gcc $BASEDIR/src
    (cd $BASEDIR/src &&
        git config user.email "dmalcolm@redhat.com" &&
        git config user.name "David Malcolm" )
}

create_build()
{
    BASEDIR=$1
    CONFIG=$2
    echo "create_build $BASEDIR $CONFIG"
    rm -rf $BASEDIR/$CONFIG
    mkdir $BASEDIR/$CONFIG
    mkdir $BASEDIR/$CONFIG/build
    mkdir $BASEDIR/$CONFIG/install
    export LD_LIBRARY_PATH=$DEPDIR/lib:$LD_LIBRARY_PATH
    (cd $BASEDIR/$CONFIG/build \
     && ../../src/configure \
          --prefix=$BASEDIR/$CONFIG/install \
	  --with-mpc=$DEPDIR \
	  --with-mpfr=$DEPDIR \
	  --with-gmp=$DEPDIR \
          --with-isl=$DEPDIR \
	  --with-cloog=$DEPDIR \
          --disable-multilib \
          --target=$CONFIG \
          --enable-host-shared \
          --enable-languages=c,c++,objc,obj-c++,fortran,ada,go,lto,jit,brig \
	  $EXTRA_CONFIG_OPTS
    ) || exit 1
}

# would have --with-isl=$DEPDIR
# but conmfigure fails; the embedded isl in cloog seems to return
# isl_version() of "UNKNOWN"

# failed with:
#    /root/test/control/build/./gcc/cc1: error while loading shared libraries: libmpc.so.2: cannot open shared object file: No such file or directory


invoke_build()
{
    BASEDIR=$1
    CONFIG=$2
    echo "invoke_build $BASEDIR $CONFIG"
    cd $BASEDIR/$CONFIG/build

    export LD_LIBRARY_PATH=$DEPDIR/lib:$LD_LIBRARY_PATH

    # Build:
    {
        nice /usr/bin/time make all $J || exit 1
    } 2>&1 | tee make.log

    # Install:
    {
        nice /usr/bin/time make install $J || exit 1
    } 2>&1 | tee make-install.log

    # Test suite:
    {
        nice -1 /usr/bin/time make check $J -k RUNTESTFLAGS="-v"
    } 2>&1 | tee make-check.log
}

benchmark_linux()
{
    GCC_BASEDIR=$1
    GCC_CONFIG=$2
    BENCHMARK_NAME=linux-3.9.1

    # Such builds should be done with --enable-checking=release
    # e.g. via:
    #   EXTRA_CONFIG_OPTS=--enable-checking=release
    # above

    BENCHMARK_BUILD_DIR=$GCC_BASEDIR/$GCC_CONFIG/$BENCHMARK_NAME
    echo "Benchmarking within $BENCHMARK_BUILD_DIR"

    # Ensure we have the source downloaded and unpacked:
    make linux-3.9.1

    # Turn this down for a real run?
    BENCHMARK_JOBS=64

    # For stap, user needs to be in group stapusr and stapdev, e.g.:
    #    sudo usermod david -a -G stapusr,stapdev
    #    newgrp stapdev # forcibly reload groups so as to be seen to be in stapdev
    #    newgrp stapusr # likewise
    #    newgrp    # ...and reset our primary group
    #    id        # ...to verify that we have the secondary group

    export LD_LIBRARY_PATH=$DEPDIR/lib:$LD_LIBRARY_PATH
    export PATH_TO_TEST_GCC=$GCC_BASEDIR/$GCC_CONFIG/install/bin
    rm -rf $BENCHMARK_BUILD_DIR
    cp -a linux-3.9.1 $BENCHMARK_BUILD_DIR

    cd $BENCHMARK_BUILD_DIR

    export PATH=$PATH_TO_TEST_GCC:$PATH
    echo "Building with GCC version:"
    gcc --version
    make clean
    make allyesconfig

    echo $LD_LIBRARY_PATH

    # Run the kernel's "make" under systemtap
    #
    # staprun is a setuid binary, and hence the environment is
    # sanitized, deleting LD_LIBRARY_PATH, so we need to reinject it using
    # "env" (we'll assume the gcc sources aren't trojaned).
    #
    # Append "V=1" to the make args to debug the build
    {
      stap \
        -v \
        -DMAXSTRINGLEN=10000 \
        $ORIG_PWD/gcc-tracker.stp \
        -c"env LD_LIBRARY_PATH=$LD_LIBRARY_PATH /usr/bin/time make -j $BENCHMARK_JOBS"
    } | tee benchmark.log

   # Generate reports on elapsed time:
   python $ORIG_PWD/parse-benchmark-log.py $BENCHMARK_BUILD_DIR
}

run_spec()
{
    NAME=$1
    GCC_BASEDIR=$2
    GCC_CONFIG=$3
    echo "GCC_BASEDIR: $GCC_BASEDIR"
    echo "GCC_CONFIG: $GCC_CONFIG"

    export LD_LIBRARY_PATH=$DEPDIR/lib:$LD_LIBRARY_PATH

    BIN_DIR=$GCC_BASEDIR/$GCC_CONFIG/install/bin

    # FIXME
    PATH_TO_SPEC=/home/david/coding-3/benchmarking/install/cpu2006
    cd $PATH_TO_SPEC
    source $PATH_TO_SPEC/shrc

    SPEC_CONFIG=$GCC_BASEDIR/$GCC_CONFIG/gcc-build.cfg

    # FIXME: generate a config
    cat <<EOF > $SPEC_CONFIG
ignore_errors = yes
tune          = base
ext           = $NAME
reportable    = 1
output_format = asc

sw_compiler  = gcc-build: $NAME

runlist = all

default=default=default=default:

makeflags = $J

# Compiler selection
CC           = $BIN_DIR/gcc
CXX          = $BIN_DIR/g++
FC           = $BIN_DIR/gfortran

# Base optimization
default=base=default=default:
COPTIMIZE    = -O2 -fno-strict-aliasing
CXXOPTIMIZE  = -O2 -fno-strict-aliasing
FOPTIMIZE    = -O2 -fno-strict-aliasing

# Portability Flags, for x86_64 linux

default=base=default=default:
PORTABILITY = -DSPEC_CPU_LP64
CPORTABILITY = -std=gnu90

400.perlbench=default=default=default:
CPORTABILITY = -DSPEC_CPU_LINUX_X64

462.libquantum=default=default=default:
CPORTABILITY=  -DSPEC_CPU_LINUX

464.h264ref=default=default=default:
CPORTABILITY   = -std=gnu90 -fsigned-char

483.xalancbmk=default=default=default:
CXXPORTABILITY= -DSPEC_CPU_LINUX

481.wrf=default=default=default:
CPORTABILITY = -DSPEC_CPU_CASE_FLAG -DSPEC_CPU_LINUX

482.sphinx3=default=default=default:
CPORTABILITY   = -std=gnu90 -fsigned-char


EOF

    {
        time runspec --config $SPEC_CONFIG
    } 2>&1 | tee $GCC_BASEDIR/$GCC_CONFIG/build/spec.log
}
