#include "main.h"

/**
 * _strcmp - compare 2 strings
 *
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: difference of s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] == s2[i])
		{
			return (0);
		}
	}
	return (0);
}
