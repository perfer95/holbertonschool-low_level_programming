#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that prints the number of arguments
 *passed into it.
 * @argc: counter
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", argc);
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	(void) argv;

	return (0);
}
