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
	char *aaa;
	int i, c = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;
	aaa = malloc(sizeof(char) * (i * c));

	if (aaa == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		aaa[c] = str[c];
	return (aaa);
}
