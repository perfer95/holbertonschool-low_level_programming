#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: array to recive copy
 * @src: array where to copy
 * @n: first numbers of bytes to copy
 * Return: a char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
