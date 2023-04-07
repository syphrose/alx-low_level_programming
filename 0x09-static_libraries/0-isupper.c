#include "main.h"
/**
 * _isupper - checks for an uppercased letter
 * @a: the parameter to be checked
 *
 * Return: should be 1 for uppercase, otherwise 0
 *
 */

int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
	return (1);
	}
	return (0);
}
