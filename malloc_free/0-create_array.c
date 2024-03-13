#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: array size
 * @c: char to initialize
 * Return: a pointer of type char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[i] = c;
	}
	return (array);
}
