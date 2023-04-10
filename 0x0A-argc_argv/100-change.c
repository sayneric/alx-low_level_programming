#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints a program that determines the minimum number of coins
 * needed to make change for a given amount of money.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num, z, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (z = 0; z < 5 && num >= 0; z++)
	{
		while (num >= coins[z])
		{
			result++;
			num -= coins[z];
		}
	}
	printf("%d\n", result);
	return (0);
}
