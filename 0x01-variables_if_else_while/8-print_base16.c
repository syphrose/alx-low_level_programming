#include <stdio.h>
/**
 * main - function
 *
 * Return: always 0
 *
 */

int main(void)
{
	int i;
	char h;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (h = 'a' ; h <= 'f' ; h++)
		putchar(h);
	putchar('\n');
	return (0);
}
