/*
* File: 5-rev_string.c
*/

#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to reverse
 * Return: empty
 */
void rev_string(char *s)
{
	int i, j;
	int k = 0;
	char *inv;

	for (i = 0; s[i] != '\0'; i++)
	{
		inv[i] = s[i];
	}
	k = i - 1;

	for (j = 0; j <= (i - 1); j++)
	{
		s[j] = inv[k];
		k--;
	}
}
