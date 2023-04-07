#include "main.h"

/**
 * _check_if_prime_num - checks if the num is a prime
 *
 * @n1: integer
 * @i: integer
 *
 * Return: integer
 */

int _check_if_prime_num(int n1, int i)
{
	if (n1 % i == 0)
	{
		return (0);
	}
	if (i < 2)
	{
		return (0);
	}
	if (n1 > i / 2)
	{
		return (1);
	}
	return (_check_if_prime_num(n1 + 1, i));
}

/**
 * is_prime_number - returns 1 if int is a prime num, otherwise 0
 *
 * @n: input int
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (_check_if_prime_num(2, n));
}
