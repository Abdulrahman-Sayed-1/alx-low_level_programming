#include "main.h"
/**
 * _strdup - Duplicates the string passed to it.
 *
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the new string on success, otherwise NULL.
 */
char *_strdup(char *str)
{
	int i, size = 1;
	char *pos, *r, *new_str = NULL;

	if (str == NULL)
		return (NULL);

	pos = str;
	r = str;

	while (*str != '\0')
		++str, ++size;

	new_str = malloc(size);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < size; ++i, ++new_str, ++pos)
	{
		*new_str = *pos;
	}

	*new_str = '\0';

	return (r);
}

