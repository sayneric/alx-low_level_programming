#include "main.h"

/**
 * _abs - computes the absolue value of an integer
 * @n: the integer  to check
 * Return: the absolute value of int, -n otherwise
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
