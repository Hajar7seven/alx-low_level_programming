#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 * it with a specific char
 *
 * @size: array size
 * @c: char
 *
 * Return: NULLor pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *chr;

	chr = malloc(sizeof(c) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (chr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		chr[i] = c;
	return (chr);
}
