#include "main.h"
/**
 * *_strncpy - a function that copies a string
 * @dest: destination string
 * @src: a source string
 * @n: number of chars to be copied
 *
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
