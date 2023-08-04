#include "main.h"
#include <stdio.h>
#include <stdint.h>


/**
 * print_binary - prints the binary representation of a number
 * @n: number whose binary representation will be printed
 *
 * Return: void
 */


void print_binary(unsigned long int n)
{
	int b, flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (b = (sizeof(unsigned long int) * 8) - 1; b >= 0; b--)
	{
		if ((n >> b) & 1)
		{
			putchar('1');
			flag = 1;
		}
		else if (flag)
			putchar('0');
	}
}
