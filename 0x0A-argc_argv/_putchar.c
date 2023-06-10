#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: the character to print
 *
 * Return: 1 on success, -1 on error and errno is set accordinly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
