/*
 * File: 0-positive_or_negative.c
 * Author: perfer
 * Descirpiton: This program will assign a random number
 * to the variable n each time it is executed. Complete
 * the source code in order to print whether the number
 * stored in the variable n is positive or negative.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - main function of the code
 *
 * Descirpiton: Generate a random number and clasify
 * as positive, negative or zero.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);

	return (0);
}
