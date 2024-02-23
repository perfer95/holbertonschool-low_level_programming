/*
 * File: 5-print_numbers.c
 * Author: perfer
 * Description: Program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 */

#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints numbers base 10 (0 to 9)
 * Return: 0
 */
int main(void)
{
	int b10 = 0;

	while (b10 <= 9)
	{
		printf("%i", b10);
		b10++;
	}

	printf("\n");

	return (0);
}
