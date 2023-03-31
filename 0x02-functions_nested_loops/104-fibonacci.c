#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long num1, num2, sum;

	num1 = 1;
	num2 = 2;

	printf("%lu, %lu, ", num1, num2);

	for (count = 2; count < 98; count++)
	{
		sum = num1 + num2;
		printf("%lu, ", sum);
		num1 = num2;
		num2 = sum;
	}
	sum = num1 + num2;
	printf("%lu\n", sum);
	return (0);
}
