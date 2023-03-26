#include "main.h"
#include <stdio.h>

/**
 * largest_prime_factor - finds the largest prime of a given number
 * @n: the number to check
 *
 * Return: the largest prime factor of n
 */
unsigned long int largest_prime_factor(unsigned long int n)
{
	unsigned long int i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	return (i);
}

/**
 * main - Print the largest prime factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int large_num = largest_prime_factor(n);


	printf("%ld\n", large_num);
	return (0);
}
