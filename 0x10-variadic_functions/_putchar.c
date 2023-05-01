#include <stdio.h>


/**
 * putchar - writes character to standard output
 * @c:character to print
 *
 * return: 1 on success
 * on error, -1 is returned,and errno is set appropriately
 */

int _putchar(char c)
{
	(write(1, &c, 1));
}
