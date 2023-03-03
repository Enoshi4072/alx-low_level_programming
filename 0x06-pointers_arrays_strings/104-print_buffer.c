#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If the result can be stored in r - a pointer to the result.
 *         Otherwise - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, len_res = 0, carry = 0, sum = 0;

	while (n1[len1] != '\0')
		len1++;

	while (n2[len2] != '\0')
		len2++;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	len1--;
	len2--;
	r[size_r - 1] = '\0';

	while (len1 >= 0 || len2 >= 0)
	{
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1--] - '0';
		if (len2 >= 0)
			sum += n2[len2--] - '0';
		if (sum > 9)
		{
			carry = 1;
			sum -= 10;
		}
		else
			carry = 0;
		r[len_res++] = sum + '0';
	}

	if (carry > 0)
	{
		if (len_res + 1 > size_r)
			return (0);
		r[len_res++] = carry + '0';
	}

	len_res--;
	for (int i = 0; i < len_res; i++, len_res--)
	{
		char tmp = r[i];
		r[i] = r[len_res];
		r[len_res] = tmp;
	}

	return (r);
}
