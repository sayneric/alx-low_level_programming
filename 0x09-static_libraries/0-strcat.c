#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int b;
	int d;

	d = 0;
	while (dest[b] != '\0')
	{
		b++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[b] = src[d];
		b++;
		d++;
	}
	dest[b] = '\0';
	return (dest);
}
