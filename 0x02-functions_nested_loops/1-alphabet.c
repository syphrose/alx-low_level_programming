#include "main.h"
/**
 * print_alphabet - printing alphabets in lower-case followed
 * by a new line using _putchar
 *
 * Return: should be 0
 *
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i >= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
