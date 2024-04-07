#include "main.h"

/**
 * error_print - function to print problem
 * @s: indicator
 * @c: char
 * Return: empty just print
 */
void error_print(int s, char *c)
{
	if (s == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", c);
		exit(98);
	}
	if (s == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", c);
		exit(99);
	}
}

/**
 * close_f - function to print problem
 * @s: indicator
 * @s2: type var
 * Return: empty just print
 */
void close_f(int s, int s2)
{
	if (s == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s2);
		exit(100);
	}
	if (s == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s2);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file.
 * @argc: counter
 * @argv: array
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	int t = 0, f = 0, t_c = 0, f_c = 1024;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f = open(argv[1], O_RDONLY);
	if (f == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (t == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (f_c == 1024)
	{
		f_c = read(f, buf, 1024);
		if (f_c == -1)
			error_print(1, argv[1]);
		t_c = write(t, buf, f_c);
		if (t_c == -1)
			error_print(2, argv[2]);
	}
	if (close(f)  == -1)
	{
		close_f(1, f);
	if (close(t) == -1)
		close_f(2, t);
	return (0);
}
