/*
 * File: 100-print_comb3.c
 * Author: perfer
 * Description: program that prints all
 * possible different combinations of two digits.
 */

#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints all possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	int numDec = 0;
	int numUnit = 1;

	while (numDec < 9)
	{
		while (numUnit < 10)
		{
			putchar(numDec + '0');
			putchar(numUnit + '0');

			if (numDec != 8 || numUnit != 9)
			{
				putchar(',');
				putchar(' ');
			}
			numUnit++;
		}
		numUnit = 0;
		numUnit = numDec + 1;
	}
	putchar('\n');

	return (0);
}
