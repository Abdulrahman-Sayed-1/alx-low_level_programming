#include "main.h"
/**
 * square_root - calculates the square root of a number greater than zero.
 *
 * @n: The number whose square root will be calculated.
 * @guess: A helper variable to calculate the square root.
 *
 * Return: The square root of @n if it's a perfect square , otherwise -1.
 */
int square_root(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess < n)
	{
		return (square_root(n, guess + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Checks if the number is equal to zero or a negative number
 *
 * @n: The number whose square root will be calculated.
 *
 * Return: The square root of the number , if it doesn't have one it returns -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (square_root(n, 1));
	}
}
