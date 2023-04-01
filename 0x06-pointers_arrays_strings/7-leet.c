#include "main.h"
/**
 * leet - encoding a string
 * @str: a string
 * Return: str
 *
 */
char *leet(char *str)
{
	int i, h;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (h = 0; a[h] != '\0'; h++)
		{
			if (str[i] == a[h])
				str[i] = b[h];
		}
	}
	return (str);
}
