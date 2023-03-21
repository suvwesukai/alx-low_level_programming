#include "main.h"

/**
 * main - program that prints _putchar
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
