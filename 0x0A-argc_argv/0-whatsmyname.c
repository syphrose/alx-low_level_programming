#include "main.h"
#include <stdio.h>
/**
 * main - prints the name
 * @argc: argument counter
 * @argv: array of the command line
 * @__attribute__((unused)): supresses errors while compiling
 * Return: 0
 *
 */
int main(int argc,__attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
