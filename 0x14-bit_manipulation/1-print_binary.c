#include "main.h"

/**
 * print_binary - prints the binary presentation of a number
 * @n: the number to converted
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i;

	int binary = sizeof(n) * 8;
	int bits = 1;

	for (i = binary - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			bits = 0;
			_putchar('1');
		}
		else if (!bits)
			_putchar('0');
	}
	if (bits)
		_putchar('0');
}
