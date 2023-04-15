#include "main.h"

/**
 * _islower - check if is lowercase
 * @c: is the char to be checked
 *_islower: character that are lowercase
 * Return: 1 if character is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
