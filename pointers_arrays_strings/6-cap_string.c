#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: string to check
 * Return: string
 */
char *cap_string(char *str)
{
	char sp[14] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};
	int i = 0;
	int j;
	int flag = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
		{
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; sp[j] != '\0'; j++)
			{
				if (sp[j] == str[i - 1])
				{
					flag = 1;
				}
			}
			if (flag == 1)
			{
				str[i] = str[i] - 32;
				flag = 0;
			}
		}
		i++;
	}
	return (str);
}
