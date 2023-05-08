#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned integer
 * @index: the index
 *
 * Return: 1 if it works, -1 if an errors occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, bit, chk;


	chk = 1;
	mask = ~(chk << index);
	bit = sizeof(unsigned long int) * 8;

	if (index >= bit)
		return (-1);
	*n &= mask;
	return (1);
}
