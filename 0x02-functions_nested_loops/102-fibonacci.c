#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	i=3;

	long int f = 1, 
	long int s = 2;
	long int n = f + s;

	printf("%lu, ", f);
	printf("%lu, ", s);

	while (i <= 50)
	{
		if (i ==50)
		{
			printf("%lu \n", n);
		}
		else
		{
			printf("%lu, ", n);
		}
		
		f = s;
		s = n;
		n = f + s;
		i++;
	}
	return (0);
}
