#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *conc;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	for (i = 0; s1[i]; i++)
	for (j = 0; s2[j]; j++)
	conc = malloc(sizeof(char) * (i + j + 1));
	if (conc == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		conc[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		conc[i] = s2[j];
	conc[i] = '\0';
	return (conc);
}
