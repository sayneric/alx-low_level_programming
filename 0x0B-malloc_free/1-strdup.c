#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int t, y = 0;
	char *sayne;

	if (str == NULL)
		return (NULL);
	t = 0;
	while (str[t] != '\0')
		t++;

	sayne = malloc(sizeof(char) * (t + 1));

	if (sayne == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		sayne[y] = str[y];

	return (sayne);
}
