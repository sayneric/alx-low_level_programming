#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input
 * @accept:input
 * Return:always 0(success)
 */

char* strpbrk(char *s, char *accept)
{
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
				return (s);
		}
		s++;
	}
	return ('\0');
}
