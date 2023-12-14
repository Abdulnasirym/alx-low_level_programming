#!/bin/bash
gcc -c -wall -werror -fPIC *.c 
gcc -shared -o liball.so *.o
