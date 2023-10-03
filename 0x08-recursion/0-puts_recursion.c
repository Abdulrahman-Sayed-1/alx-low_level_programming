#include <stdio.h>
/**
 * _puts_recursion - prints a string's characters.
 *
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_putchar(*s);

	_puts_recursion(++s);
}
int main()
{
	_puts_recursion("Hello World !");
	return (0);
}
