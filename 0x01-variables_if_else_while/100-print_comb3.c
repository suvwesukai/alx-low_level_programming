#include <stdio.h>

/**
 * main - Entry point
 *
 * Program that prints all possible different combinations of two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + i);
		}
		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
