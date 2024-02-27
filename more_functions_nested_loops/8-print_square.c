/*
 * File: 8-print_square.c
 * Author: perfer
 */

#include "main.h"

/**
 * print_square - function that prints a square,
 * followed by a new line.
 * @size: square size
 * return: void just print
 */
void print_square(int size)
{
	int i, j;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
