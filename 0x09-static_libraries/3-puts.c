#include "main.h"
/**
 *_puts - printing a string, followed by a new line, to stdout
 *@str: paremeter to call the string
 *
 *Return: Always 0
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
