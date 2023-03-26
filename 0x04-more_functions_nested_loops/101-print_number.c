#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 *
 * Return: Nothing. 
 */
void print_number(int n)
{
	unsigned int num, count, digit;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	count = 1;

	while (num / count >= 10)
	{
		count *= 10;
	}
	while (count > 0)
	{
		digit = num / count;
		_putchar(digit + '0');
		num %= count;
		count /= 10;
	}	
}
