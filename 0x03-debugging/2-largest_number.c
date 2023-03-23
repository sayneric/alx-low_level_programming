#include "main.h"


/**
 * larget_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Returns: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)

		else
			largest = c;

	}

	else
	{
		if (b < c)
			largest = c;
		else
			largest = b;
	}

	return (largest);
}
