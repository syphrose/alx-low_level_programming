#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees memory from a list
 * @head: pointer node of a list
 *
 * Return: void
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

