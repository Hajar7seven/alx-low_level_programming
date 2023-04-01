#include "main.h"

/**
 * _strncat - concatenates 2 strings
 *
 * @dest: destination string
 * @src: source string
 * @n: numbers of char to be appended
 *
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	for (j= 0; j < n && src[j] != '\0'; j++)
	dest[i] = '\0';
	return (dest);
}
