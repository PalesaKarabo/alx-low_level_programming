#!bin/bash
gcc -Wall -pedantic -Werriot -Wextra -c *.c
ar -rc liball.a *_o
ranlib liball.a
