#include "main.h"

/**
 * _strncat - function that copies a string.
 * @dest: string 1
 * @src: string 2
 * @n: int number of elements to copy
 * Return: a char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}

	for (j = i; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
