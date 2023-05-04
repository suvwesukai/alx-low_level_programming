#include "main.h"

/**
 * _strlen - Give the length of a string
 * @b: The string to get the length of
 *
 * Return: The length of a string
 */
int _strlen(const char *b)
{
	int length = 0;

	while (*b != '\0')
	{
		length++;
		b++;
	}
	return (length);
}

/**
 * _isdigit - check for a digit
 * @c: digit to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _isbinary - check if chars in the string is 0 or 1
 * @b: pointer to string to be checked
 *
 * Return: integer
 */
int _isbinary(const char *b)
{
	int length, i;

	length = _strlen(b);

	for (i = 0; i < length; i++)
	{
		if (!_isdigit(b[i]) || (b[i] != '0' && b[i] != '1'))
			return (0);
	}
	return (1);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: return converted number,
 * or 0 if b is NULL,or
 * if there is  one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;

	unsigned int decimal = 0;
	int power_of_two = 1;
	int binary_len;

	if (b == NULL)
		return (0);

	binary_len = _strlen(b);

	/* loop through binary string from left to right */
	for (i = binary_len - 1; i >= 0; i--)
	{
		if (!(_isbinary(b)))
			return (0);
		if (b[i] == '1')
		{
			decimal += power_of_two;
		}
		power_of_two *= 2;
	}
	return (decimal);
}
