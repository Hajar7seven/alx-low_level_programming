#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	long int f = 0;
	long int s = 1;
	long int n;

	for (i = 0; i < 50; i++)
	{
		n = f + s;
		printf("%lu", n);

		f = s;
		s = n;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
