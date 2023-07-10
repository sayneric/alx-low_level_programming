#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *sayne;
	int m, zi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = zi = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[zi] != '\0')
		zi++;
	sayne = malloc(sizeof(char) * (m + zi + 1));

	if (sayne == NULL)
		return (NULL);
	m = zi = 0;
	while (s1[m] != '\0')
	{
		sayne[m] = s1[m];
		m++;
	}

	while (s2[zi] != '\0')
	{
		sayne[m] = s2[zi];
		m++, zi++;
	}
	sayne[m] = '\0';
	return (sayne);
}
