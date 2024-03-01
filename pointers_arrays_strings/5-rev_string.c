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
	int aux;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	k = i - 1; /*lenght of s without \0 but in format position*/

	for (j = 0; j < (i / 2); j++)
	{
		aux = s[j];
		s[j] = s[k];
		s[k] = aux;
		k--;
	}

}
