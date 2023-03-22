#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: variable
 * Return: always 0
 */

void print_times_table(int n)
{
	int a;
	int b;
	int x;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				x = a * b;
				_putchar(',');
				_putchar(' ');
				if (x <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(x + ',');
				}
				else if (x <= 99)
				{
					_putchar(32);
					_putchar((x / 10) + 48);
					_putchar((x % 10) + 48);
				}
				else
				{
					_putchar(((x / 100) % 10) + '0');
					_putchar(((x / 10) % 10) +48);
					_putchar((x % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
