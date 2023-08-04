#include "main.h"
#include <stdio.h>
#include <stdint.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to  a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 *  string (b) that is not 0 or 1,
 *  or if the string is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int l = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		l = (l << 1) | (*b - '0');
		b++;
	}
	return (l);
}
