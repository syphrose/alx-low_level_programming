#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, that contains a copy of str as a par
 * @str: a string character
 * Return: NULL  if string is NULL
 *
 */
char *_strdup(char *str)
{
	char *copy;
	int i, c = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;
	copy = malloc(sizeof(char) * (i * c));

	if (copy == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		copy[c] = str[c];
	return (copy);
}
