#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - calculates the length of a string
 * @s: the string to measured
 * Return: the length of the string
 */


int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
