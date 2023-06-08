#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be printed
 *
 * Return: success 1, otherwise return -1 and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
