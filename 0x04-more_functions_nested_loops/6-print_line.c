#include "main.h"

/**
 * print_line - draws a line in the terminal
 *
 * @n: number of times the character _ should be printed
 *
 * Return: always 0
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}
	_putchar('\n');
}
