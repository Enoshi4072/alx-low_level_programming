#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	unsigned long int num2, num3, num_next, result;

	num2 = 1;
	num3 = 2;
	result = 0;

	for (num1 = 1; num1 <= 33; ++num1)
	{
		if (num2 < 4000000 && (num2 % 2) == 0)
		{
			result = result + num2;
		}
		num_next = num2 + num3;
		num2 = num3;
		num3 = num_next;
	}

	printf("%lu\n", result);

	return (0);
}
