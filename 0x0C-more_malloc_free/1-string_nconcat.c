#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * @n: maximum number of bytes to use from s2.
 *
 * Return: if concatenation fails - NULL
 * Otherwise - Pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_nstring;
	unsigned int len1, len2, total_len, i, j;

	/* check if strings are empty */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* get length of strings */
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		if (len2 >= n)
		{
			len2 = n;
			break;
		}
		if (n >= len2)
		{
			len2++;
		}
	}
	total_len = len1 + len2 + 1;

	concat_nstring = malloc(sizeof(char) * total_len);
	if (concat_nstring == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat_nstring[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat_nstring[i + j] = s2[j];
	}
	concat_nstring[i + j] = '\0';

	return (concat_nstring);

}
