#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints all single digit numbers of
 * base 10 starting from 0
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
