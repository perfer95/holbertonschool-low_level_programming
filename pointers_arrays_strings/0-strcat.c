#include "main.h"

/**
 * _strcat - change a value o a variable with pointers
 * @dest: string 2
 * @src: string 1
 * Return: a char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
