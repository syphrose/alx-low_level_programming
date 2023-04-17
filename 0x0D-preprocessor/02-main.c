#include "stdio.h"
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0 to be a success
 *
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
