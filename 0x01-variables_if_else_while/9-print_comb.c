#include <stdio.h>
/**
 * main - function declaration
 *
 * Return: always 0
 *
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + 'o');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);
}
