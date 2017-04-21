#!/bin/bash

source support.sh

../specdiff/specdiff \
  $CONTROL/$CONFIG/build/spec.log \
  $EXPERIMENT/$CONFIG/build/spec.log
