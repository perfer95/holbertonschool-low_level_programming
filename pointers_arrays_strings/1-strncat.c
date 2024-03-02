#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: string 1
 * @src: string 2
 * @n: int number of elements to cat
 * Return: a char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; (j < n) && (src[j] != '\0'); j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
