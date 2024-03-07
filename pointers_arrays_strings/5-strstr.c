#include <stdio.h>
#include "main.h"

/**
 * _strstr - function that searches a string for any of a set of bytes.
 * @haystack: string to check
 * @needle: string base to find
 * Return: a pointer of char type
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = i;
			k = 0;

			while (needle[k] != '\0')
			{
				if (needle[k] != haystack[j])
				{
					break;
				}
				k++;
				j++;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}

	return (NULL);
}
