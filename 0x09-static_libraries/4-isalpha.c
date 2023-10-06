#include "main.h"
/**
 * _isalpha - checks if a character is an alphabet letter or not.
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is an alphabet letter, otherwise 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

