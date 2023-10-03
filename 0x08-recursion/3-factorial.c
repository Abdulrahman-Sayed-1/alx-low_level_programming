#include "main.h"
/**
 * factorial - Calculates the factorial of a number.
 *
 * @n: The number whose factorial will be calculated.
 *
 * Return: The factorial if @n is greater than or equal to zero,
 * otherwise -1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
