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
				if (j > (size - i))
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
