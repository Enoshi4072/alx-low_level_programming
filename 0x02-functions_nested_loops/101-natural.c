#include <stdio.h>

/**
 * main - calculates and outputs the sum of all the multiples of
 * of 5 or 3 provided it is below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int answer1, answer2, result;
	int i;

	answer1 = 0;
	answer2 = 0;
	result = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			answer1 = answer1 + i;
		} else if ((i % 5) == 0)
		{
			answer2 = answer2 + i;
		}
	}
	result = answer1 + answer2;
	printf("%lu\n", result);
	return (0);
}
