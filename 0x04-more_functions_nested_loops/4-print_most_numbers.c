#include "main.h"

/**
 * print_most_numbers - print nums from 0 to 9
 * Description: Do not print 2 and 4
 *
 * Return: nums from 0 to 9
 *
 */
void print_most_numbers(void)
{
	int y = 0;

	for (y = 0; y <= 9; y++)
	{
	if (y == 2 || y == 4)
	{
	continue;
	}
	else
	{
	_putchar(y + '0');
	}
	}
	_putchar('\n');
}
