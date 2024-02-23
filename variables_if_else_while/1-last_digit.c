/*
 * File: 1-last_digit.c
 * Author: perfer
 * Description: The program generates a random number
 * and indicates if the last digit is greater than 5,
 * less than 6 or if it is equal to zero.
 */

#include <stdio>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function of the code
 * Description: Generate a random number and print
 * Return: 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit == 0)
	{
		printf("Last digit of %i is %i and is 0", n, lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, lastDigit);
	}
	else if (lastDigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5", n, lastDigit);
	}


	return (0);
}
