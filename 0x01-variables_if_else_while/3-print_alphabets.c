#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints the alphabet in lowercase,
 * and then in uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char lowercase = 'a';
	char uppercae = 'A';
	int i;

	/* print lowercase alphabets */
	for (i = 0; i < 26; i++)
	{
		putchar(lowercase);
		lowercase++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');
	return (0);
}
