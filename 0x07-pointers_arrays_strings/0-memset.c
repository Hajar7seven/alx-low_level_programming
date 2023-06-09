#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @n: bytes of the memory
 * @s: pointer
 * @b: constant byte
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
