#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: Pointer to a string
 * @c: Character to locate
 *
 * Return: Pointer to the first occurence of the character c in the string s,
 * NULL, if the character is not found
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}

	return (0);
}
