#!bin/bash
gcc -Wall -pedantic -Werrior -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
