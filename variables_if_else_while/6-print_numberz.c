/*
 * File: 6-print_numberz.c
 * Author: perfer
 * Description: Program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * using char and putchar.
 */

#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints numbers base 10 (0 to 9)
 * Return: 0
 */
int main(void)
{
	char b10 = '0';

	while (b10 <= '9')
	{
		putchar(b10);
		b10++;
	}

	putchar('\n');

	return (0);
}
