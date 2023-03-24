#include "main.h"

/**
 * _isdigit - checks for digits (0 through 9)
 * @c: char to check for
 *
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
