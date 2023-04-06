#include "main.h"

/**
 * _check_sqrt - checks if n has a natural square root
 *
 * @n: input number
 * @i: the root
 *
 * Return: n if it's a natural square root, -1 if not
 */

int _check_sqrt(int n, int i)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	return (_check_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square of a number
 *
 * @n: input number
 *
 * Return: n if it's natural, -1 if not
 */

int _sqrt_recursion(int n)
{
	return (_check_sqrt(n, 1));
}


