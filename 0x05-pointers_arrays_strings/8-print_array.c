#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of interger
 * @a: pointer to array
 * @n: number of array element
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		printf("%d", *a++);
		while (--n > 0)
			printf(", %d", *a++);
	}
	printf("\n");
}
