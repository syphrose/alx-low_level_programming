#include "main.h"
/**
 * rot13 - substitution cipher that replaces a letter,
 * with the 13th letter after it in the alphabet
 * @s: pointer to the string
 *
 * Return: s
 *
 */
char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; (s[i] >= 'a' && s[i] <= 'z') ||
			(s[i] >= 'A' && s[i] <= 'Z'); j++, i++)
		/* main block of code*/
		{
			if (j == 2)
				j = 0;

			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;

			if (j == 1)
				break;
		}
	}

	return (s);
}

