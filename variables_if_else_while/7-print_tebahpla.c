/*
 * File: 7-print_tebahpla.c
 * Author: perfer
 * Description: Program that prints the lowercase
 * alphabet in reverse, followed by a new line.
 */

#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints the alphabet in inverse
 * Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
