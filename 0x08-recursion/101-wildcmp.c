#include "main.h"

/**
 * wildcmp - compare strings
 * @s1: pointer to the string params
 * @s2: pointer to string params
 * Return: 1 if they are identical, otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0')
			return (1);
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (0);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (wildcmp(s1, s2 + 1))
			return (1);
		while (*s1 != '\0' && *s1 != *(s2 + 1))
			s1++;
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
