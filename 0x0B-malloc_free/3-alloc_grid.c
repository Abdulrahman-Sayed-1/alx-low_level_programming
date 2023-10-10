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
	int *arr2D, **r, i, j;

	if (width == 0 || height == 0 || width < 0 || height < 0)
		return (NULL);

	arr2D = malloc(sizeof(int) * width * height);

	if (arr2D == NULL)
		return (NULL);

	r = &arr2D;

	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j, ++arr2D)
		{
			*arr2D = 0;
		}
	}

	return (r);
}

