#include "main.h"

/**
 * print_sign - determines if the input number
 * greater,equal or less than zero
 *
 * @n: an integer
 *
 * Return: 1 when n is greater than 0. 0 when it's 0. -1 when it's
 * less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
