#include "main.h"

/**
 * char *_strcpy - a functions that copies the string point by src
 * @dest : to copy
 * @src : copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int b;
	int c;

	while (*(src + b) != '\0')
	{
		b++;
	}
	for (; c < b ; c++)
	{
		dest[c] = src[c];
	}
	dest[b] = '\0';
	return (dest);
}
