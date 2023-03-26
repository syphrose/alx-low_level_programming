#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: the number of straight lines to be drawn
 *
 * Return: empty
 *
 */

void print_line(int n)
{
	int t;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 0; t < n; t++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
