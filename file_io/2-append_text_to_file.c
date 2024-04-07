#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file name
 * @text_content: text to add
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, f = 0, o = 0;

	if (filename != NULL)
		f = open(filename, O_WRONLY | O_APPEND);
	else
		return (-1);

	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	else
	{
		return (1);
	}

	o = write(f, text_content, i);

	if (o == -1)
		return (-1);

	close(f);
	return (1);
}
