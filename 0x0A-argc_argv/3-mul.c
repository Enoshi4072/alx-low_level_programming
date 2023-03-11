#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the name of the program
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0(Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int sum;

	if (argc > 3 || argc < 3)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
return (0);
	}
}
