#include "main.h"

/**
 * _islower - shows if the input is a
 *@c: The character in ASCII code
 * Return: 1 for lowercase char. 0 for the rest
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}