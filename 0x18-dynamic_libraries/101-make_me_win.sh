#!/bin/bash
gcc -shared -o libgiga.so -fPIC jackpot.c
export LD_PRELOAD=./libgiga.so:$LD_LIBRARY_PATH
