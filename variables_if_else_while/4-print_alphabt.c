/*
 * File: 4-print_alphabt.c
 * Author: perfer
 * Description: Write a program that prints the alphabet
 * in lowercase, except q and e
 */

#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints the alphabet, except q and e
 * Return: 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}

		alph++;
	}

	putchar('\n');

	return (0);
}
