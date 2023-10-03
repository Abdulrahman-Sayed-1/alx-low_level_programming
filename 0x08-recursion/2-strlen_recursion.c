#include "main.h"
/**
 * _strlen_recursion - Prints the length of the a string.
 *
 * @s: The string whose length will be calculated.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
