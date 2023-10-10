#include "main.h"
/**
 * str_concat - Concatenates Two Strings.
 *
 * @s1: The source string.
 * @s2: The string that will be concatenated to @s1.
 *
 * Return: A pointer to the new string on success, otherwise NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, size = 1;
	char *p1, *p2, *new_str, *r;

	p1 = s1, p2 = s2;

	if ((*s1 == '\0' && *s2 == '\0') || (s1 == NULL && s2 == NULL))
		return (NULL);

	while (*s1 != '\0')
	{
		++size, ++s1;
	}

	while (*s2 != '\0')
	{
		++size, ++s2;
	}

	new_str = malloc(size);

	if (new_str == NULL)
		return (NULL);

	r = new_str;

	for (i = 0; i < size - 1; ++i, ++new_str)
	{
		if (p1)
			*new_str = *p1, ++p1;
		else
			*new_str = *p2, ++p2;
	}

	new_str = '\0';

	return (r);
}

