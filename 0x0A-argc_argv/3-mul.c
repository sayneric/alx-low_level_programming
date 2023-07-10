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
	while (p < len && h == 0)
	{
		if (s[p] == '-')
			++g;
		if (s[p] >= '0' && s[p] <= '9')
		{
			digit = s[p] - '0';
			if (g % 2)
				digit = -digit;
			v = v * 10 + digit;
			h = 1;
			if (s[p + 1] < '0' || s[p = 1] > '9')
				break;
			h = 0;
		}
		p++;
	}
	if (h == 0)
		return (0);
	return (v);
}


/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
