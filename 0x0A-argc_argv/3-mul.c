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
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	int i, res = 1;

	for (i = 0; i < argc; ++i)
	{
		res *= argv[i];
	}

	printf("%d\n", res);

	return (0);
}

