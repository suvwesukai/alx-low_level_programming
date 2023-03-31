#include <stdio.h>
#include "main.h"

/**
 * main - Prints the first Fibonacci numbbers,
 * starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, num1, num2, sum;

	num1 = 1;
	num2 = 2;

	printf("%ld, %ld, ", num1, num2);
	for (i = 3; i <= 50; i++)
	{
		sum = num1 + num2;
		printf("%ld", sum);
		if (i < 50)
			printf(", ");
		num1 = num2;
		num2 = sum;
	}
	printf("\n");
	return (0);
}
