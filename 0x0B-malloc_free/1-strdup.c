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
	char *nstr;
	int i, c;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;
	nstr = malloc(sizeof(char) * (i + 1));

	if (nstr == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
		nstr[c] = str[c];
	return (nstr);
}
