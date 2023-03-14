#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: maximum number of bytes from src
 *
 * Return:Pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ret = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest++ = src[i];
	}
	*dest = '\0';

	return (ret);
}
