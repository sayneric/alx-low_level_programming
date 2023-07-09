#include "main.h"

/**
 * char *_strcpy - a functions that copies the string point by src
 * @dest : to copy
 * @src : copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l;
	int x;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
