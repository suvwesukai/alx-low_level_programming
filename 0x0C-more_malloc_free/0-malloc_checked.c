#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: size of memory allocated
 *
 * Return: Pointer to the allocated memory
 * Exits with status value of 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
