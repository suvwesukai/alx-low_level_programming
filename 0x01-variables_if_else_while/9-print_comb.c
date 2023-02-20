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

	putchar('0');
	for (i = 1; i < 10; i++)
	{
		putchar(',' ' ');
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
