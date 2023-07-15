#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int x, v;

	for (x = 48; x <= 56; x++)
	{
		for (v = 49; v <= 57; v++)
		{
			if (v > x)
			{
				putchar(x);
				putchar(v);
				if (x != 56 || v != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
