#include "main.h"
#include <stddef.h>

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
	if (*s != c)
	{
		s++;
	}
	else if (*s == c)
		return (s);
	if (c == '\0')
		return (s);
	return (NULL);
}
