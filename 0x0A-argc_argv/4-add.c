#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int addition = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		addition += atoi(argv[i]);
	}
	printf("%d\n", addition);
	return (0);
}
