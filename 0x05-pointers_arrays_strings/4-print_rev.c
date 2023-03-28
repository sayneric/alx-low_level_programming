#include "main.h"

/**
 * print_ rev - print the string in reverse order
 * followed by a new line
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int longi = 0;

	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
