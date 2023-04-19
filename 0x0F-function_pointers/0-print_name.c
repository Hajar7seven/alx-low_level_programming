#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 *
 * @name: string
 * @f: pointer to a function
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
