#!/bin/bash
gcc -shared -o /tmp/hack.so /path/to/hack.c
export LD_PRELOAD=/tmp/hack.so

