#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints letters in lowercase followed by a new line
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z' ; i++)
		_putchar((char)i);

	_putchar('\n');
}
