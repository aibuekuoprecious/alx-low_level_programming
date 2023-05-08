#include "main.h"

/**
 *read_textfile - Reads a text file and prints its content to POSIX stdout
 *@filename: A pointer to the name of the file to be read
 *@letters: The maximum number of letters to be read and printed
 *
 * Return: On success, returns the number of bytes read and printed
 * On failure, returns 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(letters);
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);

	return (wr);
}
