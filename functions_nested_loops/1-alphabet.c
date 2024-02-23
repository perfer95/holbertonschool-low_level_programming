/*
 * File: 1-alphabet.c
 * Author: perfer
 * Description: function that prints the alphabet,
 * in lowercase, followed by a new line.
 */

#include "main.h"

/**
 * print_alphabet - printer
 * Description: prints alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
