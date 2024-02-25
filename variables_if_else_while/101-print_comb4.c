/*
 * File: 101-print_comb4.c
 * Author: perfer
 * Description: program that prints all
 * possible different combinations of three digits.
 */

#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints all possible combinations of three digits
 * Return: 0
 */
int main(void)
{
	int numHund, numDec, numUnit;

	for (numHund = 0; numHund < 8; numHund++)
	{
		for (numDec = numHund + 1; numDec < 9; numDec++)
		{
			for (numUnit = numDec + 1; numUnit < 10; numUnit++)
			{
				putchar(numHund + '0');
				putchar(numDec + '0');
				putchar(numUnit + '0');

				if (numHund != 7 || numDec != 8 || numUnit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
