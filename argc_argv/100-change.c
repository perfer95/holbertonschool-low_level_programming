#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: counter
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, coins = 0;
	int change[5] = {25, 10, 5, 2, 1};
	int money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc <= 0)
	{
		printf("0\n")
	}
	else
	{
		money = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			coins = coins + (money / change[0]);
			money = money % change[0];
		}
	}
	printf("%d\n", coins);
	return (0);
}
