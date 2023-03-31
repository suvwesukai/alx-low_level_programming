#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of the even-valued terms
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, num1, num2, next_value;
	long int sum;

	num1 = 1;
	num2 = 2;
	sum = 0;

	for (i = 1; num2 <= 4000000; i++)
	{
		if (num2 % 2 == 0)
		{
			sum += num2;
		}

		next_value = num1 + num2;
		num1 = num2;
		num2 = next_value;
	}
	printf("%ld\n", sum);
	return (0);
}
