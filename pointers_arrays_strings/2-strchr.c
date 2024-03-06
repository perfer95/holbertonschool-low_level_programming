#include <stdio.h>
#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s: string to check
 * @c: char to search
 * Return: a pointer of char type
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{

			return (s + i);
		}
		i++;
	}

	if (s[i] == c)
	{
		return (s + i);
	}
	return (NULL);
}
