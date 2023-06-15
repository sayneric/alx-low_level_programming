#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int q = 0;
	int p;

	while (dest[q] != '\0')
	{
		q++;
	}
	p = 0;
	while (src[p] != '\0')
	{
		dest[q] = src[p];
		q++;
		p++;
	}
	dest[q] = '\0';
	return (dest);
}
