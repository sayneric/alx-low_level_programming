#include "main.h"

int actual_prime(int n, int z);

/**
 * is_prime_number - says if an integer is prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * catual_prime - calculates if a number is prime recursevely
 * @n:number to evaluate
 * @z: iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int actual_prime(int n, int z)
{
	if (z == 1)
		return (1);
	if (n % z == 0 && z > 0)
		return (0);
	return (actual_prime(n, z - 1));
}
