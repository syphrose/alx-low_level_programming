#include "main.h"
#include <stdio.h>
/**
 * main - prints the name
 * @argc: argument counter
 * @argv: array of the command line
 * @_attribute_((unused)): compresses errors while compiling
 * Return: 0
 *
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
