#include <string.h>
/** 
 * infinite_add - adding two numbers
 * @r: buffer to store the function reault
 * @size_r: size of the buffer
 * @n1: first number to be added
 * @n2: second num
 *
 * Return: a ptr to the result
 *
 */
char* infinite_add(char* n1, char* n2, char* r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int len = len1 > len2 ? len1 : len2;
	if (len + 1 > size_r) return 0;
	/* check if result can be stored in r*/
	int carry = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int k = len;
	r[k] = '\0';
	
	while (i >= 0 || j >= 0 || carry != 0)
	{
		int sum = carry;
		/*You can assume that you will always 
		 * get positive numbers, or 0*/
		if (i >= 0) sum += n1[i] - '0';
		if (j >= 0) sum += n2[j] - '0';
		carry = sum / 10;
		r[--k] = '0' + sum % 10;
		i--;
		j--;
	}
	return (r + k);
}

