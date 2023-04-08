#include <stdio.h>
/**
 * main - a function to print its name
 * @argv: vector arguments
 * @argc: counter parameter
 * Return: always 0
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
