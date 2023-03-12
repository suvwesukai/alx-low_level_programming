#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements on the array
 */

void reverse_array(int *a, int n)
{
	int i, temp_value;

	for (i = 0; i < n / 2; i++)
	{
		temp_value = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp_value;
	}
}
