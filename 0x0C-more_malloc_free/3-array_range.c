#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: Pointer to the newly created array
 * if min > max or if malloc fails - NULL
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
	{
		return (NULL);
	}

	/* allocate memory */
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
