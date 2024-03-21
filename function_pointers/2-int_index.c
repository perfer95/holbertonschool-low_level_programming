#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer function
 * Return: returns the index of the first element for which the cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i); /*Index match*/
			}
		}

	}
	return (-1); /*No Matches*/
}


