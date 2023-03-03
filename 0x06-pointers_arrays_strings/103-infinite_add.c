include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void string_reverse(char *n)
{
	int num1 = 0;
	int num2 = 0;
	char temp_char;

	while (*(n + num1) != '\0')
	{
		num1++;
	}
	num1--;

	for (num2 = 0; num2 < num1; num2++, num1--)
	{
		temp = *(n + num2);
		*(n + num2) = *(num2 + num1);
		*(n + num1) = temporary;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int excess = 0, i = 0, j = 0, numbers = 0;
	int numberA = 0, numberB = 0, temporary_total = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || excess == 1)
	{
		if (i < 0)
			numberA = 0;
		else
			numberA = *(n1 + i) - '0';
		if (j < 0)
			numberB = 0;
		else
			numberB = *(n2 + j) - '0';
		temporary_total = numberA + numberB + excess;
		if (temporary_total >= 10)
			excess = 1;
		else
			excess = 0;
		if (numbers >= (size_r - 1))
			return (0);
		*(r + numbers) = (temporary_total % 10) + '0';
		numbers++;
		j--;
		i--;
	}
	if (numbers == size_r)
		return (0);
	*(r + numbers) = '\0';
	string_reverse(r);
	return (r);
}
