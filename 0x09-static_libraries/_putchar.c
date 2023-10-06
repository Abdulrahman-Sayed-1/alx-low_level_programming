#include <unistd.h>
/**
 * _putchar - prints the character @c to stdout
 *
 * @c: The character to be printed
 *
 * Return: On success 1, On error -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
