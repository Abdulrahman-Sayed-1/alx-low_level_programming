#include "main.h"
/**
 * main - Prints the number of its arguments.
 *
 * @argc: The number of command line arguments.
 * @argv: The arguments of the commmand line.
 *
 * Return: on success 0.
 */
int main(int argc, char *argv[])
{
	int num = 0;

	if (argc)
		num = argc - 1;

	printf("%d\n", num);

	return (0);
}

