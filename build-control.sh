#!/bin/bash
source ./support.sh $1

mkdir $CONTROL

create_src $CONTROL

create_build $CONTROL $CONFIG

invoke_build $CONTROL $CONFIG
