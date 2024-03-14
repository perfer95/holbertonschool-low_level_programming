#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: string to copy
 * Return: a pointe char type
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *s;

	if (str == 0)
		return (0);

	len = 0;
	while (str[len] != '\0')
		len++;
	len++;

	s = malloc(len * sizeof(char));
	if (s == 0)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
