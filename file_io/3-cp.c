#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message and exits with the given code.
 * @code: The exit code.
 * @format: The error message format.
 * @arg: The argument to insert in the format string.
 */
void print_error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exits on error.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n", argv[0]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error(99, "Error: Can't write to %s\n", argv[2]);

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
			print_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (rd == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
