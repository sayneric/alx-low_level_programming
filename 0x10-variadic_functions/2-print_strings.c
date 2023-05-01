#include "variadic_functions.c"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string, followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of string passed to the function
 * @....: a variable number of strings to be printed
 *
 * Description: if separator is NULL, it is not printed
 * if one of the strings if  NULL, (nill) is printed instead
 */


void print_strings(const char *separator, const unsigned int n, ...)

