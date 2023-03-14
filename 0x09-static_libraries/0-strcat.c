#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @src: pointer to source string
 * @dest: pointer to destination string
 *
 * Return: pointer to resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (ret);
}
