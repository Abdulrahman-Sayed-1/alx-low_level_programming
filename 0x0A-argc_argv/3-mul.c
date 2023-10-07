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
	int res, x, y;
	
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		res = x * y;

		printf("%d\n", res);

		return (0);
	}

	printf("Error\n");

	return (1);
}

