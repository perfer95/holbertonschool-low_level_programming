#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  program that multiplies two numbers
 * @argc: counter
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d", atoi(argv[1]) * atoi(arg[2]));
	}

	return (0);
}
