#include "main.h"

/**
 * _islower - check if is lowercase
 * @c: is the char to be checked
 *_islower: character that are lowercase
 * return 1 if character is lowercase, return 0 if uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
