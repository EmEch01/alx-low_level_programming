#!/bin/bash
for file in *.c; do
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c $file -o $file.o
done
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
