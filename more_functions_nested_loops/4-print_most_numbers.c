/*
 * File: 4-print_most_numbers.c
 * Author: perfer
 */

#include "main.h"

/**
 * print_most_numbers - print the number 0 to 9 except 2 and 4
 * return: void just print
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
