/*
 * File: 101-natural.c
 * Author: perfer
 * Description: program that computes and prints
 * the sum of all the multiples of 3 or 5 below
 * 1024 (excluded), followed by a new line.
 */

#include <stdio.h>

/**
 * main - main code
 * Description:  prints the sum
 * Return: void
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}

	printf("%i\n", sum);

	return (0);
}
