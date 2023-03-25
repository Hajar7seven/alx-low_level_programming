#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: input
 * Return: always 0
 */
void print_diagonal(int n)
{
	int x;
	int y;

	x = 0;

	while (n > 0)
	{
		y = x;
		while (y < 0)
		{
				_putchar(' ');
				y--;
		}
			_putchar('\\');
			_putchar('\n');
			x++;
			n--;
	}
	if (x < 1)
		_putchar('\n');
}
