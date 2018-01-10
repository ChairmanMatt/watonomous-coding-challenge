#!/bin/bash

set -e
make

cpplint headers/*.h
cpplint *.cpp

./runner

exit 0
