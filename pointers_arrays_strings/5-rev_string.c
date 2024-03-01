/*
* File: 5-rev_string.c
*/

#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 * @s: string to reverse
 * Return: empty
 */
void rev_string(char *s)
{
	int i, j;
	int k = 0;
	char inv[sizeof(s)];

	for (i = 0; s[i] != '\0'; i++)
	{
		inv[i] = s[i];
	}
	inv[i] = '\n'
	k = i;

	for (j = 0; j <= i; j++)
	{
		s[j] = inv[k];
		k--;
	}
}
