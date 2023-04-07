#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strncat - concatenates n characters of the source string to the
 * end of the destination string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to be concatenated
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
