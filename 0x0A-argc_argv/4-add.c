#include "main.h"
/**
 * main - Prints the addition result of all the numbers passedto to it.
 *
 * @argc: The number of command line arguments.
 * @argv: The arguments of the commmand line.
 *
 * Return: on success 0, on error 1.
 */

int main(int argc, char *argv[])
{
	int sum, val, i;

	sum = 0;

	if (argc < 1)
		printf("%d\n", 0);

	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{

			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");

				return (1);
			}
		}

		val = atoi(argv[argc]);

		sum += val;
	}

	printf("%d\n", sum);

	return (0);
}

