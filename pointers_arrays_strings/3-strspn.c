#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to check
 * @accept: string base to check
 * Return: a pointer of char type
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				break;
			}
			j++;
		}
		if (accept[j] == '\0' || accept[j] != s[i])
		{
			return (i);
		}

		i++;
	}
	return (i);
}
