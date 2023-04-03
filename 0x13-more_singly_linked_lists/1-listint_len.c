#include "lists.h"

/**
 * listint_len - shows the number of elements in a list
 * @h: pointer to head of the list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
