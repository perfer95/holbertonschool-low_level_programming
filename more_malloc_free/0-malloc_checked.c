#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: integer that represent number of bytes
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *var;

	var = malloc(b);

	if (var == NULL)
	{
		exit(98);
	}

	return (var);
}
