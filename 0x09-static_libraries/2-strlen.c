#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 *
 * @s: The string whose length will be calculated.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen(s + 1));
}

