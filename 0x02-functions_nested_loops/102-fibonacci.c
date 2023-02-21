#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1, num2, num3, num_next;

	num2 = 1;

	num3 = 2;

	for (num1 = 1; num1 <= 50; ++num1)
	{
		if (num2 != 20365011074)
		{
			printf("%ld, ", num2);
		} else
		{
			printf("%ld\n", num2);
		}
		next = num2 + num3;
		num2 = num3;
		num3 = num_next;
	}

	return (0);
}
