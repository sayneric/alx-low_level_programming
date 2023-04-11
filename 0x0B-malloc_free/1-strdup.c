#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 *
 */
char *_strdup(char *str)
{
	char *bbb;
	int p, g = 0;

	if (str == NULL)
		return (NULL);
	p = 0;
	while (str[p] != '\0')
		p++;
	bbb = malloc(sizeof(char) * (p + 1));
	if (bbb == NULL)
		return (NULL);
	for (g = 0; str[g]; g++)
		bbb[g] = str[g];
	return (bbb);
}
