#include <stdio.h>

/**
 * main - Entry point
 * Program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	putchar('0');
	for (int i = 1; i < 10; i++)
	{
		putchar(',');
		putchar(' ');
		putchar('0' + i);
	}
	return (0);
}
