/*
 * File: 101-quote.c
 * Author: perfer
 * Description: program that prints exactly and
 * that piece of art is useful" - Dora Korpar, 2015-10-19
 * , followed by a new line, to the standard error.
 */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - main function of the code
 * Description: Prints a message ussing write
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
