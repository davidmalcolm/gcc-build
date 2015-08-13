#!/bin/bash
source support.sh $1
rm -rf $TESTDIR
mkdir $TESTDIR
./build-control.sh $CONFIG
./build-experiment.sh $CONFIG
./compare-builds.sh $CONFIG
