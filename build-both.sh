#!/bin/bash
source support.sh
rm -rf $TESTDIR
mkdir $TESTDIR
./build-control.sh &
./build-experiment.sh &
wait
./compare-builds.sh
