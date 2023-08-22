#!/bin/bash
gcc -Wall -Wextra -Werror -penantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBREARY_PATH=.:$LD_LIBRARY_PATH
