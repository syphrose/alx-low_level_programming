#include "main.h"
#include <stdio.h>
/**
 * main - a function to print its name
 * @argv: vector arguments
 * @argc: counter parameter
 * Return: always 0
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
