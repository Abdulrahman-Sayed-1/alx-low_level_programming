#include "main.h"
/**
 * factorial - Calculates the factorial of a number.
 *
 * @n: The number whose factorial will be calculated.
 *
 * Returns:
 *   - The factorail if @n is greater than or equal to zero.
 *   - -1 if @n is less than zero
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
