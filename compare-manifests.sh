#!/bin/bash

for what in control experiment ; do
    for stage in src build install ; do
	(cd test/$what/$stage \
	    && (find \
		| grep -v ".git/" \
		| sort)
	) > manifest-of-$what-$stage.txt
    done
done

for stage in src build install ; do
  diff -up \
    manifest-of-control-$stage.txt \
    manifest-of-experiment-$stage.txt \
  | less
done
