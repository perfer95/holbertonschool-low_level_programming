#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, val;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	}

	val = s1[i] - s2[i];

	return (val);
}
