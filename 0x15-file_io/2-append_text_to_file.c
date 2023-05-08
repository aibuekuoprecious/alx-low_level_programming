#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	while (str && *(str + len))
		len++;

	return (len);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = write(fd, text_content, _strlen(text_content));
		if (len == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
