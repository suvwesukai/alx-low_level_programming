#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - Prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *s;

	va_start(ap, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (!s)
					s = "(nil)";
				else
					printf("%s", s);
				break;
			default:
				break;
		}
			if (format[i + 1] && strchr("cifs", format[i]))
				printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
