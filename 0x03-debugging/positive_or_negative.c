#include <stdio.h>
/**
 * positive_or_negative - checking for positive or negative numbers
 *
 * @i: number to be checked
 *
 * Return: 0
 *
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}

