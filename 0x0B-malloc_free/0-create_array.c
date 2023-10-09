#include "main.h"
/**
 * create_array - creates an array and initializes it with a specific character
 *
 * @size: brief description
 * @c: brief description
 *
 * Return: a poniter to the array on success , otherwise NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p = malloc(size + 1);

	if (size == 0)
		return (NULL);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; ++i, ++p)
	{
		*p = c;
	}

	*p = '\0';

	p -= size;

	free(p);

	return (p);
}

