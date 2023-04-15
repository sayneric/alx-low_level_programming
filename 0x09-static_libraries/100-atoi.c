#include "main.h"
#include <stdlib.h>
/**
 * _atoi - Function that convert a string to an integer
 * @s: String to be converted an integer
 * Return: Integer value
 */
int _atoi(char *s)
{
	unsigned int i, j;
	int  m, count, n;
	
	n = 0;
	count = 0;
	m = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			m++;
			for (j = 0; j <= i; j++)
			{
				if (s[j] == '-' && m == 1)
					count++;
			}
			n = n * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	if (m == 0 || s[0] == '\0')
		return (0);
	else if (count % 2 == 0 && m != 0)
		return (n);
	else
		return (-n);
}
