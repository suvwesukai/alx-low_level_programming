#include "main.h"

/**
 * _strspn - Gets the length of a prfeix substring
 * @s: pointer to the string to be searched
 * @accept: set of characters to be searched for
 *
 * Return: number of bytes in the initial segement of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (count);
}
