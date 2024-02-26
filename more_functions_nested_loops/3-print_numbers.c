/*
 * File: 3-print_numbers.c
 * Author: perfer
 */

#include "main.h"

/**
 * print_numbers - print the number 0 to 9
 * return: void just print
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
