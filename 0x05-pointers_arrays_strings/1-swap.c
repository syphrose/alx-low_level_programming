#include "main.h"
/**
 * swap_int - Swapping the values of two integers
 * @a: value 1
 * @b: value 2
 *
 * Return: always 0
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
