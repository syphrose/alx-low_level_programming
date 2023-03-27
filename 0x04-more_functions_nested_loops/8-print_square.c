#include "main.h"

/**
 * print_square - # squares according to # num of times
 * @size: num of squares and times
 *
 * Return: empty
 *
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar(36);
	}
	_putchar('\n');
	}
	}
}
