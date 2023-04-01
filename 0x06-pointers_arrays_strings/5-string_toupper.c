#include "main.h"
/**
 * string_toupper - changing all lowercase letters
 * of a string to uppercase
 * @x: pointer to the string
 *
 * Return: str
 *
 */
char *string_toupper(char *)
{
	int i;
	int x;

	for (i = 0; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'x' && str[i] <= 'x')
			str[i] = str[i] = 32;
	}
	return (str);
}
