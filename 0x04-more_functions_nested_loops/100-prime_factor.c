#include <stdio.h>
#include <math.h>

/**
 * main - looks andprints the largest prime factor of the number 612852475143
 * a new line follows
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num_long;
	long int i;
	long int maximum;

	num_long = 612852475143;
	maximum = -1;

	while (num_long % 2 == 0)
	{
		maximum = 2;
		num_long /= 2;
	}

	for (i = 3; i <= sqrt(num_long); i = i + 2)
	{
		while (num_long % i == 0)
		{
			maximum = i;
			num_long = num_long / i;
		}
	}

	if (num_long > 2)
		maximum = num_long;

	printf("%ld\n", maximum);

	return (0);
}
