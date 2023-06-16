#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: counts fron the head to count
 *
 * Return: count
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
			node_count++;
	}
	return (node_count);
}
