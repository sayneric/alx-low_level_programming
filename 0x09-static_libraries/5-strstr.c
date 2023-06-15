#include "main.h"

/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: always 0( success)
 */

char * _strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
