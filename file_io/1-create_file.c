#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file name
 * @text_content: text to add
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, f = 0, o = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	else
	{
		close(f);
		return (1);
	}

	o = write(f, text_content, i);

	if (o == -1 || o != i)
		return (-1);

	close(f);
	return (1);
}
