#include "main.h"
/**
 * print_last_digit - a function to print the last digit of a num
 *
 * @j: parameter being called
 *
 * Return: k to be a success
 *
 */

int print_last_digit(int j)
{
	int k;

	k = j % 10;
	if (j < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
