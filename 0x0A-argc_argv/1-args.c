#include <stdio.h>

/**
 * main - prints the number of args passed into it
 *
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
