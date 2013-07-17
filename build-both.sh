#!/bin/bash
source support.sh
rm -rf $TESTDIR
mkdir $TESTDIR
./build-control.sh
./build-experiment.sh
./compare-builds.sh
