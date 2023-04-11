#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int z, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	z = ci = 0;
	while (s1[z] != '\0')
		z++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (z + ci + 1));
	if (conct == NULL)
		return (NULL);
	z = ci = 0;
	while (s2[z] != '\0')
	{
		conct[z] = s1[z];
		z++;
	}
	while (s2[ci] != '\0')
	{
		conct[z] = s2[ci];
		z++, ci++;
	}
	conct[z] = '\0';
	return (conct);
}
