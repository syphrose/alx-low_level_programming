#include "main.h"
/**
 * _islower - printing lower-case
 *
 * @c: printed parameter
 *
 * Return: 1 if it has lower-case output
 * otherwise return 0
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
