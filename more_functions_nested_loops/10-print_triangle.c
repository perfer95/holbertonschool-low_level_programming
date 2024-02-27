/*
 * File: 10-print_triangle.c
 * Author: perfer
 */

#include "main.h"

/**
 * print_triangle - function that prints a triangle,
 * followed by a new line.
 * @size: size of the trinagle
 * return: void just print
 */
void print_triangle(int size)
{
	int i, j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j > (n - i))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
