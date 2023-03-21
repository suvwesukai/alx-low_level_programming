#include <stdio.h>

/**
 * main - computes and prints the sum of all
 * the multiples of 3 or 5 below 1024.
 *
 * Return: sum of numbers
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 || i % 5)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
