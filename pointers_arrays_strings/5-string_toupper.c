#include "main.h"

/**
 * string_toupper - function that reverses the content
 * of an array of integers
 * @str: string to check
 * Return: string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32; /*diference in low an upper*/
		}
		i++;
	}

	return (str);
}
