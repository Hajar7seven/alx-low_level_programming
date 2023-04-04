#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to be scanned
 * @accept: string contains chars to match
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int i;


