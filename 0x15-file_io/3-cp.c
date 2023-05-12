#include "main.h"
/**
 * file_from - open a file for reading
 * @path: path of the file to opne
 * Return: the file descriptor on success, exit on failure
 */
int file_from(const char *path)
{
	int from_fd;

	from_fd = open(path, O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", path);
		exit(98);
	}
	return (from_fd);
}

/**
 * file_to - opens a file for writing
 * @path: path of the file to open
 * Return: the file descriptor on success, exit on failure
 */
int file_to(const char *path)
{
	int to_fd;

	to_fd = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", path);
		exit(99);
	}
	return (to_fd);
}

/**
 * copy_file - copies the content of a file to another file
 * @copy_from: path of the file to read from
 * @copy_to: path of the file to write to
 * Return: 0 on success, -1 on failure
 */
int copy_file(const char *copy_from, const char *copy_to)
{
	int from_fd, to_fd, read_cont, write_cont;
	char buffer[1024];


	from_fd = file_from(copy_from);
	to_fd = file_to(copy_to);

	read_cont = read(from_fd, buffer, sizeof(buffer));
	while (read_cont > 0)
	{
		write_cont = write(to_fd, buffer, read_cont);
		if (write_cont == -1 || write_cont != read_cont)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", copy_to);
			exit(99);
		}
	}
	if (read_cont == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", copy_from);
		exit(98);
	}
	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	return (0);
}

/**
 * main - entry point on the program
 * @argc: number of arguments passed
 * @argv: name of file
 * Return: 0 on success, exit on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (copy_file(argv[1], argv[2]) == -1)
	{
		exit(100);
	}

	return (0);
}
