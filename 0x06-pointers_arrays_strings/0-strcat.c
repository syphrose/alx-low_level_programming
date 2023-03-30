# include "main.h"
/**
 * *_strcat - a func to append the src str to the dest
 * str overwriting the terminal null byte at the end of the
 * dest then adds it again
 * @dest: a string that src is appended to
 * @src: a string to be appended on dest
 *
 * Return: dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen +i] = src[i];
	return (dest);
}
