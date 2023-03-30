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
	int i = 0;

	while (n && (dest[i] = src[i]))
		++i, --n;
	while (n-- > 0)
		dest[i++] = '\0';
	return (dest);
}
