#include "main.h"

int _strlen_recursion(char *s);
int check_pal(char *s, int i, int len);


/**
 * is_palindrome - checkks if a string is palindrome
 * @s: string to reverse
 *
 * Return: 0 if it is not, 1 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 0 if it is not a palindrome, 1 otherwise
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}


/**
 * _strlen_recursion - returns the length of a string
 * @s: string to measure
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
