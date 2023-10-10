#include "main.h"
/**
 * alloc_grid - allocates memory for a grid of size @width * @height.
 *
 * @width: The number of rows
 * @height: The number of columns.
 *
 * Return: A pointer to a pointer to the first memory address of the 2D array.
 */
int **alloc_grid(int width, int height)
{
	int *arr2D, **r;

	if (width == 0 || height == 0 || width < 0 || height < 0)
		return (NULL);

	arr2D = calloc(width * height, sizeof(int));

	if (arr2D == NULL)
		return (NULL);

	r = &arr2D;

	return (r);
}

