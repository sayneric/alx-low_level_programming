#include "main.h"
#include <stdio.h>


/**
 * flip_bits - return the number of bits i would need flip to get
 * from one number to another
 * @n: parameter
 * @m: parameter
 *
 * Return: the number of bits needed to flip from one number to another
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
