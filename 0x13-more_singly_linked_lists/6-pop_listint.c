#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list
 * @head: pointer to the head of a list
 *
 * Return: the head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	temp = (*head);
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
