#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @n: the integer whose absolute valie is to be computed
 *
 * Return: The abcolute value of an integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
