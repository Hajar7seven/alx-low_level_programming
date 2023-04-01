#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string to be capitalized
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
				|| s[i] == ',' || s[i] == ';'
				|| s[i] == '.' || s[i] == '!'
				|| s[i] == '?' || s[i] == '"'
				|| s[i] == '(' || s[i] == ')'
				|| s[i] == '{' || s[i] == '}'
				|| s[i] == '0')
			s[i] = 32;
		}
		s[i] = s[i] - 32;
	}
	return (s);
}
