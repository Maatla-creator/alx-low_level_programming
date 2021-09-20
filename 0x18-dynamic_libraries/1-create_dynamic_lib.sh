#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
LD_LIBRARY_PATH=/root/alx-low_level_programming/0x18-dynamic_libraries:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=/root/alx-low_level_programming/0x18-dynamic_libraries:$LD_LIBRARY_PATH
