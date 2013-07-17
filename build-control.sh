#!/bin/bash
source ./support.sh
mkdir $CONTROL

create_src $CONTROL

create_build $CONTROL

invoke_build $CONTROL
