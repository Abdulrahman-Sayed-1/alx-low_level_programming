#include "main.h"
/**
 * main - Prints the multiplication result of two numbers.
 *
 * @argc: The number of command line arguments.
 * @argv: The arguments of the commmand line.
 *
 * Return: on success 0, on error 1.
 */
int main(int argc, char *argv[])
{
	int i, res = 1;
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	for (i = 0; i < argc; ++i)
	{
		res *= atoi(argv[i]);
	}

	printf("%d\n", res);

	return (0);
}

