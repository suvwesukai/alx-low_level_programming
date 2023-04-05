#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: pointer to head of a linked list
 * @index: index of the node starting at 0
 *
 * Return: nth node of a linked list,
 * NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *value;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	value = head;
	while (value != NULL && count < index)
	{
		value = value->next;
		count++;
	}
	if (value == NULL)
		return (NULL);
	else
		return (value);
}
