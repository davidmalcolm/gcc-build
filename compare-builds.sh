#!/bin/bash

# Compare test results:
$CONTROL/src/contrib/compare_tests \
  $CONTROL/build/gcc/testsuite \
  $EXPERIMENT/build/gcc/testsuite
