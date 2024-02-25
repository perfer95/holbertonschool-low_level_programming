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
	int numHund = 0;
	int numDec = 1;
	int numUnit = 2;

	while (numHund < 8)
	{
		while (numDec < 9)
		{
			while (numUnit < 10)
			{
				putchar(numHund + '0');
				putchar(numDec + '0');
				putchar(numUnit + '0');

				if (numHund != 7 || numDec != 8 || numUnit != 9)
				{
					putchar(',');
					putchar(' ');
				}
				numUnit++;
			}
			numDec++;
			numUnit = numDec + 1;
			if (numUnit == 10)
			{
				numUnit = 9;
			}
		}
		numHund++;
		numDec = numHund + 1;
		if (numDec == 9)
		{
			numDec = 8;
		}
	}
	putchar('\n');
	return (0);
}
