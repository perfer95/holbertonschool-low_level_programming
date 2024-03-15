#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1 to concatenat
 * @s2: string 2 to concatenat
 * Return: a pointer type char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int size1 = 0, size2 = 0;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}

	concat = malloc((size1 + size2 + 1) * sizeof(char)); /*1 because '\0'*/

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		concat[i] = s2[j];
	}

	concat[i] = '\0';
	return (concat);
}
