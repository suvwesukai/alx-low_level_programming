#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 0 if two strings are equal, less than 0 if s2 is greater than s1
 * greater than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	/* iterate through the strings and compare each character */
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] == '\0')
	{
		return (-s2[i]);
	}
	else
	{
		return (s1[i]);
	}
}
