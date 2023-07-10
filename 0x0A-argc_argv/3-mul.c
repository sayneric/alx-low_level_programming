#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int p, g, v, len, h, digit;

	p = 0;
	g = 0;
	v = 0;
	len = 0;
	h = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (p < len && f == 0)
	{
		if (s[p] == '-')
			++g;
		if (s[z] >= '0' && s[z] <= '9')
		{
			digit = s[z] - '0';
			if (g % 2)
				digit = -digit;
			v = v * 10 + digit;
