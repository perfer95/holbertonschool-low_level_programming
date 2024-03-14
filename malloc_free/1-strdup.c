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
	int size = 0;
	char *str2 = malloc(sizeof(str));

	if (str2 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			size++;
		}
		size++;

		for (i = 0; i <= size; i++)
		{
			str2[i] = str[i];
		}
	}

	return (str2);
}
