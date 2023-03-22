#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 *
 * @n: parameter
 *
 * Return: 1 and prints + if n is > than 0
 * otherwise return 0 and print 0 if n = 0
 * else -1 and print - if n is < than 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
