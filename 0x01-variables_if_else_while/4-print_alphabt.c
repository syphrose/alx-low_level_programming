#include <stdio.h>
/**
 * main - input of the script
 *
 * Return: successful with 0
 *
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
