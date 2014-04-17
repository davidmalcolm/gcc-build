#!/bin/bash
source support.sh $1
strip $(find test/*/$CONFIG/build/gcc -maxdepth 1 -executable -type f)
