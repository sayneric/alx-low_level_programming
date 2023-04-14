0x0C. C - More Malloc, Free
Description

In this project, we will be practicing memory allocation in C using malloc and free functions. We will be building on the concepts we learned in our previous project, 0x0B - C - malloc, free, which introduced us to dynamic memory allocation in C.
Compilation

The code will be compiled in the following way:

bash

$ gcc -Wall -Werror -Wextra -pedantic *.c

Files

This project contains the following files:
File	Description
holberton.h	Header file containing prototypes of all functions used in the project.
0-malloc_checked.c	Function that allocates memory using malloc. If malloc fails, the function returns 98.
1-string_nconcat.c	Function that concatenates two strings. It will use malloc to allocate memory for the concatenated string.
2-calloc.c	Function that allocates memory for an array, using malloc. It initializes the memory to zero.
3-array_range.c	Function that creates an array of integers. The array contains all the values from min (included) to max (included), ordered from min to max.
100-realloc.c	Function that reallocates a memory block using malloc and free.
Authors
