#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  function that allocates memory for an array,
 * using malloc
 * @nmemb: number of elements
 * @size: bytes o each element
 * Return: an array pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
