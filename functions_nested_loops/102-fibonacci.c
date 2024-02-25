/*
 * File: 102-fibonacci.c
 * Author: perfer
 * Description: Write a program that prints the first
 * 50 Fibonacci numbers, starting with 1 and 2, followed
 * by a new line.
 */

#include <stdio.h>

/**
 * main - main code
 * Description:  prints first 50 Fibonacci numbers
 * Return: void
 */
int main(void)
{
	int i;
	unsigned long fn;
	unsigned long n1 = 0;
	unsigned long n2 = 1;

	for (i = 0; i < 50; i++)
	{
		fn = n1 + n2;
		printf("%lu", fn);

		n1 = n2;
		n2 = fn;

		if (i != 49 )
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
