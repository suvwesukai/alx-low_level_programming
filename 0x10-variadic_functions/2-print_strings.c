#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	const char *string;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(str, const char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if ((i < n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
