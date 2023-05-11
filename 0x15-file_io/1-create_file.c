#include "main.h"

/**
 * _strlen - Give the length of the string
 * @s: the string to get the length of
 *
 * Return: The length of a string
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * create_file - Function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t content;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		content = write(fd, text_content, len);

		if (content == -1 || (size_t)content != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
