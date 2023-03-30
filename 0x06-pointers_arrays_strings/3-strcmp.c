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
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
