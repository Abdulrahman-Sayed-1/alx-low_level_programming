#include "main.h"
/**
 * _print_rev_recursion - Prints the string reversed.
 *
 * @s: The string to be printed.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	static int end = 0;

	if (end == 1)
	{
		_putchar(*s);

		if (*s == '\n')
		{
			return;
		}

		_print_rev_recursion(--s);
	}
	else
	{
		if (*s != '\0')
		{
			_print_rev_recursion(++s);
		}
		else
		{
			end = 1;

			_print_rev_recursion(--s);
		}
	}
}
