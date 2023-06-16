#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_t *add_dnodeint_end - adds a new node at the end of a list
 * @head: poiner to a list
 * @n: number of nodes
 * Return: new
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	} else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		new_node->prev = current;
		current->next = new_node;
	}
	return (new_node);
}

