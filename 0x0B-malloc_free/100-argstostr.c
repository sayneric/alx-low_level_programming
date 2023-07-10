#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int d, e, f = 0, g = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (d = 0; d < ac; d++)
	{
		for (e = 0; av[d][e]; e++)
			g++;
	}
	g += ac;

	str = malloc(sizeof(char) * g + 1);
	if (str == NULL)
		return (NULL);
	for (d = 0; d < ac; d++)
	{
	for (e = 0; av[d][e]; e++)
	{
		str[f] = av[d][e];
		f++;
	}
	if (str[f] == '\0')
	{
		str[f++] = '\n';
	}
	}
	return (str);
}
