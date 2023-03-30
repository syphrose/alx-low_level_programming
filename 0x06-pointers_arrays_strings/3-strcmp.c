#include "main.h"
/**
 * _strcmp - comparing two strings
 * @s1: String one to be copmared
 * @s2: Second string to compare with the first one
 *
 * Return: 0 (success)
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])

		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] > s2[i])
				return (s2[i] - s1[i]);
		}
		else
			return (0);
		return (0);
	}
}
