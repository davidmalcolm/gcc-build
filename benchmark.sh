#!/bin/bash
source support.sh $1
./strip-binaries.sh
export LD_LIBRARY_PATH=$DEPDIR/lib:$LD_LIBRARY_PATH
for src in cp-stdlib.cc kdecore.cc ; do
  for which in experiment control ; do
      sudo ./drop-caches.sh
      for i in {1..40}; do
	  echo "i: $i"
      echo "generating test/$which/$CONFIG/log-$src-$i.txt"

      # Use taskset to force all the commands to run on processor #0,
      # to (hopefully) give more consistent measurements on NUMA
      # boxes:
      ( taskset 0x00000001 \
	  test/$which/$CONFIG/build/gcc/cc1plus \
          -O3 -g \
	  -quiet -ftime-report \
          $src \
          2>&1 \
      ) > test/$which/$CONFIG/log-$src-$i.txt

    done
  done
done
