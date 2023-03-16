#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: if str is NULL or insufficient memory is available - NULL.
 * Otherwise - A pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i, len;
	char *duplicate_str;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	duplicate_str = (char *) malloc((len + 1) * sizeof(char));
	if (duplicate_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		duplicate_str[i] = str[i];
	}
	return (duplicate_str);
}
