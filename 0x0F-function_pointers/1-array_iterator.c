#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 *
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to the function needed to use
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	if (array == NULL)
	return;
	if (action == NULL)
	return;
	while (i < size)
	{
	action(array[i]);
	i++;
	}
}	
