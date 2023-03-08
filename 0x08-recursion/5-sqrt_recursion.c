#include "main.h"

/**
 * calculate_sqrt - compute the natural square root of a number
 * @n: The number  to find the square root of
 * @i: no. for current guess for the square root
 *
 * Return: natural square root of n
 * -1, if n does not have a natural square root
 */

int calculate_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (calculate_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: The number  to find the square root of
 *
 * Return: natural square root of n
 * -1, if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (calculate_sqrt(n, 1));
}
