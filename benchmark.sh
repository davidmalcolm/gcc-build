#!/bin/bash
source support.sh $1
./strip-binaries.sh
export LD_LIBRARY_PATH=$DEPDIR/lib:$LD_LIBRARY_PATH
for i in {1..10}; do
  echo "i: $i"
  for src in kdecore.cc big-code.c ; do
    for which in control experiment ; do
      echo "generating test/$which/$CONFIG/log-$src-$i.txt"
      (test/$which/$CONFIG/build/gcc/cc1plus -O3 $src 2>&1) > test/$which/$CONFIG/log-$src-$i.txt
    done
  done
done
