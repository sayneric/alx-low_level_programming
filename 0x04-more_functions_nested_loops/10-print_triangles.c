#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int y, z;

		for (y = 1; y <= size; y++)
		{
			for (z = i; z < size; z++)
			{
				_putchar(' ');
			}

			for (z = 1; z <= y; z++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
