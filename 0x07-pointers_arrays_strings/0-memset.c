#include "main.h"
#include <stdio.h>
/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with  the constant byte b
 * @n: first bytes to be filled by the function
 * @s: memory area to be pointed
 * @b: constant byte
 *
 * Return: a pointer to the memory area s
 *
 */
char *_memset(char *s, char b, unsigned int n)
	{
	unsigned int h;

	for (h = 0; h < n; h++)
	{
		s[h] = b;
	}
	return (s);
	}
