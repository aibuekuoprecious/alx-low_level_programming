#include "main.h"

/**
 * check97 - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_error - checks for errors and prints a message if necessary
 * @check: value returned by the function being checked
 * @filename: name of the file being checked
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check_error(ssize_t check, char *filename, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read/write from/to file %s\n", filename);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check_close - checks that file descriptors were closed properly
 * @check: value returned by the function being checked
 * @fd: file descriptor
 *
 * Return: void
 */
void check_close(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);

	fd_from = open(argv[1], O_RDONLY);
	check_error(fd_from, argv[1], -1, -1);

	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check_error(fd_to, argv[2], fd_from, -1);

	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		check_error(lenr, argv[1], fd_from, fd_to);

		lenw = write(fd_to, buffer, lenr);
		check_error(lenw, argv[2], fd_from, fd_to);

		if (lenw != lenr)
			lenw = -1;
	}

	close_to = close(fd_to);
	check_close(close_to, fd_to);

	close_from = close(fd_from);
	check_close(close_from, fd_from);

	return (0);
}

