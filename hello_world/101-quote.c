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
	char *message = "and that piece of art isuseful\" - " +
		"Dora Korpar, 2015-10-19\n";

	write(2, message, strlen(message));

	return (1);
}
