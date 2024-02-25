/*
 * File: 102-print_comb5.c
 * Author: perfer
 * Description: program that prints all
 * possible different combinations of two two-digit
 */

#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints all possible combinations (no repeat)
 * Return: 0
 */
int main(void)
{
	int dec, unit;

	for (dec = 0; dec <= 98; dec++)
	{
		for (unit = dec + 1; unit <= 99; unit++)
		{
			putchar((dec / 10) + '0');
			putchar((dec % 10) + '0');
			putchar(' ');
			putchar((unit / 10) + '0');
			putchar((unit % 10) + '0');

			if (dec != 98 || unit != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
