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
	else
	{
		money = atoi(argv[1]);

		if (money < 0)
		{
			printf("0\n");
			return (0);
		}

		for (i = 0; i < 5; i++)
		{
			coins = coins + (money / change[i]);
			money = money % change[i];
		}
		printf("%d\n", coins);
	}
	return (0);
}
