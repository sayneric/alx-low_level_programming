#include "main.h"

/**
 * _isalpha -checks  for  an  alphabetic character
 * @c the character to be checked
 * Returns 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
