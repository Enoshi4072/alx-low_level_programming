#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
LD_LIBRARY_PATH=.
export LD_LIBRARY_PATH
