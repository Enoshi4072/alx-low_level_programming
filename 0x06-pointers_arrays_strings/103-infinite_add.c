#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size. *
 * Return: A pointer to the result, or 0 if the result cannot be stored
 * in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int next = 0, i, j;

	for (i = 0, j = 0; n1[i] != '\0' || n2[j] != '\0'; i++, j++)
	{
		if (n1[i] == '\0')
			r[j] = (n2[j] - '0') + next;
		else if (n2[j] == '\0')
			r[j] = (n1[i] - '0') + next;
		else
			r[j] = (n1[i] - '0') + (n2[j] - '0') + next;

		if (r[j] > 9)
		{
			next = 1;
			r[j] -= 10;
		}
		else
			next = 0;
	}

	if (next == 1 || j >= size_r)
		return (0);

	r[j] = '\0';

	return (r);
}
