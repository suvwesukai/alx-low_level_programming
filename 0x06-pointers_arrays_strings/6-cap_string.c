#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	int i, j;
	char separator[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; separator[j] != '\0'; j++)
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
			{
				if (i == 0 || str[i - 1] == separator[j])
				{
					str[i] = str[i] - 32;
				}
			}
		}
	}
	return (str);

}
