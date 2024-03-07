#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to check
 * @accept: string base to check
 * Return: a pointer of char type
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return (NULL);
}
