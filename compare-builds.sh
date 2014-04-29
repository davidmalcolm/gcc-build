#!/bin/bash

source support.sh

# Compare test results:
../jamais-vu/jv compare  \
  $CONTROL/$CONFIG/build \
  $EXPERIMENT/$CONFIG/build

# For reference here are the 2*16=32 sum files that should be found:
#  $ find test/*/x86_64-unknown-linux-gnu/build -name "*.sum" | sort
#  test/control/x86_64-unknown-linux-gnu/build/gcc/testsuite/ada/acats/acats.sum
#  test/control/x86_64-unknown-linux-gnu/build/gcc/testsuite/gcc/gcc.sum
#  test/control/x86_64-unknown-linux-gnu/build/gcc/testsuite/gfortran/gfortran.sum
#  test/control/x86_64-unknown-linux-gnu/build/gcc/testsuite/g++/g++.sum
#  test/control/x86_64-unknown-linux-gnu/build/gcc/testsuite/gnat/gnat.sum
#  test/control/x86_64-unknown-linux-gnu/build/gcc/testsuite/go/go.sum
#  test/control/x86_64-unknown-linux-gnu/build/gcc/testsuite/obj-c++/obj-c++.sum
#  test/control/x86_64-unknown-linux-gnu/build/gcc/testsuite/objc/objc.sum
#  test/control/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/boehm-gc/testsuite/boehm-gc.sum
#  test/control/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libatomic/testsuite/libatomic.sum
#  test/control/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libffi/testsuite/libffi.sum
#  test/control/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libgo/libgo.sum
#  test/control/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libgomp/testsuite/libgomp.sum
#  test/control/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libitm/testsuite/libitm.sum
#  test/control/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libjava/testsuite/libjava.sum
#  test/control/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libstdc++-v3/testsuite/libstdc++.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/gcc/testsuite/ada/acats/acats.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/gcc/testsuite/gcc/gcc.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/gcc/testsuite/gfortran/gfortran.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/gcc/testsuite/g++/g++.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/gcc/testsuite/gnat/gnat.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/gcc/testsuite/go/go.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/gcc/testsuite/obj-c++/obj-c++.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/gcc/testsuite/objc/objc.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/boehm-gc/testsuite/boehm-gc.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libatomic/testsuite/libatomic.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libffi/testsuite/libffi.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libgo/libgo.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libgomp/testsuite/libgomp.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libitm/testsuite/libitm.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libjava/testsuite/libjava.sum
#  test/experiment/x86_64-unknown-linux-gnu/build/x86_64-unknown-linux-gnu/libstdc++-v3/testsuite/libstdc++.sum
