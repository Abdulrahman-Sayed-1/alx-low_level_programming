#include "main.h"

/**
 * print_alphabet_x10 - prints letters 10 times
 * in lowecase followed by a new line
 */

void print_alphabet_x10(void)
{
	int cnt = 10;

	while (cnt--)
	{
		char c = 'a';

		for (; c <= 'z'; c++)
			_putchar((char)c);

		_putchar('\n');
	}
}
