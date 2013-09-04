#!/bin/bash
for i in {1..10}; do
  for src in kdecore.cc big-code.c ; do
    for which in control experiment ; do
      (old-test/$which/build/gcc/cc1plus -O3 $src 2>&1) > log-$src-$which-$i.txt
    done
  done
done
