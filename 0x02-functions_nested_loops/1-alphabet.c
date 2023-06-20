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
		_putchar('i');

	_putchar('\n');
}

/**
 * main - The main function of the program.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
