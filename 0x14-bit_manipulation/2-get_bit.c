#include "main.h"
#include <stdio.h>
#include <stdint.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @index: the given index starting from 0 of the bit to get
 * @n:the number to extract bit from
 *
 * Return: the value of bit at index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
