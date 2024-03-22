#include "3-calc.h"

/**
 * main - main fuction
 * @argc: counter of arguments
 * @argv: string
 * Return: void just print
 */
int main(int argc, char *argv[])
{
	int (*opaux)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && *(argv[3]) == '0')
	{
		printf("Error\n");
		exit(100);
	}
	opaux = get_op_func(argv[2]);
	if (opaux == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opaux(atoi(argv[1]), atoi(argv[3])));
}


