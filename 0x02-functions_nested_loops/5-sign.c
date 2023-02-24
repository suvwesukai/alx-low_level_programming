#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: number to be checked
 *
 * Return: 1 and print + if n is greater than 0,
 * -1 if n is less than 0 and 0 if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
