#include <stddef.h>
#include "lists.h"

/**
 * dlistint_t *get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer
 * @index: integer
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		head = head->next;
		count++;
	}
	return (NULL);
}
