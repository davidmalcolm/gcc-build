#!/bin/bash

# Find test matching $1 within the .sum and .log files for "experiment".
# e.g.
#   ./find-test.sh \
#     "c-c++-common/Waddress-1.c  -std=gnu++11  (test for warnings, line 14)"
# If $2 is given then look in that specific .sum file (and its .log file)
# e.g.
#   ./find-test.sh \
#     "c-c++-common/Waddress-1.c  -std=gnu++11  (test for warnings, line 14)" \
#     gcc/testsuite/g++/g++.sum

TESTNAME=$1
SUMFILE=$2

# Unset positional params to avoid confusing support.sh:
shift $#

source support.sh

../jamais-vu/jv find \
  "$TESTNAME" \
  $EXPERIMENT/$CONFIG/build/$SUMFILE
