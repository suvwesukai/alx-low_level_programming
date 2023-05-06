#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: pointer to converted binary number
 * @index: the index of bit
 *
 * Return: returns the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index >= sizeof(n) * 8)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
