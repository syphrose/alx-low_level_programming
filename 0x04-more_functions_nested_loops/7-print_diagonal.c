#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times  its printed
 *
 * Return: empty
 *
 */

void print_diagonal(int n)
{
	int u, v;

	if (n < +0)
	{
	_putchar('\n');
	}
	else
	{
	for (u = 0; u < n; u++)
	{
	for (v = 0; v < u; v++)
	{
	_putchar(32);
	}
	_putchar(32);
	_putchar('\n');
	}
	}
}
