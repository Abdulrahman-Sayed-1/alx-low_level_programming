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
	if (argc)
	{
		printf("%d\n", argc - 1);

		(void)argv;
	}

	return (0);
}

