#include "function_pointers.h"

/**
 * array_iterator - Prints each elements in an array
 * @array: array
 * @size: size of the array
 * @action: Pointer to the function you need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
