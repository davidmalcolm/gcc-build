#!/bin/bash
source ./support.sh $1

mkdir $EXPERIMENT

create_src $EXPERIMENT

# Apply patches:
for p in $(echo *.patch | sort); do
    OLD_PWD=$(pwd)
    echo "Applying patch $p"
    # "git apply --index" doesn't seem to work
    (cd $EXPERIMENT/src \
     && git apply $OLD_PWD/$p \
     && git add $(diffstat -lp1 $OLD_PWD/$p) \
     && git commit -m"Experimental patch: $p") || exit
done

create_build $EXPERIMENT $CONFIG

invoke_build $EXPERIMENT $CONFIG
