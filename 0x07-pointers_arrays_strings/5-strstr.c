#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: Pointer to the beginning of located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while ((*haystack_ptr == *needle_ptr) && (*needle_ptr != '\0'))
		{
			haystack_ptr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
