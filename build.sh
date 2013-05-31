#!/bin/bash

# It's best to run this under "screen"

DEPDIR=$(pwd)/dep-prefix
echo DEPDIR=$DEPDIR

TESTDIR=$(pwd)/test
CONTROL=$TESTDIR/control
EXPERIMENT=$TESTDIR/experiment
rm -rf $TESTDIR
mkdir $TESTDIR
mkdir $CONTROL
mkdir $EXPERIMENT

make all

J=-j16

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
	  --with-cloog=$DEPDIR
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

    # Test suite:
    /usr/bin/time make check $J || exit 1
}

create_src $CONTROL
create_src $EXPERIMENT

# Apply patches:
for p in *.patch ; do
    OLD_PWD=$(pwd)
    (cd $EXPERIMENT/src && git apply $OLD_PWD/$p) || exit 1
done

create_build $CONTROL
create_build $EXPERIMENT

invoke_build $CONTROL
invoke_build $EXPERIMENT

# Comapre test results:
$CONTROL/src/contrib/compare_tests \
  $CONTROL/build/gcc/testsuite \
  $EXPERIMENT/build/gcc/testsuite
