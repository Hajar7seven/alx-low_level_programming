#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a function to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, j;
	char *AB;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		AB = (char *)malloc(sizeof(char) * (i + 1));
	if (AB == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
		AB[j] = str[j];
	return (AB);
}