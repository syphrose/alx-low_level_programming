#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - locates the first occurrence in the string
 * s of any of the bytes in the string accept
 * @s: the string to be searched
 * @accept: the string to search
 *
 * Return: s otherwise NULL if no byte is found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *p_s = s;
	char *p_accept;

	for (; *p_s != '\0'; p_s++)
	{
		p_accept = accept;

		for (; *p_accept != '\0'; p_accept++)
		{
			if (*p_s == *p_accept)
			{
				return (p_s);
			}
		}
	}
	return (NULL);
}
