#include <unistd.h>

/**
 * _putchar - writes a character to stdout 
 * @c: The character to write.
 *
 * Return: On success, returns the number of bytes written (1).
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}

