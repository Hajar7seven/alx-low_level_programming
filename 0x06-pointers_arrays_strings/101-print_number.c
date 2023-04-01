#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
