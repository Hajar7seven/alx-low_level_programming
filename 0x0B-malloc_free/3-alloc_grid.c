#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer of array of integers
 */
int **alloc_grid(int width, int height)
{
	int **AB;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	AB = (int **)malloc(height * sizeof(int));
	if (AB != NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		AB[i] = (int *)malloc(width * sizeof(int));
		if (AB[i] == NULL)
		{
			for (; i >= 0; i--)
				free(AB[i]);
			free(AB);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			AB[i][j] = 0;
	}
	return (AB);
}
