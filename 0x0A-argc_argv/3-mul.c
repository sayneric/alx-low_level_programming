#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: string to be converted
 *
 * Return: the result of the string that was  conveted to integer
 */

int _atoi(char *s)
{
	int i = 0, v = 0, p = 0, k = 0, digit = 0, len = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && k == 0)
	{
		if (s[i] == '-')
			++v;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (v % 2)
				digit = -digit;
			p = p * 10 + digit;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}
	if (k == 0)
		return (0);
	return (p);
}

/**
 * main - Prints the product of two numbers.
 * and prints the result
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
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
