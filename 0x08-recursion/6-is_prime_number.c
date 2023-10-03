#include "main.h"
/**
 * is_prime - Checks if the number is a prime or not.
 *
 * @n: The number to be checked.
 * @c: A helper variable to check.
 *
 * Return: if it's a prime it returns 1, otherwise 0.
 */
int is_prime(int n, int c)
{
	if (n % c == 0)
	{
		return (0);
	}

	if (c == 2)
	{
		return (1);
	}

	return (is_prime(n, c - 1));
}

/**
 * is_prime_number - Checks if the number is a prime or not.
 *
 * @n: The number to be checked.
 *
 * Return: if it's a prime it returns 1, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n < 2 || n % 2 == 0 && n != 2)
	{
		return (0);
	}

	return (is_prime(n, n - 1));
}
