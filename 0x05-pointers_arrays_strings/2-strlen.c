#include "main.h"
/**
 * _strlen - returning the length of a string
 * @s: parameter to be called
 *
 * Return: always 0
 *
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
