#!/bin/bash
source support.sh $1
./integration-test-control.sh $CONFIG
./integration-test-experiment.sh $CONFIG

