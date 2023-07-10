#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int sayne, d, x;

	sayne = 0;
	x = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			sayne = 0;
		else if (sayne == 0)
		{
			sayne = 1;
			x++;
		}
	}

	return (x);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j, u = 0, len = 0, words, a = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (a)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);
				for (j = start; j < end; j++)
					tmp[j - start] = str[j];
				tmp[end - start] = '\0';
				matrix[u] = tmp;
				u++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = i;
	}

	matrix[u] = NULL;

	return (matrix);
}
