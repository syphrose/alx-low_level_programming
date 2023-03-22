#include "main.h"
/**
 *print_alphabet_x10 - printing alphabets 10 times
 *
 * Return: 0 for successful execution
 *
 */
void print_alphabet_x10(void)
{
	int a;

	char b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar('\n');
	}
}
