#include "main.h"
/**
 * rot13 - substitution cipher that replaces a letter with the 13th letter,
 * after it in the alphabet
 * @s: the input string to be encoded
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char *upper_half = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *lower_half = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == upper_half[j])
			{
				s[i] = lower_half[j];
				break;
			}
		}
	}
	return (s);
}
