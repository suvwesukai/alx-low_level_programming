#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: digit to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= 0)
	{
		return (1);
	}
	else
		return (0);
}
