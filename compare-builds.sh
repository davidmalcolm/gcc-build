#!/bin/bash

source support.sh

# Compare test results:
$CONTROL/src/contrib/compare_tests \
  $CONTROL/build \
  $EXPERIMENT/build

# For reference here are the 2*12=24 sum files that should be found:
#  $ find test/*/build -name "*.sum"
#  test/control/build/gcc/testsuite/gfortran/gfortran.sum
#  test/control/build/gcc/testsuite/gcc/gcc.sum
#  test/control/build/gcc/testsuite/objc/objc.sum
#  test/control/build/gcc/testsuite/g++/g++.sum
#  test/control/build/x86_64-unknown-linux-gnu/boehm-gc/testsuite/boehm-gc.sum
#  test/control/build/x86_64-unknown-linux-gnu/libstdc++-v3/testsuite/libstdc++.sum
#  test/control/build/x86_64-unknown-linux-gnu/libmudflap/testsuite/libmudflap.sum
#  test/control/build/x86_64-unknown-linux-gnu/libitm/testsuite/libitm.sum
#  test/control/build/x86_64-unknown-linux-gnu/libatomic/testsuite/libatomic.sum
#  test/control/build/x86_64-unknown-linux-gnu/libjava/testsuite/libjava.sum
#  test/control/build/x86_64-unknown-linux-gnu/libffi/testsuite/libffi.sum
#  test/control/build/x86_64-unknown-linux-gnu/libgomp/testsuite/libgomp.sum
#  test/experiment/build/gcc/testsuite/gfortran/gfortran.sum
#  test/experiment/build/gcc/testsuite/gcc/gcc.sum
#  test/experiment/build/gcc/testsuite/objc/objc.sum
#  test/experiment/build/gcc/testsuite/g++/g++.sum
#  test/experiment/build/x86_64-unknown-linux-gnu/boehm-gc/testsuite/boehm-gc.sum
#  test/experiment/build/x86_64-unknown-linux-gnu/libstdc++-v3/testsuite/libstdc++.sum
#  test/experiment/build/x86_64-unknown-linux-gnu/libmudflap/testsuite/libmudflap.sum
#  test/experiment/build/x86_64-unknown-linux-gnu/libitm/testsuite/libitm.sum
#  test/experiment/build/x86_64-unknown-linux-gnu/libatomic/testsuite/libatomic.sum
#  test/experiment/build/x86_64-unknown-linux-gnu/libjava/testsuite/libjava.sum
#  test/experiment/build/x86_64-unknown-linux-gnu/libffi/testsuite/libffi.sum
#  test/experiment/build/x86_64-unknown-linux-gnu/libgomp/testsuite/libgomp.sum
