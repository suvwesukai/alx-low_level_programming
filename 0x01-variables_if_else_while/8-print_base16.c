#include <stdio.h>

/**
 * main- Entry point
 *
 * a program that prints all the numbers of
 * base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char hex[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}
