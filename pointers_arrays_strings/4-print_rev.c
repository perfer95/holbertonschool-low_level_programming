/*
 * File: 4-print_rev.c
 */

#include "main.h"

/**
 * print_rev - function that prints a string, followed by a new line
 * @s: string to print
 * Return: empty
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
