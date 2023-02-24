#include "main.h"

/**
 * print_alphabet - print 10times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char c;
 	int i = 0;
	
	while (i < 10)	
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
