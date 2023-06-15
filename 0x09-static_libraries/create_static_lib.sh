#!/bin/bash
gcc -wall -pendantic -Werror -Wextra -c *.c
ar -rc liball.a *.a
ranlib liball.a
