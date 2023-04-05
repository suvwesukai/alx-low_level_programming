#include "lists.h"

/**
 * sum_listint - sums all data of linked list
 * @head: pointer to head of linked list
 *
 * Return: sum of all data(n),
 * 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
