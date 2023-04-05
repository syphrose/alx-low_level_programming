#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: number to give factorial
 * Return: an integer
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
