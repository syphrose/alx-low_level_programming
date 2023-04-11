#include "main.h"
#include <stdlib.h>
/**
 * create_array - an array of chars, and initializes with a specific char
 * @c: array of chars
 * @size: size of array
 * Return: NULL or a pointer
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)

		arr[i] = c;

	return (arr);
}
