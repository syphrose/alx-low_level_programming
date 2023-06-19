#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: A double pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev_node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}

	temp = *head;
	while (index > 0)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		index--;
	}

	if (temp == NULL)
		return (-1);

	prev_node = temp->prev;
	prev_node->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = prev_node;

	free(temp);
	return (1);
}
