#!/bin/bash
gcc -fpic -c *.c
gcc -shared *.o liball.so
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH
