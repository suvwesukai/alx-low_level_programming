#include "main.h"

/**
 * leet - encodes a string
 * @str: string to encode
 *
 * Return: encode string
 */

char *leet(char *str)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}
