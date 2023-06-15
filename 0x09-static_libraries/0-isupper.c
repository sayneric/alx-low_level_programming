#include "main.h"


/**
 * _isupper - uppercase letters
 * @c: char to check
 * Return: 0 if it is upper case, 1 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
