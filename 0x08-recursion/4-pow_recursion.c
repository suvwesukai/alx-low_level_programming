#include "main.h"

/**
 * _pow_recursion - computes the value of x reaised to the power of y
 * @x: base number
 * @y: power to raise the base to
 *
 * Return: value of x raised to the power of y,
 * -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
