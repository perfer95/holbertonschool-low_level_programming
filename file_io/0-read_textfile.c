#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file name
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f = 0, r = 0, o = 0;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
	{
		free(buf);
		return (0);
	}

	r = read(f, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}

	o = write(STDOUT_FILENO, buf, r);
	if (o == -1 || o != r)
	{
		free(buf);
		return (0);
	}

	close(f);
	free(buf);
	return (o);
}
