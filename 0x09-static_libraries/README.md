0x09-static_libraries

This repository contains the source code for the ALX Africa project on static libraries. The project aims to demonstrate the concept of static libraries and how to create and use them in C programming.
Project Description

Static libraries are collections of object files that are combined into a single file. They provide a way to package and distribute reusable code that can be linked with other programs at compile time. The project explores the creation of static libraries, their usage, and the benefits they offer in terms of code organization and reusability.
Project Files

The repository includes the following files:

    holberton.h: This header file contains the prototypes for the functions used in the project.
    create_static_lib.sh: This shell script compiles a set of C files and creates a static library named libholberton.a.
    *.c: These are the C source files that implement various functions.

Compilation and Usage

To compile the static library, you can use the provided script create_static_lib.sh. Execute the script using the following command:

shell

$ ./create_static_lib.sh

This will compile all the .c files in the repository and create the static library libholberton.a.

To use the static library in your own programs, follow these steps:

    Include the holberton.h header file in your program.
    Link the libholberton.a library when compiling your program.

Here's an example compilation command:

shell

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c my_program.c
$ gcc -o my_program my_program.o -L. -lholberton

Make sure to replace my_program.c with the name of your program.
Examples

Here are a few examples demonstrating the usage of functions from the static library:

c

#include "holberton.h"

int main(void)
{
    _putchar('A');
    _putchar('L');
    _putchar('X');
    _putchar('\n');

    return 0;
}

In the above example, the program uses the _putchar function from the static library to print "ALX" followed by a new line.
Author

This project is authored by Sayneric as part of the ALX Africa software engineering program. For more information, visit ALX Africa.

