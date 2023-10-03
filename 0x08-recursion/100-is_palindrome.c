#include "main.h"
/**
 * check_if_palindrome - Checks if a string is a palindrome or not.
 *
 * @len: The length of the string.
 * @s: The string whose palindromy will be checked.
 * @idx: A helper variabel to check the palindromy.
 *
 * Return: 1 is the string is a palindrome , 0 if not.
 */
int check_if_palindrome(int len, char *s, int idx)
{
	if (idx > (len / 2))
	{
		return (1);
	}

	if (*(s + idx) != *(s + len - idx - 1))
	{
		return (0);
	}

	check_if_palindrome(len, s, ++idx);
}

/**
 * _strlen_recursion - Calculates the length of a string.
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

/**
 * is_palindrome - Checks if a string is a palindrome or not.
 *
 * @s: The string whose palindromy will be checked.
 *
 * Return: 1 is the string is a palindrome , 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (check_if_palindrome(len, s, 0));
}
