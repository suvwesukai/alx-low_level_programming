#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array to be checked
 * @size: number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: index of the first element,
 * -1, if no element matches or
 * size is less than or equal to 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
