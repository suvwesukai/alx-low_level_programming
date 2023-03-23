#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Sum up parameters
 * @n: number of parameters
 *
 * Return: the sum of all parameters,
 * 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum;

	va_start(num, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
