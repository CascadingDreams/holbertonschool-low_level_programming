#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message and exits the program.
 * @code: The exit code to return.
 * @format: The format string for the error message.
 * @arg: The argument (file name) for the error message.
 */
void print_error(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 * @fd_value: The value of the file descriptor (used for error reporting).
 */
void close_file(int fd, int fd_value)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
		exit(100);
	}
}

/**
 * copy_file - Copies the content of one file to another.
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 * @argv: The command-line arguments.
 */
void copy_file(int fd_from, int fd_to, char *argv[])
{
	int rd, wr;
	char buffer[BUFFER_SIZE];

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			close_file(fd_from, fd_from);
			close_file(fd_to, fd_to);
			print_error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (rd == -1)
	{
		close_file(fd_from, fd_from);
		close_file(fd_to, fd_to);
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: The command-line arguments.
 *
 * Return: 0 on success, or exit with an error code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n", argv[0]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from, fd_from);
		print_error(99, "Error: Can't write to %s\n", argv[2]);
	}

	copy_file(fd_from, fd_to, argv);

	close_file(fd_from, fd_from);
	close_file(fd_to, fd_to);

	return (0);
}
