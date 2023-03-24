#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers 
 * @a: first integer
 * @b: second integer
 *
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: First integer
 * @b: second integer
 *
 * Return: Result of division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the modulo of two integers
 * @a: frist integer
 * @b: second integer
 *
 * Return: Remainder of the division of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
