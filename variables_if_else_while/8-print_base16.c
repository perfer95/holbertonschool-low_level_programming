/*
 * File: 8-print_base16.c
 * Author: perfer
 * Description: Program that prints all the numbers
 * of base 16 in lowercase, followed by a new line.
 */

#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char numberPart = '0';
	char letterPart = 'a';

	while (numberPart <= '9')
	{
		putchar(numberPart);
		numberPart++;
	}

	while (letterPart <= 'f')
	{
		putchar(letterPart);
		letterPart++;
	}

	putchar('\n');

	return (0);
}
