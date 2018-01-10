#!/bin/bash

#terminate on error
set -e

#make
make

#linting
cpplint headers/*.h
cpplint *.cpp

#run executable - note, -e tag means will not run unless make and linting succeed
./runner

exit 0
