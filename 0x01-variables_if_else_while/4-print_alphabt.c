#include <stdio.h>

/**
 * main - Entry point
 *
 * Program that prints the alphabet in lowercase
 * except q and e
 *
 * Return: Always 0
 */

int main(void)
{
	char lowercase = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
		}
		lowecase++;
	}
	putchar('\n');
	return (0);
}
