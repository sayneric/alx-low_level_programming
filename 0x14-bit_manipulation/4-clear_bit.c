#include "main.h"
#include <stdio.h>
#include <stdint.h>


/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: the index starting from 0 of the bit to be set
 * @n: the number to set bit at
 *
 * Return: 1 on success, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask = 1UL << index;
	*n = *n & ~mask;
	return (1);
}
