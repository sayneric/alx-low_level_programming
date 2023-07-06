#include "main.h"



int actual_prime(int n, int i);

/**
 * is_prime_number - says if an iteger is a prime number or not
 * @n: number to evalute
 *
 * Return: 1 if n is prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is a prime recursively
 * @n: number to evalute
 * @i: iterator
 *
 * Return: 0 if number is not prime, 1 otherwise
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
