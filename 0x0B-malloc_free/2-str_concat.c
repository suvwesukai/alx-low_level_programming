#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: if concantenation fails - NULL.
 * Otherwise - A pointer to concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len1, len2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	concat_str = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat_str[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		concat_str[i + j] = s2[j];
	}

	return (concat_str);
}
