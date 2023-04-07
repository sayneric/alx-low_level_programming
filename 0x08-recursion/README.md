Project Name

0x08. C - Recursion
Description

This project is part of the Holberton School curriculum and is focused on teaching students about recursion in the C programming language.

In this project, we will learn about what recursion is, how it works, and how to use it in C. We will also learn about the different types of recursion and how to write recursive functions that solve problems in a recursive manner.
List of Functions

The following functions are included in this project:

    0-puts_recursion.c - a function that prints a string, followed by a new line, using recursion.
    1-print_rev_recursion.c - a function that prints a string in reverse, using recursion.
    2-strlen_recursion.c - a function that returns the length of a string, using recursion.
    3-factorial.c - a function that returns the factorial of a given number, using recursion.
    4-pow_recursion.c - a function that returns the value of x raised to the power of y, using recursion.
    5-sqrt_recursion.c - a function that returns the natural square root of a number, using recursion.
    6-is_prime_number.c - a function that checks if a number is a prime number, using recursion.
    7-is_palindrome.c - a function that checks if a string is a palindrome, using recursion.

Requirements

    All your files will be compiled on Ubuntu 20.04 LTS using gcc, with the flags -Wall -Werror -Wextra -pedantic -std=gnu89.
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
    You are not allowed to use any kind of loops in your code.
    You are not allowed to use static variables.
    You are not allowed to use the standard library. Any use of functions like printf, puts, etc... is forbidden.

Usage

To use these functions in your project, include the corresponding header file in your source code:

c

#include "header.h"

Then, call the function with the appropriate arguments:

c

int n = 5;
int result = factorial(n);
printf("%d! = %d\n", n, result);

This will compute and print the factorial of 5 (5!) which is 120.
Examples

Example 1:

Input:

c

char *str = "Holberton";
_puts_recursion(str);

Output:

Holberton

Example 2:

Input:

c

char *str = "Betty Holberton";
_print_rev_recursion(str);

Output:

notrebloH yttoB

Contact

For any questions or suggestions, please contact [saynerical@gmail.com].
