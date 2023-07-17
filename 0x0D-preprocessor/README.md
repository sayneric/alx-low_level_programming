0x0D-preprocessor

This project explores the concept of preprocessor directives in the C programming language. The preprocessor is a phase of the compilation process that performs various manipulations on the source code before the actual compilation takes place. It is responsible for handling tasks such as file inclusion, macro substitution, and conditional compilation.
Learning Objectives

By completing this project, you will learn:

    What are macros and how to use them
    What are the most common predefined macros in C
    How to include guard your header files
    How to prevent recursive inclusion of header files
    What are token pasting and stringification
    How to use the gcc predefined macros

Files

The project consists of the following files:

    0-object_like_macro.h: Defines a macro named SIZE as an abbreviation for the token 1024.
    1-pi.h: Defines a macro named PI as an abbreviation for the token 3.14159265359.
    2-main.c: A sample program that prints the file name it was compiled from.
    3-function_like_macro.h: Defines a macro named ABS(x) that computes the absolute value of a number x.
    4-sum.h: Defines a macro named SUM(x, y) that computes the sum of the numbers x and y.

Requirements

    The code is written in C.
    The code is compiled using gcc.
    The code is executed in a Unix-like operating system.

Usage

To compile and execute the sample program, follow these steps:

    Clone this repository to your local machine.
    Navigate to the project directory: cd 0x0D-preprocessor.
    Compile the program: gcc -Wall -Werror -Wextra -pedantic 2-main.c -o main.
    Run the program: ./main.

Notes

    The project tasks require writing code inside header files, which will be included in the provided sample programs for testing.

Acknowledgments

This project is part of the low-level programming curriculum at ALX, in partnership with Holberton School.

We hope this README file provides you with a clear understanding of the "0x0D-preprocessor" project. Good luck with your studies!
