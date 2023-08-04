#include "main.h"
#include <stdio.h>
#include <stdint.h>


/**
 * get_endianness - checks for endianness
 *
 * Return: 0 if the system is big endian, 1 if the system is little
 */


int get_endianness(void)
{
	uint32_t num = 1;
	uint8_t *byte_pointer = (uint8_t *)&num;

	return (byte_pointer[0] == 0 ? 0 : 1);
}
