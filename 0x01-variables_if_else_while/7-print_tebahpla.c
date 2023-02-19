#include <stdio.h>

/**
 * main -Entry point
 *
 * program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char rev_lowercase = 'z';
	int i;

	for (i = 0; i < 26; i--)
	{
		putchar(rev_lowercase);
		rev_lowercase--;
	}
	putchar('\n');
	return (0);
}
