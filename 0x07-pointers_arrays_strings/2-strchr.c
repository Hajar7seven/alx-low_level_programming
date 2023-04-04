#include "main.h"

/**
 * _strchr - function that locates a char in a string
 *
 * @s: string pointer
 * @c: character that is located
 *
 * Return: c if char is located, NULL if char is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
