/*
 * File: 103-fibonacci.c
 * Author: perfer
 * Description: write a program that finds and prints
 * the sum of the even-valued terms, followed by a new line.
 */

#include <stdio.h>

/**
 * main - main code
 * Description:  print the sum of pairs
 * Return: void
 */
int main(void)
{
	unsigned long sum = 0;
	unsigned long fn;
	unsigned long n1 = 0;
	unsigned long n2 = 1;

	while (fn <= 4000000)
	{
		fn = n1 + n2;

		if ((fn % 2) == 0)
		{
			sum = sum + fn;
		}

		n1 = n2;
		n2 = fn;
	}
	printf("%ld\n", sum);
	return (0);
}
