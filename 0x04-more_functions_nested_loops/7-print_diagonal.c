#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * Return: always 0
 */
void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x > n; x++)
		{
			for (
