#include <stdlib.h>
#include "main.h"

/**
 * array_range -  function that creates an array of integers.
 * @min: number to start
 * @max: number to finish
 * Return: an array pointer
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr_int;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;
	arr_int = malloc(size * sizeof(int));

	if (arr_int == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr_int[i] = min++;
	}
	return (arr_int);
}
