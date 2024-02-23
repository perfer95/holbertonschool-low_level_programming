/*
 * File: 9-print_comb.c
 * Author: perfer
 * Description: Program that prints all possible
 * combinations of single-digit numbers.
 */

#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int numComb = 0;

	while (numComb <= 9)
	{
		putchar((char)numComb);

		if (numComb != 9)
		{
			putchar(',');
			putchar(' ');
		}
		numComb++;
	}

	putchar('\n');

	return (0);
}
