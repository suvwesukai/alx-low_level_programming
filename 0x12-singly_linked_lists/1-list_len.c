#include "lists.h"

/**
 * list_len - Show the number of elements of a list
 * @h: a linked list
 *
 * Return: The number of elements cin a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

