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
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, content;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		content = write(fd, text_content, len);
		if (content == -1 || content != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
