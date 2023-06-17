#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_t *get_dnodeint_at_index - returns the nth node of a
 * dlistint_t linked list
 * main - Create a sample doubly linked list
 * @head: pointer
 * @index: integers not signed
 * Return: NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
int main(void)
{
	dlistint_t *head = NULL;
	dlistint_t *node1 = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *node2 = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *node3 = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *node4 = (dlistint_t *)malloc(sizeof(dlistint_t));

	node1->n = 1;
	node1->prev = NULL;
	node1->next = node2;

	node2->n = 2;
	node2->prev = node1;
	node2->next = node3;

	node3->n = 3;
	node3->prev = node2;
	node3->next = node4;

	node4->n = 4;
	node4->prev = node3;
	node4->next = NULL;

	head = node1;

	dlistint_t *result = get_dnodeint_at_index(head, 2);

	if result != NULL
	{
		printf("The value of the third node is: %d\n", result->n);
	} else
	{
	    printf("Node not found.\n");
	}
	free(node1);
	free(node2);
	free(node3);
	free(node4);

	return (0);
}

