#!/bin/bash

# It's best to run this under "screen"

# Options for profiling:
EXTRA_CONFIG_OPTS=--enable-checking=release

# Options for correctness testing:
# EXTRA_CONFIG_OPTS=--enable-checking=all

DEPDIR=$(pwd)/dep-prefix
echo DEPDIR=$DEPDIR

TESTDIR=$(pwd)/test
CONTROL=$TESTDIR/control
EXPERIMENT=$TESTDIR/experiment

make all

# Scale up by the number of cores available:
J=-j$(cat /proc/cpuinfo | grep processor | wc -l)

echo "J=$J"

create_src()
{
    BASEDIR=$1
    echo "create_src $BASEDIR"
    rm -rf $BASEDIR/src
    cp -a gcc $BASEDIR/src
}

create_build()
{
    BASEDIR=$1
    echo "create_build $BASEDIR"
    rm -rf $BASEDIR/build
    mkdir $BASEDIR/build
    rm -rf $BASEDIR/install
    mkdir $BASEDIR/install
    (cd $BASEDIR/build \
     && ../src/configure \
          --prefix=$BASEDIR/install \
	  --with-mpc=$DEPDIR \
	  --with-mpfr=$DEPDIR \
	  --with-gmp=$DEPDIR \
	  --with-cloog=$DEPDIR \
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
    echo "invoke_build $BASEDIR"
    cd $BASEDIR/build

    export LD_LIBRARY_PATH=$DEPDIR/lib:$LD_LIBRARY_PATH

    # Build:
    /usr/bin/time make $J || exit 1

    # Install:
    /usr/bin/time make install $J || exit 1

    # Test suite:
    /usr/bin/time make check $J
}

