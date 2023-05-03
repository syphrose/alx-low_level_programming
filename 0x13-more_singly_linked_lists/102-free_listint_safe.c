#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @f: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **f)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (f || !*f)
		return (0);

	while (*f)
	{
		diff = *f - (*f)->next;
		if (diff > 0)
		{
			temp = (*f)->next;
			free(*f);
			*f = temp;
			len++;
		}
		else
		{
			free(*f);
			*f = NULL;
			len++;
			break;
		}
	}

	*f = NULL;

	return (len);
}
