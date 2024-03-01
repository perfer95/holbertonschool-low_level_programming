/*
* File: 9-strcpy.c
*/

#include "main.h"

/**
 * print_array - function that prints n elements
 * of an array of integers
 * @dest: array which is goin to recibe the string
 * @src: string to copy
 * Return: empty
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
