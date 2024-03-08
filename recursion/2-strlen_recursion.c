#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s: string to measure
 * Return: size of s
 */
int _strlen_recursion(char *s)
{
	int size = 0;

	if (*s != '\0')
	{
		size = _strlen_recursion(s + 1) + 1;
	}

	return (size);
}
