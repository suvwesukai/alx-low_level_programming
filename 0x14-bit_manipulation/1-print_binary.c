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

	int binary = 0;
	unsigned long int bits = 1;

	if (n == 0)
		_putchar('0');

	while (bits <= n)
	{
		bits <<= 1;
		binary++;
	}

	for (i = binary - 1; i >= 0; i--)
	{
		binary = (n >> i) & 1;
		_putchar(binary + '0');
	}
}
