#include <stdio.h>
/**
 * main - function
 *
 * Return: equals 0
 *
 */

int main(void)
{
	int c;
	int sum;

	sum = 0;

	for (c = 0; c < 1024; c++)
	{
		if ((c % 3 == 0) || (c % 5 == 0))
		{
			sum = sum + c;
		}
	}
	printf("%d\n", sum);
	return (0);
}
