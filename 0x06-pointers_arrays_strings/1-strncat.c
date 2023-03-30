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
	int length_of_str, z;
/* z is a counter for n bytes of src to be concatenated */
/* length_of_str = length of destination string */

	length_of_str = 0;
	while (dest[length_of_str] != '\0')
	{
		length_of_str++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++)
		length_of_str++;
	{
		dest[length_of_str] = src[z];
	}
	dest[length_of_str] = '\0';
		return (dest);
}
