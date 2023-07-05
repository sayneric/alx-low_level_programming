#include "main.h"



/**
 * factorial - returns the facatorial of a number
 * @n: number to return factorial from
 *
 * Return: factorial of n
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n  == 0)
		return (1);
	return (n *  factorial(n - 1));
}
