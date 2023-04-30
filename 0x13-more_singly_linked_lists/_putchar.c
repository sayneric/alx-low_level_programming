#include <unistd.h>

/**
 * putchar - writes character to the standard output
 * @c: character to print
 *
 * Return: 1 on success
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	(write(1, &c, 1));
}
