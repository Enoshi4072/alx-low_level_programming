#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int num1, num2, num3, num2a, num2b, num3a, num3b;

	num2 = 1;
	num3 = 2;

	printf("%lu", num2);

	for (num1 = 1; num1 < 91; num1++)
	{
		printf(", %lu", num3);
		num3 = num3 + num2;
		num2 = num3 - num2;
	}

	num2a = num2 / 1000000000;
	num2b = num2 % 1000000000;
	num3a = num3 / 1000000000;
	num3b = num3 % 1000000000;

	for (num1 = 92; num1 < 99; ++num1)
	{
		printf(", %lu", num3a + (num3b / 1000000000));
		printf("%lu", num3b % 1000000000);
		num3a = num3a + num2a;
		num2a = num3a - num2a;
		num3b = num3b + num2b;
		num3b = num3b - num2b;
	}

	printf("\n");

	return (0);
}
