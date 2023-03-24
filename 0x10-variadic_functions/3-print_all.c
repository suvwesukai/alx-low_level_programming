#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *s, *separator = "";

	va_start(ap, format);

	if (format)
	{
		while (format && format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					else
						printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
