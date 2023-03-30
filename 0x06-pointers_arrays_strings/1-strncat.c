#include "main.h"
/**
 * *_strncat - concatenates upto n characters from the source
 *string to the end of the destination
 *@dest: a string
 *@src: a string not to be terminated
 *@n: number of chars to be appended
 *
 * Return: dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen;
	int srclen;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];
	return (dest);
}

