/*
 * File: 2-print_alphabet.c
 * Author: perfer
 * Description: Write a program that prints the alphabet
 * in lowercase, followed by a new line.
 */

#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints the alphabet
 * Return: 0
 */
int main(void)
{
	char first = 'a';

	while (first <= 'z')
	{
		putchar(first);
		first++;
	}

	putchar('\n');

	return (0);
}
