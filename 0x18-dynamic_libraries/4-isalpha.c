# include "main.h"
/**
 * _isalpha - function for checking alphabetic character
 *
 * @c: parameter to be checked bt isalpha
 *
 * Return: 1 if it's an alphabet
 * otherwise return 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
