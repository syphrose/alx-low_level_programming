#include "main.h"
/**
 * _abs - computing function of an absolute value of an integer
 *
 * @s: parameter
 *
 * Return: s to be a success
 *
 */
int _abs(int s)
{
	if (s < 0)
		s = -(s);
	else if (s >= 0)
		s = s;
	return (s);
}
