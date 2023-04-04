#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head of list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *new_node;

	temp = *head;
	while (temp != NULL)
	{
		new_node = temp->next;
		free(temp);
		temp = new_node;
	}
	/* *head = NULL; */
}
