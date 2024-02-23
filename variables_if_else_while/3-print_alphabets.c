/*
 * File: 2-print_alphabet.c
 * Author: perfer
 * Description: program that prints the alphabet in
 * lowercase, and then in uppercase, followed by a new line.
 */

#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints the alphabet in lowercase and uppercase.
 * Return: 0
 */
int main(void)
{
	char lowAlph = 'a';
	char upperAlph = 'A';

	while (lowAlph <= 'z')
	{
		putchar(lowAlph);
		first++;
	}

	while (upperAlph <= 'Z')
	{
		putchar(upperAlph);
		first++;
	}

	putchar('\n');

	return (0);
}
