#!/bin/bash
gcc -Wextra -Werror -pedantic -c *.c
ar -rcs liball.a *.o
