#!/bin/bash

source support.sh

echo $CONFIG

get_manifest()
{
    DIR=$1
    FILE=$2

    (cd $DIR \
	&& (find \
	| grep -v ".git/" \
	| sort)
    ) > $2
}

for what in control experiment ; do
    get_manifest test/$what/src manifest-of-$what-src.txt
    get_manifest test/$what/$CONFIG/build manifest-of-$what-$CONFIG-build.txt
    get_manifest test/$what/$CONFIG/install manifest-of-$what-$CONFIG-install.txt
done

for stage in src $CONFIG-build $CONFIG-install ; do
  diff -up \
    manifest-of-control-$stage.txt \
    manifest-of-experiment-$stage.txt \
  | less
done
