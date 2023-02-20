#include <stdio.h>

/**
 * main - Entry point
 * Program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(',');
		putchar(' ');
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
