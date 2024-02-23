/*
 * File: 2-print_alphabet_x10.c
 * Author: perfer
 * Description: function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 */

#include "main.h"

/**
 * print_alphabet_x10 - printer
 * Description: prints alphabet in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		letter = 'a';
		i++;
	}
}
