#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 *
 * @array: pointer to an array
 * @size: number of elements in the array
 * @cmp:  pointer to the function to be used
 * to compare values
 *
 * Return: index of 1st element in which cmp
 * does not return 0, or -1 if no ekement matches
 * and -1 if size is less than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i <  size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
