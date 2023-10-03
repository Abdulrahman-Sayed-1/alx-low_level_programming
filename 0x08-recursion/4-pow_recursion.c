#include "main.h"
/**
 * _pow_recursion - Calculates the value of x raised to the power y.
 *
 * @x: The base.
 * @y: The power.
 *
 * Return: The value of x raised to the power y if y is greater than zero
 * ,otherwise it returns -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return x * _pow_recursion(x, y - 1);
}
