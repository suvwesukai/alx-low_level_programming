#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: number of times table to be printed
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (result <= 9)
			{
				if (!(j == 0))
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
			if (result > 9 && result <= 99)
			{
				if (!(j == 0))
					_putchar(' ');
				_putchar((result / 100) + '0');
				_putchar((result % 10) + '0');
			}
			if (result >= 100)
			{
				_putchar((result / 100) + '0');
				_putchar((result / 10) % 10 + '0');
				_putchar((result % 10) + '0');
			}
			if (!(j == n))
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
