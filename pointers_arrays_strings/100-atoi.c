#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: string to convert
 * Return: int
 */
int _atoi(char *s)
{
	int i;
	unsigned int num = 0;
	int sign = 1;
	int sysNum = 10;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (s[i] - '0') + (num * sysNum);

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}

	}
	return (num * sign);
}
